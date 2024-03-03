// 06. Write a program to reverse a string.

#include <stdio.h>

void input_string(char *a);
void str_reverse(char *str, char *rev_str);
void output(char *a, char *reverse_a);

int main()
{

}
void input_string(char *a)
{
    printf("Enter a string:");
    scanf("%s",a);
}
void str_reverse(char *str, char *rev_str)
{
    int len1=srlen(str);
    for(inti=0;i<len1;i++)
    {
        reva[i] = str[len-1-i];
    }
    reva[len1] = '\0';
}
void output(char *a, char *reverse_a)
{
    
}