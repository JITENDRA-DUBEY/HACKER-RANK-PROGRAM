#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n,sum=0,i;

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    scanf("%d\n",&n);
    int a[n];
    for(i=0;i<=n-1;i++)
    {
        scanf("%d",&a[i]);
        
    }
    for(i=0;i<=n-1;i++)
    {
        sum=sum+a[i];
    }
    printf("%d",sum);
       return 0;
}

