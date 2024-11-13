// 1. Write  a  program  that  reads  the  numbers  from  user  and  store  these  numbers  into  an  array  of
// same size. Find and display the sum of all positive numbers and calculate the average.

#include <stdio.h>

int main() {
    int size, i;
    float sum = 0.0;
    int count = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &size);

    int numbers[size];

    printf("Enter %d numbers:\n", size);
    for (i = 0; i < size; i++) {
        scanf("%d", &numbers[i]);

        if (numbers[i] > 0) {
            sum += numbers[i];
            count++;
        }
    }

    printf("Sum of positive numbers: %.2f\n", sum);

    if (count > 0) {
        float average = sum / count;
        printf("Average of positive numbers: %.2f\n", average);
    } else {
        printf("No positive numbers entered.\n");
    }

    return 0;
}

// 2. Write a C program to read elements in a matrix and check whether matrix is Sparse matrix or
// not. Logic: To check whether a matrix is sparse matrix we only need to check the total number
// of elements that are equal to zero. The matrix is sparse matrix if T ≥ ((m * n) / 2 ) where T defines
// total number of zero elements where m and n are rows and columns respectively.

#include <stdio.h>
int main(){
    int m,n,count=0;
    printf("Enter rows and columns : ");
    scanf("%d %d",&m,&n);
    int matrix[m][n];
    printf("Enter elements : ");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);

            if (matrix[i][j] == 0) {
                count++;
            }
        }
    }
if (count>=((m*n)/2))
{
   printf("The matrix is a sparse matrix.\n");
} else {
        printf("The matrix is not a sparse matrix.\n");
    }

    return 0;
}

// 3. Write down a program which asks user to input his first name and last name in a separate array.
// After taking the input your program should be able to concatenate first name and last name and
// return it as full name. Count down number of characters in the full name as well. For example:
// First name: Muhammad, Second name: Ahmed, Full name: Muhammad Ahmed

#include<stdio.h>
#include<string.h>
int main(){
char firstname[100];
char lastname[100];
printf("Enter your first name: ");
scanf("%s", firstname);
printf("Enter your last name: ");
scanf("%s", lastname);
printf("\nFull name = %s %s",firstname,lastname);
int count=0;
for(int i=0;i<strlen(firstname);i++){
count++;
}
for(int j=0;j<strlen(lastname);j++){
count++;
}
printf("\nTotal characters excluding spaces includes :%d", count);
return 0;
}

// 4. You taking a square matrix as input from keyboard and then you transpose the same matrix after
// meeting the requirements you are also interested to find out whether original Matrix A and
// transpose of Matrix A are equal are not. If the answer is yes, then you print the matrix along with
// message “matrix is symmetric” otherwise you print the “matrix is asymmetric”.

#include <stdio.h>

int main() {
    int n, i, j, is_symmetric;

    printf("Enter the size of the square matrix (n x n): ");
    scanf("%d", &n);

    int matrixA[n][n];

    printf("Enter elements of the matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &matrixA[i][j]);
        }
    }

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (matrixA[i][j] != matrixA[j][i]) {
                is_symmetric = 0;
            }
        }
    }

    printf("The matrix is:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%d ", matrixA[i][j]);
        }
        printf("\n");
    }

    if (is_symmetric !=0) {
        printf("The matrix is symmetric.\n");
    } else {
        printf("The matrix is asymmetric.\n");
    }

    return 0;
}

// 5. Write a program which takes a matrix of any size as user input and returns the maximum element
// of matrix as output. Your code should also show the entered matrix on the screen.

#include <stdio.h>

int main(){
    int rows,columns,max;

    printf("Enter no. of rows : ");
    scanf("%d",&rows);
    printf("Enter no. of columns : ");
    scanf("%d",&columns);

    int matrix[rows][columns];

printf("Enter elements of the matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            scanf("%d", &matrix[i][j]);
             if (i == 0 && j == 0) {
                max = matrix[i][j];
            }
           
            if (matrix[i][j] > max) {
                max = matrix[i][j];
            }
        }
    }

printf("The matrix is:\n");

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
printf("The maximum element in the matrix is: %d\n", max);

    return 0;
    }