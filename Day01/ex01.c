#include <stdio.h>

// ���α׷� ���� - main() �Լ�
int main() {
// �ּ�-���α׷� ������ �ۼ��ϴ� ����
//��¹�
printf("�ȳ��ϼ���! \n");

//���� ����
int num = 10;

char a = 'a';   //����
int b, c;       //������ : 1,2.3.4....
double d;       //�Ǽ��� : 1.5, 2.6 ...

b = 10;
c = 20;
d= 1.25;

// \n : �ٹٲ�
// %d : deximal(������),   %5d : 5ĭ�� �����ؼ� ������ ����,    %-5d : 5ĭ�� �����ؼ� ���� ����
// %c : ����
// %f : �Ǽ� , %.n : �Ҽ��� �Ʒ� n�ڸ����� ���
printf("qustn a : %c \n", a);
printf("qustn b : %5d \n", b);
printf("qustn c : %-5d \n", c);
printf("qustn d : %.2f \n", d);



printf("%d", num);


return 0;

}