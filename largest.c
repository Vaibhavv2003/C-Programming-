#include <stdio.h>
int main()
{
    int a,b,c,z;
    printf("Enter the numbers\n");
    scanf("%d %d %d",&a,&b,&c);
    z=(a>b&&a>c)?a:b>c?b:c;
    printf("%d is greater",z);
}    
    
