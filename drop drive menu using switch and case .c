/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int x,a,b;
    printf("\n1.Addition");
    printf("\n2.Subtraction");
    printf("\n3.Multiply");
    printf("\nEnter your choice");
    scanf("%d",&x);
    switch(x)
    {
        case 1:
        printf("Enter two number");
        scanf("%d%d",&a,&b);
        printf("sum is %d",a+b);
        break;
        case 2:
        printf("Enter two numbers");
        scanf("%d%d",&a,&b);
        printf("difference is%d",a-b);
        case 3:
        printf("Enter two number");
        scanf("%d%d",&a,&b);
        printf("%d*%d=%d",a,b,a*b);
        break;
        default:
        printf("Invalid choice");
    }
    getch();
    }