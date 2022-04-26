#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
 int i;
  char s[1000];
  gets(s);
  for(i=0;s[i];i++)
 {     printf("%c",s[i]); 
       if(s[i]==32)
       printf("\n");
  }
    return 0;
}

