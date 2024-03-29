//9. Write a C program to find the [square root](https://en.wikipedia.org/wiki/Methods_of_computing_square_roots#Babylonian_method) of a number.
 
#include <stdio.h>

float input();
float square_root(float n);
void output(float n, float sqrroot);

int main()
{
    float n,sqrt;
    n=input();
    sqrt = square_root(n);
    output(n,sqrt);
    return 0;
}
float input()
{
    float n;
    printf("Enter a number:");
    scanf("%f",&n);
    return n;
}
float square_root(float n)
{
    float x=n,y=1,epsilion=0.000001;
    while (x-y>epsilion)
    {
        x = (x+y)/2;
        y = n/x;
    }
    return x;
}
void output(float n, float sqrroot)
{
    printf("The square root of %.2f is %.2f",n,sqrroot);
}