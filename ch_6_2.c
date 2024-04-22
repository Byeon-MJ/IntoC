//
// Created by MJ on 2024-04-22.
//
#include <stdio.h>

void pointer_10_1()
{
    static int a[] = {10, 20, 30, 40, 50};
    int *pt, b, c, d;
    pt = a;
    b = *pt + *(pt+3);
    pt ++;
    c = *pt + *(pt+3);
    d = *pt + 3;
    printf("b=%d, c=%d, d=%d", b, c, d);
}

// 포인터를 이용한 2차원 배열의 참조 예
void pointer_10_2()
{
    static int a[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, -9}};
    int *pt;
    pt = a[0];
    while(*pt != -9)
    {
        printf("%d ", pt);
        printf("%d ", *pt);
        pt ++;
    }
}

// 포인터와 배열의 호환 예
void pointer_10_3()
{
    char A[] = "ARRAY";
    char *p = "POINTER";
    int i;
    for(i=0; i<5; i++)
        printf("*(A+%d) : %c\n", i, *(A+i));    // 배열을 포인터 형식으로 참조
    for(i=0; i<7; i++)
        printf("p[%d] : %c\n", i, p[i]);        // 포인터를 배열 형식으로 참조
}

// 포인터 배열의 사용 예
void pointer_10_4()
{
    int a[] = {1, 2, 3, 4};
    int b[] = {5, 6, 7, 8};
    int *PA[2]; // 포인터 배열의 선언
    PA[0] = a;  // 배열 a[]의 시작 주소를 포인터 배열 요소에 전달
    PA[1] = b;  // 배열 b[]의 시작 주소를 포인터 배열 요소에 전달
    printf("*(PA[0]) = %d\n", *(PA[0]));
    printf("*(PA[0]+1) = %d\n", *(PA[0]+1));
    printf("*PA[1] = %d\n", *PA[1]);
    printf("*PA[1]+15 = %d\n", *PA[1]+15);
}