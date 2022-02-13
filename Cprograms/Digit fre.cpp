#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


   int main() {
    int i=0,j,l,t;
    char s[1000];

    gets(s);
    l=strlen(s);
        int d=0;
    while(i!=10)
    {    t=i+48;
        d=0;
     for(j=0;s[j];j++)
        {
        if(s[j]==t)
        {
           d++;
        }

       }
       if(i<=9)
       printf("%d ",d);
       else {
        printf("%d",d);
       }
       i++;
  }
    
    return 0;
}

