// 1. You must have seen the question before deleting anything like “Are you sure to delete
// [Y/y] / [N/n] ? Create a program that asks for this question if user enters Y or y it prints
// “Deleted successfully”. If the user enters N or n it prints “Delete cancelled” otherwise it
// prints choose the right option using switch statement.
#include <stdio.h>

int main() {
   char ch;
   printf("Are you sure to delete [Y/y] / [N/n] ?\n");
   scanf("%c",&ch);
   switch(ch){
       case 'y':
       printf("Deleted successfully");
       break;
       case 'Y':
       printf("Deleted successfully");
       break;
       case 'N':
       printf("Delete cancelled");
       break;
       case 'n':
       printf("Delete cancelled");
       break;
   default:
   printf("choose the right option");
   }
   return 0;
}

// 3. Write a program in which user enters his NTS and F.Sc marks and your program will help
// student in selection of university. Based on these marks Student will be allocated a seat at
// different department of different university.
Oxford
IT: Above 70% in Fsc. and 70 % in NTS
Electronics: Above 70% in Fsc. and 60 % in NTS
Telecommunication Above 70% in Fsc. and 50 % in NTS
MIT
IT: 70% - 60 % in Fsc. and 50 % in NTS
Chemical: 59% – 50 % in Fsc. and 50 % in NTS
Computer: Above 40% and below 50 % in Fsc. and 50 % in NTS
#include <stdio.h>

int main() {
   float nts,fsc;
   printf("Enter your NTS marks : ");
   scanf("%f",&nts);
   printf("Enter your F.SC marks : ");
   scanf("%f",&fsc);
if(fsc >100 || fsc<0 || nts>100 || nts<0){
   printf("Invalid Marks");
} else if (fsc>70 && nts>=70){
   printf("You can get every department in Oxford & MIT");
} else if(fsc>70 && nts>=60){
   printf("You can get every department, except IT in Oxford");
} else if(fsc>=70 && nts>=50){
   printf("You can get every department, except IT & Electronics in Oxford");
} else if(fsc<=70 && fsc>=60 && nts>=50){
   printf("You can get IT, Chemical & Computer in MIT");
} else if(fsc<=59 && fsc>=50 && nts>=50){
   printf("You can get Chemical & Computer in MIT");
} else if(fsc<50 && fsc>=40 && nts>=50){
   printf("You can get Computer in MIT");
} else if(fsc<40 || nts<50){
   printf("You can't get admission");
}

   return 0;
}



// 4. Using IF and Switch statement, write a program that displays the following menu for the
// food items available to take order from the customer:
// B= Burger (Rs. 200)
// F= French Fries (Rs. 50)
// P= Pizza (Rs. 500)
// S= Sandwiches (Rs. 150)
// The costumer can order any combination of available food. The program first ask to enter
// the no of types of snacks i.e. 2, 3 or 4 then it ask to enter the choice i.e. B for Burger and
// then for quantity. The program should finally display the total charges for the order.


#include <stdio.h>

int main() {
   char choice;
   int quantity, total = 0,num_snacks,bcount = 0,fcount = 0,pcount = 0, scount = 0;
   printf("ABC Restaurant Online Order Placement\n");
   printf("WELCOME!\n");
   printf("Please select from the following Menu\n");
   printf("B- Burger (Rs. 200)\n");
   printf("F- French Fries (Rs. 58)\n");
   printf("P- Pizza (Rs. 500)\n");
   printf("S- Sandwich (Rs. 150)\n");
   printf("How many types of snacks you need to order: ");
   scanf("%d", &num_snacks);
   for (int i = 1; i <= num_snacks; i++) {
       printf("Enter %d. Snack you want to order: ", i);
       scanf(" %c", &choice);

       printf("Please provide quantity: ");
       scanf("%d", &quantity);

       switch (choice) {
           case 'B':
               total += quantity * 200;
               bcount += quantity;
               printf("%d Burger(s) ordered.\n", quantity);
               break;
           case 'F':
               total += quantity * 58;
               fcount += quantity;
               printf("%d French Fries ordered.\n", quantity);
               break;
           case 'P':
               total += quantity * 500;
               pcount += quantity; 
               printf("%d Pizza(s) ordered.\n", quantity);
               break;
           case 'S':
               total += quantity * 150;
               scount += quantity; 
               printf("%d Sandwich(es) ordered.\n", quantity);
               break;
           default:
               printf("Invalid choice. Please try again.\n");
               i--; 
       }
   }

   printf("\nYou have ordered:\n");
   if (bcount > 0) {
       printf("%d Burger(s) value %d PKR\n", bcount, bcount * 200);
   }
   if (fcount > 0) {
       printf("%d French Fries value %d PKR\n", fcount, fcount * 58);
   }
   if (pcount > 0) {
       printf("%d Pizza(s) value %d PKR\n", pcount, pcount * 500);
   }
   if (scount > 0) {
       printf("%d Sandwich(es) value %d PKR\n", scount, scount * 150);
   }

   printf("\nTotal: %d PKR\n", total);
   printf("Thank you for your order. Have a nice day.\n");

   return 0;
}
