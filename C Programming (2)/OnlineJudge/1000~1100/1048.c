// main 함수에서는 두 int 변수 A, B를 입력 받아 순서대로 sub() 함수의 인자로 넘겨주게 된다.
// int 타입의 두 변수를 인자로 받아 그 차를(A-B) 리턴하는 sub() 함수를 완성하라.

// 아래 코드를 복사해서 필요한 부분을 채우시오.
// 단, main 함수는 절대 건들지 않는다.

#include <stdio.h>

// ===============================================
// 이 부분에 필요한 코드를 작성하시오.

int sub(int a, int b) {
    return a - b;
}

// ===============================================


int main() {


    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d", sub(a, b));


    return 0;
}