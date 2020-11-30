/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int x,a,b;
    while(1)
    {
        system("cls");
        printf("\n1.addition");
        printf("\n2.subtraction");
        printf("\n3.Ext");
        printf("\n\nEnter your choice");
        scanf("%d",&x);
        switch(x)
        {
            case 1:
            printf("Enter two number");
            scanf("%d%d",&a,&b);
            printf("sum is %d",a+b);
            break;
            case 2:
            printf("Enter two number");
            scanf("%d%d",&a,&b);
            printf("difference is %d",a-b);
            break;
            case 3:
            exit (0);
            default:
            printf("Invalid choice");
        }
        getch();
    }
}
