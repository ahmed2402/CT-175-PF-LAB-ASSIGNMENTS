// 4. Using C, create a file named budge.txt that contains three equal-length columns of numbers, like
// this:
// -462.13 486.47 973.79
// 755.42 843.04 -963.67
// 442.58 -843.02 -462.86
// -233.93 -821.67 399.59
// -379.65 -556.37 837.46
// 55.18 -144.93 -93.15
// 533.73 804.64 -66.25
// -922.12 914.68 -264.67
// -600.27 -838.59 747.02
// -962.97 49.96 -677.79
// Now write a program named budget.c that reads this file and adds up the numbers
// in each column. The program’s output should look like this:
// Column sums are: -1774.16 -105.79 429.47

// #include <stdio.h>

// int main() {
//     FILE *file;
//     double numbers[10][3];
//     double column_sums[3] = {0.0, 0.0, 0.0};  

//     file = fopen("budge.txt", "r");
//     if (file == NULL) {
//         printf("Error opening file");
//         return 1;
//     }

//     for (int i = 0; i < 10; i++) {
//         for (int j = 0; j < 3; j++) {
//             fscanf(file, "%lf", &numbers[i][j]);
//             column_sums[j] += numbers[i][j]; 
//         }
//     }

//     fclose(file);

//     printf("Column sums are: %.2f %.2f %.2f\n", column_sums[0], column_sums[1], column_sums[2]);

//     return 0;
// }

// 2. Write a C program to keep records and perform statistical analysis for a class of 20 students. The
// information of each student contains ID, Name, Sex, quizzes Scores (2 quizzes per semester),
// mid-term score, final score, and total score. All the records must be store in the file and you must
// read the scores <50, <80 and <100 until users selects the end file option.

#include <stdio.h>

int main() {
    FILE *file;
    int id, choice;
    char name[50];
    char sex;
    float quiz1, quiz2, midTerm, finalExam, totalScore;

    file = fopen("students_data.txt", "w");  // Open the file for writing student records
   if (file == NULL) {
        printf("Error opening file");
        return 1;
    }


    while (1) {
        printf("Enter student ID (or -1 to stop): ");
        scanf("%d", &id);

        if (id == -1) {
            break;  
        }

        printf("Enter student name: ");
        scanf(" %s", name); 

        printf("Enter student sex (M/F): ");
        scanf(" %c", &sex);

        printf("Enter quiz 1 score: ");
        scanf("%f", &quiz1);

        printf("Enter quiz 2 score: ");
        scanf("%f", &quiz2);

        printf("Enter mid-term score: ");
        scanf("%f", &midTerm);

        printf("Enter final exam score: ");
        scanf("%f", &finalExam);

        totalScore = quiz1 + quiz2 + midTerm + finalExam;

        fprintf(file, "%d,%s,%c,%.2f,%.2f,%.2f,%.2f,%.2f\n", id, name, sex, quiz1, quiz2, midTerm, finalExam, totalScore);

        printf("Student record saved.\n");
    }

    fclose(file); 

    printf("Data saved to file 'students_data.txt'.\n");

    
    file = fopen("students_data.txt", "r"); 
    if (file == NULL) {
        printf("Error opening file");
        return 1;
    }

    printf("Student Records:\n");
    printf("ID\tName\tSex\tQuiz1\tQuiz2\tMid-Term\tFinal\tTotal\n");

    while (fscanf(file, "%d,%s,%c,%f,%f,%f,%f,%f\n", &id, name, &sex, &quiz1, &quiz2, &midTerm, &finalExam, &totalScore) == 8) {
        printf("%d\t%s\t%c\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\n", id, name, sex, quiz1, quiz2, midTerm, finalExam, totalScore);
    }

    fclose(file); 

    return 0;
}
