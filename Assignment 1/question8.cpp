#include <stdio.h>
#include <cmath>

void update(int *a,int *b) {
    int s;
    int d;
    s=(*a + *b);
    d=abs (*a - *b);
    *a=s;
    *b=d;
    
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
