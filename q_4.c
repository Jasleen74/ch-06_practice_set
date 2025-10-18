/*4. Write a function and pass the value by reference.*/

#include<stdio.h>
int value_30x (int * );

int value_30x (int *x ){
    return 30*(*x);
}
int main() {
     int i ;
     printf("Enter a value of i : ");
     scanf("%d",&i);
     int *j = &i;

     printf("The 30 times of the i  is : %d",value_30x(&i) );
  
 return 0;
}