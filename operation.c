#include <stdio.h>
int main()
{
    int a , b , add , subtract , multiply;
    float divide;
    printf("Enter 1st number: \n");
    scanf("%d", &a);
    printf("Enter 2nd number: \n");
    scanf("%d", &b);
    printf("Sum=%d\n",a + b);
    printf("Subtrction=%d\n",a - b);
    printf("Multiplication=%d\n",a * b);
    printf("Division=%f\n",(float)a /(float) b);
    return 0;

}