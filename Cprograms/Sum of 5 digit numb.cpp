#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
    int n,r,i,sum=0;
    scanf("%d", &n);
    //Complete the code to calculate the sum of the five digits on n.
    for(i=1;i<=5;i++)
    {
        r=n%10;
        n=n/10;
        sum=sum+r;
    }
    printf("%d",sum);
    return 0;
}

