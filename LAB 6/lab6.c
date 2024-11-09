// 1. Write a program which will find the factorial of a given number. Exit the program if the input
// number is negative. Test case: Input number = 5,Factorial is=5*4*3*2*1

#include <stdio.h>
int main(){
    int num,fact=1;
    printf("Enter number : ");
    scanf("%d",&num);
    if (num<0)
    {
        printf("Invalid number");
    }
    
    for(int i=1;i<=num;i++){
        fact=fact*i;
    }
printf("factorial of %d is %d",num,fact);
return 0;
}

// 2. Write a program which will generate the Fibonacci series up to 1000. Also find the sum of the
// generated Fibonacci numbers divisible by 3, 5 and 7 only.
// Fibonacci series is:1 1 2 3 5 8 13 25..........
// Note: Do this task by using for loop and while loop. Also identify which one is more efficient?
// using while loop
#include <stdio.h>
int main() {
    int limit = 1000;
    int x=1,y=1;
    int next;
    int sum=0;
    printf("Fibonacci series up to %d:\n", limit);

    while (x <= limit) {
        printf("%d ", x);
        if(x%3==0 || x%5==0 || x%7==0){
           sum =sum+x;}
        next=x+y; 
        x=y;           
        y=next;
    }
     printf("\nSum of Fibonacci numbers divisible by 3, 5, and 7: %d\n", sum);
    return 0;
}
// using for loop
#include <stdio.h>
int main() {
    int limit = 1000;
    int x=1,y=1;
    int next;
    int sum=0;
    printf("Fibonacci series up to %d:\n", limit);

    for(;x<=limit;){
        printf("%d ",x);
        if(x%3==0 || x%5==0 || x%7==0){
           sum =sum+x;}
        next=x+y; 
        x=y;           
        y=next;
    }
     printf("\nSum of Fibonacci numbers divisible by 3, 5, or 7: %d\n", sum);
    return 0;
}
//  For this problem, both for and while loops are equally efficient. The choice between them is mostly about readability and style preference rather than performance.However while loop may be more efficient as there is no need for intialization and updation which is used in for loop.

// 3. Write a program which will input a 5-digit number. If the sum of digits is even, find whether the input number is a prime or not. If the sum of digits is odd find, whether the number is palindrome or not?
// Example of prime number: A number which is only divisible by itself and 1 i.e., 7, 11, and13.
// Example of a Palindrome: A number whose reverse order is the same as the original number i.e., 11211, 44344. 

#include <stdio.h>
int main(){
    int num,orig_num,orig_num2,remainder,remainder2,sum=0,count=0,reversed=0;
    printf("Enter number : ");
    scanf("%d",&num);
if(num<10000 || num>99999){
    printf("Enter a 5digit number!\n");
} else {
orig_num=num;
orig_num2=orig_num;
while(num>0){
    remainder=num%10;
    sum=sum+remainder;
    num=num/10;
}
printf("sum of 5digit number : %d",sum);
if(sum%2==0){
for(int i=1;i<=orig_num;i++){
    if(orig_num%i==0){
        count++;
    }
}
if(count>2){
    printf("\n%d is not a prime number",orig_num);
} else {
    printf("\n%d is not a prime number",orig_num);
}
} else if(sum%2!=0){
    for(int j=1;orig_num>0;j++){
        remainder2=orig_num%10;
        reversed=reversed*10+remainder2;
        orig_num=orig_num/10;
    }
if(reversed==orig_num){
    printf("\n%d is a Palindrome number",orig_num2);
} else {
    printf("\n%d is not a Palindrome number",orig_num2);
}
}
}
return 0;
}

// Q5. (Calculating the Value of π) Calculate the value of π from the infinite series. Print a table that shows the value of π approximated by one term of this series, by two terms, by three terms, and so on. How many terms of this series do you have to use before you first get 3.14? 3.141? 3.1415? 3.14159?
 
#include <stdio.h>

int main() {
    double pi_approx = 0.0;
    int flip_sign = 1;
    int count_terms = 0;

    printf("Term Number\tApproximation of π\n");
    printf("----------------------------------------\n");

    for (int counter = 0; ; counter++) {
        pi_approx += flip_sign * (4.0 / (2 * counter + 1));
        flip_sign *= -1;
        count_terms++;

        printf("%d\t\t%.6f\n", count_terms, pi_approx);

        
        if (pi_approx > 3.14 - 0.001 && pi_approx < 3.14 + 0.001) {
            printf("\nValue of 3.14 reached after %d terms.\n", count_terms);
        }
        if (pi_approx > 3.141 - 0.0001 && pi_approx < 3.141 + 0.0001) {
            printf("Value of 3.141 reached after %d terms.\n", count_terms);
        }
        if (pi_approx > 3.1415 - 0.00001 && pi_approx < 3.1415 + 0.00001) {
            printf("Value of 3.1415 reached after %d terms.\n", count_terms);
        }
        if (pi_approx > 3.14159 - 0.000001 && pi_approx < 3.14159 + 0.000001) {
            printf("Value of 3.14159 reached after %d terms.\n", count_terms);
            break;
        }
    }

    return 0;
}
