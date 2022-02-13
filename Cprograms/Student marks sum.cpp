#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

//Complete the following function.

int marks_summation(int* marks, int number_of_students, char gender) {
    int i,sum=0;
  if(gender=='b')
  {
        for(i=0;i<=number_of_students-1;i++)
    {
        if(i%2==0)
        {
            sum=sum+marks[i];
        }
    
    }  
  }
  else
  {
       for(i=0;i<=number_of_students-1;i++)
    {
        if(i%2!=0)
        {
            sum=sum+marks[i];
        }
    
    } 
  }
  
   return sum;
}

int main() {
