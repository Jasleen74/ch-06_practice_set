/*Write a program having a variable ‘i’. Print the address of ‘i’. Pass this variable to
a function and print its address. Are these addresses same? Why?*/


/* here the value of the addresses are not same this is due to pass by value in c */

#include<stdio.h>
 

 int address (int *x){
    printf("the value by the function is : %d\n ",*address);
 }
int main() {
    int i = 4;
    int *j = &i;
    printf("the address of i is : %p\n",&i);
     address(j);
     
  
 return 0;
}