// 1. For each of the following, write a single statement that performs the indicated task. Assume
// that long integer variables value1 and value2 have been defined and that value1 has been
// initialized to 200000.
// // a) Define the variable lPtr to be a pointer to an object of type long.
// long *lPtr;
// // b) Assign the address of variable value1 to pointer variable lPtr.
//  lPtr = &value1;
// // c) Print the value of the object pointed to by lPtr.
// printf("Value pointed to by lPtr: %ld\n", *lPtr);
// // d) Assign the value of the object pointed to by lPtr to variable value2.
//  value2 = *lPtr;
// // e) Print the value of value2.
// printf("Value of value2: %ld\n", value2);
// // f) Print the address of value1.
// printf("Address of value1: %p\n", (void *)&value1);
// // g) Print the address stored in lPtr. Is the value printed the same as the address of value1?
// printf("Address stored in lPtr: %p\n", (void *)lPtr);
// Yes, the value stored in lPtr is the same as the address of value1.

// 2. Write a program to implement the exchange or swap the values of 3 variables{a,b,c}. To
// implement this, you need to write a function called swaped().
// void swaped(int *aPtr, int *bPtr, int *cPtr);
// such that; b ----> temp
//  a ----> b
//  c ----> a
//  temp -> a

// #include <stdio.h>

// void swaped(int *aPtr, int *bPtr, int *cPtr);

// int main() {
//     int x = 1, y = 2, z = 3;

//     printf("Before swapping: x=%d, y=%d, z=%d\n", x, y, z);
//     swaped(&x, &y, &z);

//     printf("After swapping: x=%d, y=%d, z=%d\n", x, y, z);

//     return 0;
// }

// void swaped(int *aPtr, int *bPtr, int *cPtr) {
//     int temp;
//     temp = *bPtr;  
//     *bPtr = *aPtr; 
//     *aPtr = *cPtr; 
//     *cPtr = temp;  
// }


// 3. Write a program that calculates the sum of all the elements in array using pointers.

// #include <stdio.h>

// int main(){
//     int arr[5]= {1,2,3,4,5};
//     int sum=0;
//     int *ptr = arr;

//     for (int i = 0; i < 5; i++)
//     {
//         sum += *(ptr + i);
//     }
//     printf("sum : %d",sum);
//     return 0;
// }

// 4. Write a program that finds the second highest number in a float type array of 20 elements
// using pointer. 

#include <stdio.h>

int main(){
    float arr[20]= {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
    float *ptr = arr;
    float highest, sec_highest;

    highest = *ptr;
    sec_highest = *ptr;

for (int i = 1; i < 20; i++) {
        if (*(ptr + i) > highest) {
            sec_highest = highest;
            highest = *(ptr + i);
        } else if (*(ptr + i) > sec_highest && *(ptr + i) != highest) {
            sec_highest = *(ptr + i);
        }
    }
    printf("second highest number : %.2f\n", sec_highest);

    return 0;
}

