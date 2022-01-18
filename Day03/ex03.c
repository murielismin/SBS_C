#include <stdio.h>

int main(void) {
    double number1 = 10;   //자동형변환
    int number2 = 1.2345;
    short number3 = 40000;  //범위의 한계가 약 32,000인데 4만이 되어버려서 이상한 값이 나타남.
    //특정 자료형이 갖는 범위보다 더 큰 값ㅎ을 할당하는 경우 : overflow

    printf("number1 : %f \n", number1);
    printf("number2 : %d \n", number2);
    printf("number3 : %d \n", number3);

    return 0;


}