#include <stdio.h>
int main()
{
    int a;  //int형(정수형) 변수 a
    a = 127;
    printf_s("a의 값은 %d진수로 %o 입니다.\n", 8, a);   //8진수로 출력
    printf_s("a의 값은 %d진수로 %d 입니다.\n", 10, a);  //10진수로 출력
    printf_s("a의 값은 %d진수로 %x 입니다.\n", 16, a);  //16진수로 출력

    float b;    //float형(실수형)변수 b
    double c;   //double형(실수형)변수 c
    b = 3.141592f;  //float형 변수는 대입할 값 뒤에 f를 붙여야 한다.
    c = 3.141592;
    printf_s("b = %f \n", b);
    printf_s("c = %f \n", c);
    return 0;
}