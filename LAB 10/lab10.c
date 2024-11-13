// 1. Declare a structure named employee that stores the employee id, name, salary and
// // department.

#include <stdio.h>

struct employee
{
    int id;
    char name[100];
    float salary;
    char department[100];
};

int main(){
    struct employee e1;
    printf("Enter ID : \n");
    scanf("%d", e1.id);
    printf("Enter name : \n");
    scanf("%s",e1.name);
    printf("Enter department : \n");
    scanf("%s",e1.department);
    printf("Enter salary : \n");
    scanf("%.2f",e1.salary);

return 0;

}

// 2. Take data input from user after declaring a variable of employee type and show the data in
// proper format on output screen

#include <stdio.h>

struct employee
{
    int id;
    char name[100];
    float salary;
    char department[100];
};

int main(){
    struct employee e1;
    printf("Enter ID : \n");
    scanf("%d", &e1.id);
    printf("Enter name : \n");
    scanf("%s",e1.name);
    printf("Enter department : \n");
    scanf("%s",e1.department);
    printf("Enter salary : \n");
    scanf("%f", &e1.salary);

    printf("Employee ID: %d\n", e1.id);
    printf("Employee Name: %s\n", e1.name);
    printf("Employee Salary: %.2f\n", e1.salary);
    printf("Employee Department: %s\n", e1.department);

return 0;

}

// 3. A phone number, such as (212) 767-8900, can be thought of as having three parts: e.g., the area
// code (212), the exchange (767), and the number (8900). Write a program that uses a structure
// to store these three parts of a phone number separately. Call the structure phone. Create two
// structure variables of type phone. Initialize one, and have the user input a number for the other
// one. Then display both numbers.
// The interchange might look like this:
// Enter area code: 415
// Enter exchange: 555
// Enter number: 1212
// Then display like below:
// My number is (212) 767-8900
// Your number is (415) 555-1212

#include <stdio.h>

struct number
{
    int areaCode;
    int exchange;
    int num;
};

int main(){
    struct number mynumber = {111, 101, 1010};
    struct number n1;
    printf("Enter area code : \n");
    scanf("%d", &n1.areaCode);
    printf("Enter exchange: \n");
    scanf("%d", &n1.exchange);
    printf("Enter number: \n");
    scanf("%d", &n1.num);

    printf("My number is : (%d) %d-%d \n", n1.areaCode,n1.exchange,n1.num);
    printf("Your number is : (%d) %d-%d", n1.areaCode,n1.exchange,n1.num);

return 0;

}

// 4. Define a structure to store the following student data: CGPA, courses (course name, GPA),
// address (consisting of street address, city, state, zip). Input 2 student records, compare and
// display which student have highest GPA in which course also Display which student has the
// highest CGPA . HINT: define another structure to hold the courses and address.

#include <stdio.h>
#include <string.h>

struct courses
{
    char courseName[100];
    float gpa;
};
struct address
{
    char street_address[100];
    char city[100];
    char state[100];
    int zip;
};

struct student
{
    float cgpa;
    char name[100];
    struct courses Courses[5];
    struct address Address;
};
int main(){
    struct student student1, student2;

    printf("Enter details for Student 1:\n");
    printf("Enter student name: ");
    scanf(" %s", student1.name);

    printf("Enter CGPA: ");
    scanf("%f", &student1.cgpa);

    for (int i = 0; i < 5; i++) {
        printf("Enter course name #%d: ", i+1);
        scanf(" %s", student1.Courses[i].courseName);
        printf("Enter GPA for %s: ", student1.Courses[i].courseName);
        scanf("%f", &student1.Courses[i].gpa);
    }

    printf("Enter street address: ");
    scanf(" %s", student1.Address.street_address);
    printf("Enter city: ");
    scanf(" %s", student1.Address.city);
    printf("Enter state: ");
    scanf(" %s", student1.Address.state);
    printf("Enter ZIP code: ");
    scanf("%d", &student1.Address.zip);

    printf("Enter details for Student 2:\n");
    printf("Enter student name: ");
    scanf(" %s", student2.name);

    printf("Enter CGPA: ");
    scanf("%f", &student2.cgpa);

    for (int i = 0; i < 5; i++) {
        printf("Enter course name #%d: ", i+1);
        scanf(" %s", student2.Courses[i].courseName);
        printf("Enter GPA for %s: ", student2.Courses[i].courseName);
        scanf("%f", &student2.Courses[i].gpa);
    }

    printf("Enter street address: ");
    scanf(" %s", student2.Address.street_address);
    printf("Enter city: ");
    scanf(" %s", student2.Address.city);
    printf("Enter state: ");
    scanf(" %s", student2.Address.state);
    printf("Enter ZIP code: ");
    scanf("%d", &student2.Address.zip);

printf("\nComparing GPAs in each course:\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (strcmp(student1.Courses[i].courseName, student2.Courses[j].courseName) == 0) {
                if (student1.Courses[i].gpa > student2.Courses[j].gpa) {
                    printf("In course %s, %s has the higher GPA: %.2f\n", student1.Courses[i].courseName, student1.name, student1.Courses[i].gpa);
                } else if (student2.Courses[j].gpa > student1.Courses[i].gpa) {
                    printf("In course %s, %s has the higher GPA: %.2f\n", student2.Courses[j].courseName, student2.name, student2.Courses[j].gpa);
                } else {
                    printf("In course %s, both have the same GPA: %.2f\n", student1.Courses[i].courseName, student1.Courses[i].gpa);
                }
            }
        }
    }


    if (student1.cgpa > student2.cgpa) {
        printf("%s has the higher CGPA: %.2f\n", student1.name, student1.cgpa);
    } else if (student2.cgpa > student1.cgpa) {
        printf("%s has the higher CGPA: %.2f\n", student2.name, student2.cgpa);
    } else {
        printf("Both students have the same CGPA: %.2f\n", student1.cgpa);
    }


    return 0;
}

// 5. Write a C program that uses functions to perform the following operations:
// i) Reading a complex number
// ii) Writing a complex number
// iii) Addition of two complex numbers
// iv) Multiplication of two complex numbers
// (Note: represent complex numbers using a structure.)

#include <stdio.h>

struct Complex {
    float real;
    float imag;
};

struct Complex readComplex() {
    struct Complex c;
    printf("Enter real part: ");
    scanf("%f", &c.real);
    printf("Enter imaginary part: ");
    scanf("%f", &c.imag);
    return c;
}

void writeComplex(struct Complex c) {
    if (c.imag < 0)
        printf("%.2f - %.2fi\n", c.real, -c.imag);
    else
        printf("%.2f + %.2fi\n", c.real, c.imag);
}

struct Complex addComplex(struct Complex c1, struct Complex c2) {
    struct Complex result;
    result.real = c1.real + c2.real;
    result.imag = c1.imag + c2.imag;
    return result;
}

struct Complex multiplyComplex(struct Complex c1, struct Complex c2) {
    struct Complex result;
    result.real = (c1.real * c2.real) - (c1.imag * c2.imag);
    result.imag = (c1.real * c2.imag) + (c1.imag * c2.real);
    return result;
}

int main() {
    struct Complex num1, num2, sum, product;

    printf("Enter first complex number:\n");
    num1 = readComplex();

    printf("\nEnter second complex number:\n");
    num2 = readComplex();

    sum = addComplex(num1, num2);
    product = multiplyComplex(num1, num2);

    printf("\nFirst complex number: ");
    writeComplex(num1);

    printf("Second complex number: ");
    writeComplex(num2);

    printf("\nSum of the complex numbers: ");
    writeComplex(sum);

    printf("Product of the complex numbers: ");
    writeComplex(product);

    return 0;
}

