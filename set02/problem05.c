// 05.  Write a program to find GCD _(HCF)_ of two numbers.

#include <stdio.h>

int input();
int find_gcd(int a, int b);
void output(int a, int b, int gcd);

int main()
{
    int a,b,gcd;
    a=input();
    b=input();
    gcd=find_gcd(a,b);
    output(a,b,gcd);
    return 0;
}
int input()
{
    int x;
    printf("Enter a number:");
    scanf("%d",&x);
    return x;
}
int find_gcd(int a, int b)
{   
    int c=a%b;
    if (c!=0)
    {
        find_gcd(b,c);
    }
    else
    {
        return b;
    }    
}
void output(int a, int b, int gcd)
{
    printf("The hcf of the given numbers %d and %d is %d",a,b,gcd);
}