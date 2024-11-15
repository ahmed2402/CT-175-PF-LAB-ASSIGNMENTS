// 1. Write a function that prints all the unique values from an array and the number of times each
// value occurred. The main function takes a size of array as input and generates a random integer
// array with name “array1”. Random number limit must be between 0 and 10. The ‘main’ function
// calls a function with the name as “CountFrequency( )” that will find the occurrence of each value
// in array.

// #include <stdio.h>

// void CountFrequency(int arr[], int size);

// int main() {
//     int arr[10];
//     int size;

//     printf("Enter size of the array (up to 10): \n");
//     scanf("%d", &size);

//     if (size > 10 || size <= 0) {
//         printf("Invalid size! Please enter a value between 1 and 10.\n");
//         return 1;
//     }

//     printf("Enter %d elements of the array: \n", size);
//     for (int i = 0; i < size; i++) {
//         scanf("%d", &arr[i]);
//     }

//     CountFrequency(arr, size);

//     return 0;
// }

// void CountFrequency(int arr[], int size) {
//     int frequency[101] = {0};
//     for (int i = 0; i < size; i++) {
//         frequency[arr[i]]++;
//     }
//     printf("Value Frequency\n");
//     for (int i = 0; i <= 100; i++) {
//         if (frequency[i] > 0) {
//             printf("%d\t%d\n", i, frequency[i]);
//         }
//     }
// }

// 2. Salesflow is one of leading software house they are starting their recruitment process for three
// different following positions: Associate Developer, Assistant Developer, Trainee Engineer. There
// is a defined criterion for recruitment process: if candidate clears the test with 50 marks, he will
// be selected for the post of trainee engineer; experience is not the required for this post. If
// candidate secures 60 marks with at least one year of experience and 70 marks with at least 2
// years of experience, then he/she will be selected as an assistant and associate developer,
// respectively. Write a function that takes the test marks from user and ask for experience (if the
// entered marks are x >=60). After that, function shows the assigned position. 

// #include <stdio.h>

// void selection(int marks, int exp);

// int main(){
//     int marks,exp;
//     printf("Enter marks : \n");
//     scanf("%d", &marks);
//     printf("Enter experience : \n");
//     scanf("%d", &exp);
// selection(marks,exp);

//     return 0;
// }

// void selection(int marks, int exp){
//     if(marks>=70 || exp>=2){
//         printf("You are selected for Associate Developer\n ");
//     } else if(marks>=60 || exp>=1){
//         printf("You are selected for Assistant Developer\n ");
//     } else if(marks>=50 || exp>=0){
//         printf("You are selected for Assistant Developer\n ");
//     } else {
//         printf("You are rejected !");
//     }
// }

// 3. Write the program that calculate the volume by using following formula
// 𝑉 = 𝑎 2 ∗ 1 /3 ℎ,
// by creating two separate functions. One of the functions with prototype “getData(int h, int a)”,
// takes two inputs from user. The other function with prototype “volumeCal( )” calculates the
// volume, and this function must be called from the first function “getData ( )”. The first function
// must be called from the main function.

// #include <stdio.h>


// void volumeCal(int h, int a);
// void getData(int h, int a);

// int main() {
//     int height = 0, base = 0;
//     getData(height, base);
//     return 0;
// }

// void volumeCal(int h, int a) {
//     float volume = (a * a * h) / 3.0;
//     printf("The volume of the pyramid is: %.2f\n", volume);
// }


// void getData(int h, int a) {
//     printf("Enter the height of the pyramid: ");
//     scanf("%d", &h);
//     printf("Enter the base of the pyramid: ");
//     scanf("%d", &a);

//     volumeCal(h, a);
// }

// 4. Write a program that takes a positive number with a fractional part and rounds it to two decimal
// places. For example, 32.4851 would round to 32.49, and 32.4431 would round to 32.44.

// #include <stdio.h>

// int main(){;
// float num;
// float roundedOff;

// printf("Enter a positive number  : \n");
// scanf("%f", &num);

// roundedOff=num;
// printf("rounded off = %.2f", roundedOff);

// return 0;
// }

// 5. In shopping for a new house, you must consider several factors. In this problem the initial cost
// of the house, the estimated annual fuel costs, and the annual tax rate are available. Write a
// program that will determine the total cost of a house after a five-year period and run the
// program for each of the following sets of data.
// To calculate the house cost, add the initial cost to the fuel cost for five years, then add the
// taxes for five years. Taxes for one year are computed by multiplying the tax rate by the initial
// cost. Write and call a function that displays instructions to the program user.

#include <stdio.h>

void houseCost(float intialHouse, float fuel, float tax);

int main(){
    float intialHouse,fuel,tax;
    printf("Enter intial house cost : \n");
    scanf("%f", &intialHouse);
    printf("Enter annual fuel cost : \n");
    scanf("%f", &fuel);
    printf("Enter annual tax rate : \n");
    scanf("%f", &tax);

    houseCost(intialHouse,fuel,tax);
    return 0;
}

void houseCost(float intialHouse, float fuel, float tax){
    float totalCost;
    totalCost = intialHouse + (5 * fuel) + (5 * (tax * intialHouse));
    printf("TOTAL COST OF HOUSE = %f", totalCost);
}