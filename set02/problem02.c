// 02.  Write a program to find if a triangle is scalene.
// > A triangle is scalene if all the three sides of the triangle are not equal to one another

#include <stdio.h>

int input_side();
int check_scalene(int a, int b, int c);
void output(int a, int b, int c, int isscalene);

int main()
{
    float s1,s2,s3,t;
    s1 = input_side();
    s2 = input_side();
    s3 = input_side();
    t = check_scalene(s1,s2,s3);
    output(s1,s2,s3,t); 
}
int input_side()
{
    float a;
    printf("Enter the side of  the triangle: \n");
    scanf("%f",&a);
    return a;
}
int check_scalene(int a, int b, int c)
{
    if (a!=b && a!=c && b!=c)
    {
        return 2;
    }
    else
    {
        return 3;
    }
}
void output(int a, int b, int c, int isscalene)
{
    if (isscalene == 2 )
    {
        printf("The triangle is scalene");
    }
    else
    {
        printf("The triangle is not scalene");
    }
}