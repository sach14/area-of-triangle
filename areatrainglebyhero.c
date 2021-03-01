#include <stdio.h>
#include <math.h>
int main()
{
    float s, area, a, b, c;
    printf("Please enter the side of triangle:");
    scanf("%f%f%f", &a, &b, &c);
    s = a + b + c / 2;
    area = sqrt(s * (s - a) * (s - b) * (s - c));
    printf("The area of triangle= %f\n", area);
    return 0;
}