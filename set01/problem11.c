//11. Write a C program to find the sum of 2 complex numbers
#include <stdio.h>

struct _complex {
	float real;
	float imaginary;
};
typedef struct _complex Complex;

Complex input_complex();
Complex add_complex(Complex a, Complex b);
void output(Complex a, Complex b, Complex sum);

int main()
{
	Complex C1,C2,Sum;
	C1 = input_complex();
	C2 = input_complex();
	Sum = add_complex(C1,C2);
	output(C1,C2,Sum);
}
Complex input_complex()
{
	Complex C;
	printf("Enter the real part of the number:\n ");
	scanf("%f",&C.real);
	printf("Enter the real part of the number:\n ");
	scanf("%f",&C.imaginary);
	return C;
}
Complex add_complex(Complex a, Complex b)
{
	Complex Sum;
	Sum.real = a.real + b.real;
	Sum.imaginary= a.imaginary + b.imaginary;
	return Sum;
}
void output(Complex a, Complex b, Complex sum)
{
	printf("C1 is %f +i%f\n",a.real,a.imaginary);
	printf("C1 is %f +i%f\n",b.real,b.imaginary);

	printf("The sum of the two complex No's is: %f +i%f\n",sum.real,sum.imaginary);
}
