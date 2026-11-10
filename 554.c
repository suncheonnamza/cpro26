#include <stdio.h>

struct date {
    int year;
    int month;
    int day;
};

struct students {
    int number;
    struct date dob;
    double grade;
};  

int main() {
    struct students s1;

    s1.dob.year = 2000;
    s1.dob.month = 3;
    s1.dob.day = 29;

    printf("Date of birth: %d %d %d\n",s1.dob.year, s1.dob.month, s1.dob.day);

    return 0;
}