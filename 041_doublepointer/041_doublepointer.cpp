// 041_doublepointer.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <stdio.h>

int main()
{
    int a = 10;
    int* ptr = &a;
    int** pptr = &ptr;//double pointer

    printf("1. a=%d\n", a);
    printf("2. &a=%p\n", &a);
    printf("3. ptr=%p\n", ptr);//2번 3번은 같은 값
    printf("4. &ptr=%p\n", &ptr);
    printf("5. pptr=%p\n", pptr);//4번 5번은 같은 값
    printf("6. *pptr=%p\n", *pptr);//2번과 같은 값
    printf("7. **pptr=%d\n", **pptr);//1번과 같은 값
}

