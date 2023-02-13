#include <stdio.h>
#include <math.h>
#include <ctype.h>
int main()
/*{
    float radius;
    printf("Enter radius: ");
    scanf("%f",&radius);
    printf("Area is: %.2f sq units\n",M_PI*radius*radius);
    printf("Circumference is : %.2f",2*M_PI*radius);
   return 0;
}*/ 
//{
//    printf("%s",__TIME__);
//}
//{
//    char a='1';
//    float b=50;
//    if (a<b)
//    {
//        printf("yes %d\n",a);
//    }
//    printf("HEllo");
//    return 0;
//}
/*{
    int a=10;
    int b=5;
    int c=3;
    if (a>b>c) //if a>b value is true then it is taken as 1,therefore 1!>3
    {
       printf("yes %d\n",a);
    }
   printf("outside ");
   return 0;
}*/
/*{
    int a;
    printf("Enter the numeber:");
    scanf("%d",&a);
    if (a%2==0)
    {
        printf("it is even");
    }
    else
    {
        printf("it is odd");
    }
}*/
/*{

    int a;
    printf("enter number: ");
    scanf("%d",&a);
    (a%2==0)?printf("Even"):printf("Odd");
    return 0;
}*/
/*{
    int a,b,c,d;
    printf("Enter the values");
    scanf("%d %d %d",&a ,&b, &c);
    d=(b*b)-(4*a*c);
    printf("%d\n",d);
    if (d>0)
    {
        printf("roots are real");
    }
    else if (d<0)
    {
        printf("no real roots");
    }
    else if (d=0)
    {
        printf("distinct roots");
    }
    return 0;

}*/
/*{
    int amount,notes_of_500,notes_of_200,notes_of_100,e,f;
    printf("Enter the amount:\n");
    scanf("%d",&amount);
    notes_of_500=amount/500;
    e=amount%500;
    notes_of_200=e/200;
    e=notes_of_200%200;
    notes_of_100=e/100;
    f=notes_of_100%100;
    printf("no. of 500 notes: %d\n",notes_of_500);
    printf("no. of 200 notes: %d\n",notes_of_200);
    printf("no. of 100 notes: %d\n",f);
}*/
/*{
    int a=5;
    printf("%d %d %d %d %d",a,--a,--a,--a,--a);
}*/
/*{
    int i,j;
    i=10;
    j=10;
    if (i==1)
    {
        printf("how are you");
    }
    else if (i==10)
    {
        printf("yes");

    }
    else if (j==10)
    {
        printf("no");
    }
    return 0;
}*/
/*{
    int a,b;
    int temp;
    printf("enter the no.\n");
    scanf("%d %d",&a,&b);
    temp=a;
    a=b;
    b=temp;
    printf("%d %d",a,b);
}*/
/*{
    int a,b;
    printf("enter no.:\n");
    scanf("%d %d",&a,&b);
    
    a=a+b;
    b=a-b;
    a=a-b;
    printf("%d %d",a,b);
}*/
/*{
    printf("%d",printf("%s","how are you\n"));

}*/
/*{
    int a;
    int z=scanf("%d",&a);
    printf("%d",z);
    
}*/
/*{
    char a;
    a=getchar();
    if (isalpha(a))
    {
        printf("yes this is\n");
        putchar(toupper(a));
    }
    else 
    {
        printf("no it is not");
    }
    return 0;
}*/
/*{
    char a[10];
    gets(a);
    puts(a);
 
}*/
/*{
    char a;
    printf("enter character:\n");
    a=getchar();
    if (islower(a))
    {
        putchar(toupper(a));
    }
    else
    {
        putchar(tolower(a));
    }
}*/
/*{
    int marks,m;
    printf("enter marks:\n");
    scanf("%d",&marks);
    m=marks/10;
    switch (m)
    {
        case 100:
            printf("A\n");
            break;
        case 90:
            printf("B\n");
            break;

    }

}*/
//range can be written as eg. case 75...100
/*{
    int a,b,c;
    printf("Plz enter your group id:\n");
    scanf("%d",&a);
    switch (a){
        case (15):
        printf("%d\n",a);
        break;
        case (17):
        printf("%d\n",a);
        break;
        case (19):
        printf("%d\n",a);
        break;
        default:
        printf("incorrect id\n");
        break;
        }
    printf("enter your roll no.\n");
    scanf("%d",&b);    
    switch (b){
        case (1):
        printf("WELCOME %d\n");
        break;
        case (2):
        printf("WELCOME %d\n");
        break;
        case (3):
        printf("WELCOME %d\n");
        break;
        case (4):
        printf("WELCOME %d\n");
        break;
        case (5):
        printf("WELCOME %d\n");
        break;
        default:
        printf("incorrect roll no.");
        break;

    }  
    
        

}*/
/*{
    char a;
    int b,c;
    printf("choose operator\n","+\n","-\n","*\n","/\n");
    scanf("%c",&a);
    if (a=='*'|| a=='+'|| a=='-'|| a=='/')
    switch (a){
        case '+' :
        printf("%c",a);
        break;
        case '-':
        printf("%c",a);
        break;
        case '*':
        printf("%c",a);
        break;
        case '/':
        printf("%c",a);
        break;
        default:
        printf("not valid operator");
        break;
    printf("enter 2 no.\n");
    scanf("%d %d",&b,&c);
        

    }
    else 
    printf("not valid operator");
    
}*/
/*{
    int a,month,year;
    printf("Enter year: \n");
    scanf("%d",&year);
    printf("Enter month: \n");
    scanf("%d",&month);
    if (year % 400 == 0)
     {
        a=29;
      }
   
       else if (year % 100 == 0) 
       {
    a=29;
      }
   
       else if (year % 4 == 0) 
       {
        a=29;
     }
   else 
     {
    a=28;
   }  

switch (month)
{
    case 1:
    case 2:
    case 3:
    printf("total days: %d",a);
}
 return 0;
}*/

    /**
 * C program to check positive negative or zero using switch case
 */ 

{
    int num;

    printf("Enter any number: ");
    scanf("%d", &num);

    switch (num > 0)
    {
        // Num is positive
        case 1:
            printf("%d is positive.", num);
        break;

        // Num is either negative or zero
        case 0:
            switch (num < 0)
            {
                case 1: 
                    printf("%d is negative.", num);
                    break;
                case 0:
                    printf("%d is zero.", num);
                    break;
            }
        break;
    }

    return 0;
}



