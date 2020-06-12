#include<stdio.h>
#include<conio.h>
void main() {
   int Array[10];
   int i, sum = 0;
   int *ptr;
 
   printf("\nEnter 10 elements : ");
 
   for (i = 0; i < 10; i++)
      scanf("%d", &Array[i]);
 
   ptr = Array;
 
   for (i = 0; i < 10; i++) {
      sum = sum + *ptr;
      ptr++;
   }
 
   printf("The sum of array elements : %d", sum);
}
