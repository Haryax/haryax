//08. Write a program to find the triangle with smallest area in n given triangles.

#include <stdio.h>

typedef struct _triangle {
	float base, altitude, area;
} Triangle;

int input_n();
Triangle input_triangle();
void input_n_triangles(int n, Triangle t[n]);
void find_area(Triangle *t);
void find_n_areas(int n, Triangle t[n]);
Triangle find_smallest_triangle(int n, Triangle t[n]);
void output(int n, Triangle t[n], Triangle smallest);

int main()
{
    int n;
    n=input_n();
    Triangle t[n];
    input_n_triangles(n,t);
    find_n_areas(n,t);
    Triangle small = find_smallest_triangle(n,t);
    output(n,t,small);
    return 0;
}

int input_n()
{
    int n;
    printf("Enter  number of triangles: ");
    scanf("%d", &n);
    return n;
}
Triangle input_triangle()
{
    Triangle t;
    printf("Enter a number for base :");
    scanf("%f",&t.base);
    
    printf("Enter a number for altitude :");
    scanf("%f",&t.altitude);
    return t;
}
void input_n_triangles(int n, Triangle t[n])
{
    for (int i = 0; i < n; ++i)
    {
        printf("Triangle %d:\n ",i+1);
        t[i] = input_triangle();
    }
}
void find_area(Triangle *t)
{
    t->area = 0.5*t->base * t->altitude;
}
void find_n_areas(int n, Triangle t[n])
{
    for (int i=0; i<n; i++)
    {
        find_area(&t[i]);
    }
}
Triangle find_smallest_triangle(int n, Triangle t[n])
{
    Triangle small=t[0];
    for (int i=1; i<n; i++)
    {
        if (t[i].area < small.area)
        {
            small = t[i];
        }
    }
    return small;
}
void output(int n, Triangle t[n], Triangle smallest)
{
    printf("The smallest triangle is \n");
    printf("Base: %f\n",smallest.base);
    printf("Altitude: %f\n",smallest.altitude);
    printf("Area: %f\n",smallest.area);
}