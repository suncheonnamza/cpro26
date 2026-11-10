#include <stdio.h>

typedef struct point {
    int x;
    int y;
} POINT;

POINT translate(POINT p, POINT d);

int main() {
    POINT p = {2, 3};
    POINT d = {10, 10};
    POINT result;

    result = translate(p, d);

    printf("(%d,%d)+(%d, %d)->(%d,%d)\n",
           p.x, p.y, d.x, d.y, result.x, result.y);

    return 0;
}

POINT translate(POINT p, POINT d)
{
    POINT new_p;

    new_p.x = p.x + d.x;
    new_p.y = p.y + d.y;

    return new_p;
}