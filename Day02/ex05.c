#include <stdio.h>        //ǥ�������
#include <string.h>       //���ڿ��� �ٷ�� �������

int main(void) {
    char phone[10] = "samsung";

    printf("����Ʈ�� �̸� : %s \n", phone);
    //���ڿ� ���� �Լ� - strcpy
    //strcpy(������� ����, ������ ���ڿ�);
    strcpy(phone, "Iphone 12");
    printf("����Ʈ�� �̸� : %s", phone);

    return 0;

}