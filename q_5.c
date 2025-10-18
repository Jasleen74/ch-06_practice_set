/*5. Write a program using a function which calculates the sum and average of two
numbers. Use pointers and print the values of sum and average in main()*/

#include<stdio.h>

int sum (int *, int *);
int sum (int *x, int *y){
    return ((*x)+(*y));
}

float avg(int * , int *);
float avg (int * x , int *y ){
    return ((*x + *y)/2.0);
}
int main() {
    int i; 
    printf("Enter us first num : ");
    scanf("%d",&i);

    int * j = &i;

    int v;
    printf("Enter ur second num : ");
    scanf("%d",&v);

    int * u = &v;

    printf("The sum of these numbers is :%d \n", sum (&i,&v));
    printf("The average of these numbers is :%.2f ", avg(&i,&v));
     
  
 return 0;
}