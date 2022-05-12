// 문제 설명
// 두 가지의 참(1) 또는 거짓(0)이 입력될 때,
// 모두 거짓일 때에만 참이 계산되는 프로그램을 작성해보자.

// 입력
// 1 또는 0의 값만 가지는 2개의 정수가 공백을 두고 입력된다.

// 출력
// 둘 다 거짓일 경우에만 1을 출력하고 이외의 경우에는 0을 출력한다.

#include <stdio.h>

int main(void)
{
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d", a + b == 0);
    return 0;
}