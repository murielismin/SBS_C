#include <stdio.h>

int main(void) {

    int a = 10;
    int b = 20;
    int c;

    // 전위연산자 : 변수 앞에 작성하는 증감연산자
    // 대부분의 연산자보다 연산 우선 순위가 앞선다.
    //연산순서 :  ++ > + > =
    c = ++a + b;
    printf("c = %d\n", c);  // c = ?

    int x = 10;
    int y = 20;
    int z;

    //후위연산자 : 변수 뒤에 작성하는 증감연산자
    // 대부분의 연산자보다 연산 우선순위가 낮다.
    // 연산순서 : + > = > ++
    z = x++ + y;
    printf("z = %d\n", z);  // z = ?

    return 0;


}