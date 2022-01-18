#include <stdio.h>
//비교 연산자
int main(void) {
    int a = 10;
    int b = 11;
    // 비교 연산 시, 결과가 참이면 1, 거짓이면 0

    printf("a == b : %d \n", a == b);
    printf("a > b : %d \n", a > b);
    printf("a < b : %d \n", a < b);
    printf("a >= b : %d \n", a >= b);
    printf("a <= b : %d \n", a <= b);
    printf("a != b : %d \n", a != b);   //결과가 달라야 1

    return 0;

}