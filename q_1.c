/*. Write a program to print the address of a variable. Use this address to get the
value of the variable.*/

#include<stdio.h>
int main() {
     int i = 4 ;
     int *j = &i;

     printf("the address of i is %d\n", *j);

     printf("the value of i is :%u", (&i));
  
 return 0;
}