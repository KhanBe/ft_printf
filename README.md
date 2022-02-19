# ft_printf

## description
42서울의 3번째 프로젝트   
   
libc의 printf를 재구현 하는 프로젝트이다.
---

### Mandatory
사용가능한 외부 함수가 많이 추가되었다.

```va_start``` ```va_arg``` ```va_copy``` ```va_end```

이 함수들을 알기 위해 가변인자에 대해 알아야 한다.

**특정 함수에 인자의 수를 마음대로 담을 수 있는 것** 이라 보면 된다.

```
sum(1);
sum(1,2);
sum(1,2,3);
```
이런 식으로 인자의 개수의 변경 가능, printf처럼.

가변인자를 다루고싶으면 ```#include<stdarg.h>``` 헤더 추가해주면 된다.

**가변인자 함수 프로토타입**   
```void sum(int args, ...);``` 처럼 뒤에 '...'을 사용한다.


```va_list ap;```   
- 각 가변인자의 시작 주소를 가리키는 포인터 역할을 한다.
- ap : 가변인자를 저장하는 변수   


```va_start(ap, pN);```   
- 가변인자의 초기화 매크로   
- 가변인자 중 첫 번째 인자의 주소를 가르쳐 준다.
- pN : 가변인자의 마지막 고정인수   
- ```#define va_start(ap, v)	( (ap) = (va_list)_ADDRESSOF(v) + _INTSIZEOF(v) )```


```va_arg(ap, type);```   
- 가변인자의 값을 가져오는 매크로   
- type : 가져올 변수의 type을 지정   
- ```#define va_arg(ap, t)	( *(t *)((ap += -INTSIZEOF(t)) - _INTSIZEOF(t)) )```

```va_end(ap);```   
- ap(va_list)에 들어있는 포인터를 참조하여 초기화하는 매크로    
- 가변인자 변수를 끝낼 때 사용  
- 단순히 NULL 포인터로 바꿔주는 매크로    
- ```#define va_end(ap)		( ap = (va_list)0 )```

### printf   
