#include <stdio.h>
float calculatePercentage(float,float,float);
int main()
{
    float m1,m2,m3;
    printf("\nEnter 3 Subject Marks: ");
    scanf("%f%f%f",&m1,&m2,&m3);
    printf("\nPercentage= %.2f",calculatePercentage(m1,m2,m3));
    return 0;
}

float calculatePercentage(float m1,float m2,float m3)
{
    return (m1+m2+m3)/3;
}
