//area of circle in C
#include<stdio.h>
int main(){
    const float PI = 3.14;
    float radius , area;

    printf("radius of circle is :");
    scanf("%f", &radius);

    area = PI * radius * radius;

    printf("area of circle is : %f", area);

    return 0;
}