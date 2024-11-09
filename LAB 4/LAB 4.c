//1. Write a C program to input a character from user and check whether given character is small
//alphabet, capital alphabet, digit or special character, using if else

#include <stdio.h>

int main() {
   char ch;
   printf("Enter the character : ");
   scanf("%c",&ch);
   if (ch >= 'a' && ch <= 'z') {
       printf("'%c' is a lowercase alphabet.\n", ch);
   }
   else if (ch >= 'A' && ch <= 'Z') {
       printf("'%c' is an uppercase alphabet.\n", ch);
   }
   else if (ch >= '0' && ch <= '9') {
       printf("'%c' is a digit.\n", ch);
   }
   else {
       printf("'%c' is a special character.\n", ch);
   }
   return 0;
}
// 2. An online shopping store is providing discounts on the items due to the Eid. If the cost of items
// is more than 1999 it will give a discount up to 50%. If the cost of shopping is 2000 to 4000, a 20%
// discount will be applied. If the cost of shopping is 4001 to 6000, a 30% discount will be applied.
// If it's more than 6000 then 50% discount will be applied to the cost of shopping. Print the actual
// amount, saved amount and the amount after discount.

#include <stdio.h>

int main() {
   int cost,amount,saved,discount;
   printf("Enter the cost of items : ");
   scanf("%d",&cost);
if(cost>=2000 && cost<=4000){
   printf("You will get a 20 percent discount\n");
   printf("your actual amount is %d\n", cost);
saved=(0.2*cost)/1;     
discount=cost-saved;
   printf("you saved %d\n",saved);
   printf("your amount after discount is %d\n",discount);
} else if(cost>=4001 && cost<=6000){
   printf("You will get a 30 percent discount\n");
   printf("your actual amount is %d\n", cost);
saved=(0.3*cost)/1;     
discount=cost-saved;
   printf("you saved %d\n",saved);
   printf("your amount after discount is %d\n",discount);
} else if(cost>6000){
   printf("You will get a 50 percent discount\n");
   printf("your actual amount is %d\n", cost);
saved=(0.5*cost)/1;     
discount=cost-saved;
   printf("you saved %d\n",saved);
   printf("your amount after discount is %d\n",discount);
} else{
   printf("THANK YOU FOR SHOPPING!");
}
   return 0;
}
// 3. Write a C program to find all roots of a quadratic equation by using the given formula; it is
// required to take user input for a, b and c values.

#include <stdio.h>
#include <math.h>
int main() {
   float a,b,c,disc,x1,x2;
   printf("Enter the value of a,b,c \n");
   scanf("%f %f %f",&a,&b,&c);
   disc=b*b-4*a*c;
   x1=(-b+ sqrt(disc)) /(2*a);
   x2=(-b- sqrt(disc)) /(2*a);
printf("Roots of equation are %f & %f",x1,x2);
   return 0;
}

// 4. Teacher asks the student to check whether the input number is divisible by 7 or not. For checking
// the divisibility, take the last digit and double it, take the rest of the digits and subtract the
// doubled last digit repeat until the result is 7, -7 or 0. For example:
// 10976 -> 1097-12 = 1085 -> 108-10 = 98 -> 9-16 = -7
// 49 -> 4 - 18 = 14 -> 1 - 8 = -7
#include <stdio.h>
int main() {
   int num,ld,result,orignum;
   printf("Enter Number : ");
   scanf("%d",&num);
   orignum=num;
while (num > 9 || num < -9) {
   ld=num%10;
   num=num/10;
   result=num-(ld*2);
   num=result;
}
if (num == 0 || num == 7 || num == -7){
   printf("%d is divisible by 7",orignum);
} else {
   printf("%d is not divisible by 7",orignum);
}
   return 0;
}
// 5. Write a program that asks for the number of calories and fat grams in a food. The program
// should display the percentage of calories that come from fat. If the calories from fat are less
// than 30% of the total calories of the food, it should also display a message indicating that the
// food is low in fat. One gram of fat has 9 calories, so Calories from fat = fat grams * 9. The
// percentage of calories from fat can be calculated as: calories from fat/total calories
// Input validation: Make sure the number of calories and fat grams are not less than 0. Also, the
// number of calories from fat cannot be greater than the total number of calories. If that happens,
// display an error message indicating that either the calories or fat grams were incorrectly entered.
#include <stdio.h>

int main() {
   float perc,cal,fat,calfat;
   printf("Enter the total calories : ");
   scanf("%d",&cal);
   printf("Enter the amount of fat : ");
   scanf("%d",&fat);
calfat=9*fat;
perc=(calfat/cal)*100;
printf("percentage of calories that come from fat :%.2f%%",perc);
if(cal<0 || fat<0 || calfat>cal){
   printf("the calories or fat grams were incorrectly entered.");
}else if(calfat<(0.3*cal)){
   printf("\nfood is low in fat");
}
   return 0;
}