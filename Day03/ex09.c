#include <stdio.h>

int main(void) {

    int a = 10;
    int b = 20;
    int c;

    // ���������� : ���� �տ� �ۼ��ϴ� ����������
    // ��κ��� �����ں��� ���� �켱 ������ �ռ���.
    //������� :  ++ > + > =
    c = ++a + b;
    printf("c = %d\n", c);  // c = ?

    int x = 10;
    int y = 20;
    int z;

    //���������� : ���� �ڿ� �ۼ��ϴ� ����������
    // ��κ��� �����ں��� ���� �켱������ ����.
    // ������� : + > = > ++
    z = x++ + y;
    printf("z = %d\n", z);  // z = ?

    return 0;


}