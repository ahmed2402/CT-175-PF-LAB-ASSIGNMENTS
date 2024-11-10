// 1. As a programmer, you are required to create a program that takes the first and last name from
// a user. The program then combines both the inputs taken and prints the string backwards.

#include <stdio.h>
#include <string.h>

int main() {
    char firstName[100];
    char lastName[100];
    char fullName[200];


    printf("Enter your first name: ");
    scanf("%s", firstName);
    printf("Enter your last name: ");
    scanf("%s", lastName);

    
    strcpy(fullName, firstName);
    strcat(fullName, " ");
    strcat(fullName, lastName);

  
    int length = strlen(fullName);
    printf("Reversed name: ");
    for (int i = length - 1; i >= 0; i--) {
        putchar(fullName[i]);
    }
    printf("\n");

    return 0;
}

// 2. Each student is required to find out the maximum frequency of characters occurring in their
// name and the courses offered in Fall 2021. To find it, the student enters their name, courses
// offered and the program finds the maximum occurrences of a character in the name and course.
// Course names should be used like Programming Fundamentals, Applied Physics, Pakistan Studies
// and so on.

#include <stdio.h>
int main(){
    char name[100];
    printf("Enter your name : ");
    scanf("%s", name);

    char course[100];
    printf("Enter your course name : ");
    scanf("%s", course);


    return 0;
}


// 3. Students are grouped in two to complete a lab task. Each student is required to enter a string
// of their own choice as an input to the program. The program will then display as a result
// whether both the strings are equal. If the strings are not equal, the program will display which
// of the string is greater.
// Test cases:
// Enter two strings that are same.
// Enter two different strings.

#include <stdio.h>
#include <string.h>
int main(){
    char str1[100];
    printf("Enter your 1st string : ");
    scanf("%s", str1);

    char str2[100];
    printf("Enter your 2nd string : ");
    scanf("%s", str2);

    if ( strcmp(str1, str2) > 0)
    {
        printf("1st string is greater ");
    } else  if ( strcmp(str1, str2) < 0)
    {
        printf("2nd string is greater ");
    } else {
        printf("both strings are equal");
    }
    
    return 0;
}

// 4. Write down the output of the following program.
// #include <stdio.h>
// #include <string.h>
// int main ()
// {
// char a[11] = "hello world";
// int i;
// for(i = 0; i <= 9; i++)
// {
// a[i] = a[i + 1];
// printf("%d \t %s \n", i, a);
// }
// Printf("\n %d", a);
// return 0;
// }

output ; 
// 0       ello world
// 1       elo world
// 2       el world
// 3       el orld
// 4       el wrld
// 5       el wld
// 6       el wod
// 7       el wod
// 8       el wod
// 9       el wod

//  el wod
