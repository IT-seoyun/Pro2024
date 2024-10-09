// 030_breakcontinue.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <stdio.h>

int main()
{
    int n;

    printf("n 입력 : ");
    scanf_s("%d", &n);

    for (int i = n; i >= 1; i--)
        printf("%d", i);
    printf("\n");
    //for (; n >= 1; n--)
    //  printf("%d", n);
    //printf("\n");

        //2의 n제곱
    int pow = 1;

    for (int i = 1; i <= n; i++)
        pow *= 2;
    printf("%d\n", pow);

    //break

    //0이 입력될 떄까지 입력된 숫자를 출력하는 프로그램
    for (; int i = 1; i++) {
        int k;
        printf("숫자 입력(끝내기는 0) : ");
        scanf_s("%d", &k);
        if (k == 0)
            break;
        printf("%d번째입력:%d\n", i, k);
    }

    //continue
    //3의 배수를 제외하고 3부터 n까지 출력
    int n;

    printf("n 입력");
    scanf_s("%d", &n);

    for (int i = 1; i <= n; i++) {
        if (i % 3 == 0)
            continue;
        printf("%d", i);
    }
    printf("\n");

    //double loop
    //예제 4.22
    //n x n 정사각형
    int n;
    printf("n입력:");
    scanf_s("%d", &n);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            printf("*");
        printf("\n");

    }

    //x x y사각형
    int x, y;

    printf("x x y사각형의 x,y입력:");
    scanf_S("%d%d", &x & y);

    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++)
            printf("0");
        printf("\n");
    }

    //높이가 a 인 계단
    int a;

    printf("a입력:");
    scanf_s("%d", &a);

    for (int i = 1; i <= a; i++) {
        for (int j = 1; j <= i; j++)
            printf("*");
        printf("\n");
    }



}

// 프로그램 실행: <Ctrl+F5> 또는 [디버그] > [디버깅하지 않고 시작] 메뉴
// 프로그램 디버그: <F5> 키 또는 [디버그] > [디버깅 시작] 메뉴

// 시작을 위한 팁: 
//   1. [솔루션 탐색기] 창을 사용하여 파일을 추가/관리합니다.
//   2. [팀 탐색기] 창을 사용하여 소스 제어에 연결합니다.
//   3. [출력] 창을 사용하여 빌드 출력 및 기타 메시지를 확인합니다.
//   4. [오류 목록] 창을 사용하여 오류를 봅니다.
//   5. [프로젝트] > [새 항목 추가]로 이동하여 새 코드 파일을 만들거나, [프로젝트] > [기존 항목 추가]로 이동하여 기존 코드 파일을 프로젝트에 추가합니다.
//   6. 나중에 이 프로젝트를 다시 열려면 [파일] > [열기] > [프로젝트]로 이동하고 .sln 파일을 선택합니다.
