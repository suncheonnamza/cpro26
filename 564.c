#include <stdio.h>

struct  student
{
    int number;
    char *name;
    double grade;
};

int equal(struct student *, struct student *);

int main(){
    struct student a = {1, "lee", 3.8};
    struct student b = {2, "kim", 4.0};
    if (equal(&a,&b) == 1){
        printf("같은학생\n");
    }
    else{
        printf("다른학생\n");
    }
}

int equal(struct student *s1, struct student *s2){
    if ((*s1).number == (*s2).number)
        return 1;
    else 
        return 0;
}