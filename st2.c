#include <stdio.h>
int main()
/*{
    int i=1 ;
    while (i<=6)
    {
        printf("%d%d \n",i,i);
        i++;
    }
    return 0;
}*/
//reverse of a number
/*{
    int a,reverse=0;
    scanf("%d",&a);
    while (a>0)
    {
        reverse=(reverse*10)+(a%10);
        a=a/10;
       }
       printf("%d",reverse);
}*/
//factorial
/*{
    int sum=1;
    int number;
    scanf("%d",&number);
    while (number>=1)
    {
        sum = sum*number;
        number--;
    }
    printf("%d",sum);

}*/
{
    int i=1,j;

    while (i<=5)
    {
       j=i;
       while (j<=(i*10))
       {
        if (j<10)
        {
            printf("0%d ",j);
        }
        else {
            printf("%d ",j);
        
            }
            j+=i;
            
       }
    
       printf("\n");
       i++;
    }


}

