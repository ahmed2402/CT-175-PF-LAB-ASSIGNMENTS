// 2. Write a program that ask the user to enter the total 'N' no of characters in user's name {First
// Name + Last Name} to create a dynamic array of characters. After create a dynamic array of
// that 'N' no of characters using malloc or calloc function. Finally copy your full name in it that
// has already been taken from the user before
// Dynamic Array = "Muhib Ahmed";

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>

// int main() {
//     int N; 
//     char firstName[50], lastName[50], fullName[100];
    
//     printf("Enter your first name: ");
//     scanf("%s", firstName);
    
//     printf("Enter your last name: ");
//     scanf("%s", lastName);
    
//     strcpy(fullName, firstName);
//     strcat(fullName, " ");
//     strcat(fullName, lastName);

//     N = strlen(fullName) + 1; 
    
//     char *dynamicArray;
//     dynamicArray = (char *)malloc(N * sizeof(char));
//     if (dynamicArray == NULL) {
//         printf("Memory allocation failed.\n");
//         return 1;
//     }
    
//     strcpy(dynamicArray, fullName);
//     printf("Dynamic Array: \"%s\"\n", dynamicArray);

//     free(dynamicArray);

//     return 0;
// }

// 3. Using above question (2), resize that dynamic array of character and append the array with
// your studentId. That student id must be taken input from the user.
// DynamicArray = "Muhib Ahmed"; // Before
//  DynamicArray = "K211234 Muhib Ahmed"; // After the text append  

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int N; 
    char firstName[50], lastName[50], fullName[100];
    
    printf("Enter your first name: ");
    scanf("%s", firstName);
    
    printf("Enter your last name: ");
    scanf("%s", lastName);
    
    strcpy(fullName, firstName);
    strcat(fullName, " ");
    strcat(fullName, lastName);

    N = strlen(fullName) + 1; 
    
    char *dynamicArray;
    dynamicArray = (char *)malloc(N * sizeof(char));
    if (dynamicArray == NULL) {
        printf("Memory allocation failed.\n");
        return 1; }
    
    strcpy(dynamicArray, fullName);
    printf("Dynamic Array: \"%s\"\n", dynamicArray);

char studentId[50];
    printf("Enter your Student ID: ");
    scanf("%s", studentId);

int n2;
n2 = strlen(studentId) + strlen(dynamicArray) + 2;
    dynamicArray = (char *)realloc(dynamicArray, n2 * sizeof(char));
    if (dynamicArray == NULL) {
        printf("Memory reallocation failed.\n");
        return 1; }

char tempArray[n2];
    strcpy(tempArray, studentId);
    strcat(tempArray, " ");
    strcat(tempArray, dynamicArray);

    strcpy(dynamicArray, tempArray);

    printf("Dynamic Array After: \"%s\"\n", dynamicArray);


    free(dynamicArray);

    return 0;
}