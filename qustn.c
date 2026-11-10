#include <stdio.h>

int main(void){
    float radius;
    float area;
    printf("원의 반지름: \n\n");
    scanf("%f",&radius);

    area = 3.141592 * radius * radius;
    printf("원의 면적: %f", area);
}