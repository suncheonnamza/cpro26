#include <stdio.h>


struct students{
    int number;
    char name[100];
    double grade;
    };

int main(void){
        
    struct students s = {20230001, "Kimjihoon", 4.3};

    printf("학번:%d\n",s.number);
    printf("학점:%.2f\n", s.grade);
    printf("이름:%s\n",s.name);

    return 0;
    }