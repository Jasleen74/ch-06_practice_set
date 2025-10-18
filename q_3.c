/*3. Write a program to change the value of a variable to ten times of its current value*/

#include<stdio.h>
int ten_times(int * x){
   return (10* (*x));
}


int main() {
     int i ;
     int *j = &i;
     printf("Pls enter a num : ");
     scanf("%d",&i);


     printf("the ten times of this number is : %d", ten_times (&i));




  
 return 0;
}