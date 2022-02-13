#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    int n,i,j;
    scanf("%d", &n);
    int l=2*n-1;
    int a[l][l];
  	int s=0,e=l-1;
      while(n!=0){
      for(i=s;i<=e;i++)
      {
          for(j=s;j<=e;j++)
          {
              if(i==s||i==e||j==s||j==e)
              {
                  a[i][j]=n;
              }
          }
       } s++;
          e--;
          n--;
      }
      
      for(i=0;i<=l-1;i++)
      {
          for(j=0;j<=l-1;j++)
         { printf("%d ",a[i][j]);}
         printf("\n");
      }
    return 0;
}

