#include <stdio.h>

int main(void) {
    double number1 = 10;   //�ڵ�����ȯ
    int number2 = 1.2345;
    short number3 = 40000;  //������ �Ѱ谡 �� 32,000�ε� 4���� �Ǿ������ �̻��� ���� ��Ÿ��.
    //Ư�� �ڷ����� ���� �������� �� ū ������ �Ҵ��ϴ� ��� : overflow

    printf("number1 : %f \n", number1);
    printf("number2 : %d \n", number2);
    printf("number3 : %d \n", number3);

    return 0;


}