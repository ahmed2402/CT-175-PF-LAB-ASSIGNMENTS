// 1. Write a C program that takes two integer values as input from the user. Then swap the values taken from the user and display the output of the variables.
#include <stdio.h>

int main() {
int num1,num2,swap;
//ask the user for numbers
   printf("Enter your 1st Number\n");
	scanf("%d", &num1);
   printf("Enter your 2nd Number\n");
   scanf("%d", &num2);
//Display numbers before swapping
   printf("Before swapping:\n1st number = %d, 2nd number= %d\n", num1, num2);
   swap=num1;
   num1=num2;
   num2=swap;
//Display numbers after swapping
   printf("After swapping:\n1st number = %d, 2nd number= %d\n", num1, num2);
   
   return 0;
}
// 2. A  customer  asks  the  IT  firm  to  develop  a  program  in  C  language,  which  can  take  tax  rate  and 
// salary from the user on runtime and then calculate the tax, the user has to pay and the salary 
// he/she will have after paying the tax. This information is then provided to the user.

#include <stdio.h>

int main() {
	float salary,taxrate,tax,salaryaftertax;
	printf("Enter your salary\n");
	scanf("%f", &salary);
	printf("Enter your job's tax rate'\n");
	scanf("%f", &taxrate);
	tax=(taxrate*salary)/100;
	printf("The amount you have to pay for tax is:\n %fRs",tax);
	salaryaftertax=salary-tax;
	printf("\nYour salary after cutting tax is:\n %fRs",salaryaftertax);
   return 0;
}



// 3. A car traveled for some hours. The time car traveled is taken at run time of the program, and it 
// must not be  negative and must  be between one to  five hours. The car  had not traveled same 
// distance in each hour. The distance that the car covered must not be negative. Write a C Program 
// that  computes  the  Average  Speed  of  the  Car  in  miles  per  hour.  Hint:  the  restrictions  can  be 
// displayed in the form of message on the window.
#include <stdio.h>

int main() {
   float hours,distance,totaldistance=0,speed;
   printf("Enter the number of hours the car traveled (1 to 5 hours): ");
   scanf("%f", &hours);

   while (hours < 1 || hours > 5) {
       printf("Invalid input! Time traveled must be between 1 and 5 hours.\n");
       printf("Enter the number of hours the car traveled (1 to 5 hours): ");
       scanf("%f", &hours);
   }
   for(int i=1;i<=hours;i++){
       printf("Enter the distance in %d. hour : ",i);
       scanf("%f",&distance);
       if(distance<0){
           printf("Distance can't be negative");
       }
       totaldistance=totaldistance+distance;
   }
   speed=totaldistance/hours;
   printf("avg speed is %.2f miles per hour",speed);
   return 0;
}
}
// Q4
// In the code, testInteger is assigned the value 3000000000. However, in C, the int data type typically has a size of 4 bytes (32 bits), which can store values in the range of -2,147,483,648 to 2,147,483,647.
// The value 3000000000 exceeds the maximum positive value that can be stored in a 32-bit signed integer (2,147,483,647), so integer overflow occurs. This causes the stored value to wrap around into the negative range, resulting in the displayed output of -1294967296.

// 5. Construct  a  C  program  with  the  flowchart  below.  The  input  value  of  the  Principle  must  be between 100 Rs. To 1,000,000 Rs. The Rate of interest must be between 5% to 10% and Time Period must be between 1 to 10 years. Hint: these restrictions can be displayed in the form of message on the window.  

#include <stdio.h>

int main() {
   int principlevalue = 0;
   printf("Enter value of the Principle between 100 Rs To 1,000,000 Rs:\n ");
   scanf(" %d",&principlevalue);
   while (principlevalue<100 || principlevalue>1000000){
       printf("INVALID! (principle value must be be between 100 Rs to 1,000,000 Rs.)\n");
       printf("Enter value of the Principle between 100 Rs to 1,000,000 Rs:\n ");
       scanf(" %d",&principlevalue);
}
   float interestrate = 0;
   printf("Enter the rate of interest  between 5%% to 10%% \n ");
   scanf(" %f",&interestrate);
   while (interestrate<5 || interestrate>10){
   	printf("INVALID! (rate of interest must be between 5%% to 10%%)\n");
   	printf("Enter the rate of interest  between 5%% to 10%% \n ");
   	scanf(" %f",&interestrate);
   }
   float timeperiod;
   printf("Enter Time Period between 1 To 10 years\n");
   scanf(" %f",&timeperiod);
   while (timeperiod<1 || timeperiod>10){
   	printf("INVALID! (Time Period must be between 1 to 10 years)\n");
   	printf("Enter Time Period between 1 To 10 years\n");
       scanf(" %f",&timeperiod);
	}
return 0;
}