 /*7. Try problem 3 using call by value and verify that it does not change the value of
the said variable.*/

 #include<stdio.h>
void ten_times(int  x){
     x = x * 10;
}
 int main() {
    int i ;
    printf("Enter a number pls : ");
    scanf("%d",&i);

    ten_times(i);

    printf("The value of i is : %d",i); // here is cant change its value beacuse we called the function by its value 


     
   
  return 0;
 }