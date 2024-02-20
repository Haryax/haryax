// 03.  Write a program find whether a number is a composite number
// > A Composite number has more than 2 factors.

#include <stdio.h>

int input_number();
int is_composite(int n);
void output(int n, int result);

int main()
{
    int n,result;
    n = input_number();
    result = is_composite(n);
    output(n,result);
}
int input_number()
{
    int x;
    printf("Enter any number:\n");
    scanf("%d",&x);
    return x;
}
int is_composite(int n)
{
    for (int i=2;i<n/2;i++)
    {
        if (n%i == 0)
        {
            return 1;
        }
        else
        {
            continue;
        }
    }
    return 69;
}
void output(int n, int result)
{
    if (result == 1)
    {
        printf("The number %d is a composite number.",n);
    }
    else
    {
        printf("The number %d is prime number.",n);
    } 
}