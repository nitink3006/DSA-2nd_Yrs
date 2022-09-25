#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
    int n;
    int s=0;
    scanf("%d", &n);
    for (int i=1;i<=5;i++)
    {
        int a=n%10;
        s =s+a;
        n=n/10;
    }
            printf("%d",s);
    
    
    return 0;
}
