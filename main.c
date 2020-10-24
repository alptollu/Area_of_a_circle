#include <stdio.h>
#include <stdlib.h>
#define PI 3.141

int main() {
    float r,area_circle;

    printf("Please enter your circle's diameter in meters to calculate area of it:\n");
    scanf("%f",&r);

    printf("Area of circle in given diameter is %f squaremeters!",PI*r*r);
}
