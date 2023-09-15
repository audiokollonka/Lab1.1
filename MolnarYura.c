#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#define Name "User:"
#define LastName "Molnar"
#define GroupName "RE-31"
#define Faculty "RTF"
#define University "Igor Sikorsky Kyiv Polytechnic Institute"
#define User "Yurii"

void clearBuffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}
void printDots(int numDots) {
    for (int i = 0; i < numDots; i++) {
        printf(".");
        fflush(stdout);
        sleep(1);
    }
    printf("\n");
}

int main() {
    #include <stdio.h>
    #include <stdlib.h>
    #include <unistd.h>
    unsigned int semestr;
    float admissionScore;
    int grade1, grade2, grade3, grade4, grade5;
    double averageGrade;
    unsigned int age;
    
    printf("Enter semestr:");
    scanf("%u", &semestr);
    clearBuffer();
    printDots(3);
    system("cls");
    

    printf("Enter your admission score:");
    scanf("%f", &admissionScore);
    clearBuffer();
    printDots(3);
    system("cls");

    printf("Enter grade #1:");
    scanf("%d", &grade1);
    clearBuffer();
    printDots(3);
    system("cls");

    printf("Enter grade #2:");
    scanf("%d", &grade2);
    clearBuffer();
    printDots(3);
    system("cls");

    printf("Enter grade #3:");
    scanf("%d", &grade3);
    clearBuffer();
    printDots(3);
    system("cls");
    
    printf("Enter grade #4:");
    scanf("%d", &grade4);
    clearBuffer();
    printDots(3);
    system("cls");

    printf("Enter grade #5:");
    scanf("%d", &grade5);
    clearBuffer();
    printDots(3);
    system("cls");

    printf("Enter your age:");
    scanf("%u", &age);
    printDots(4);
    clearBuffer();

    averageGrade = (double)(grade1 + grade2 + grade3 + grade4 + grade5) / 5;

    system("cls");
    printf("%s", University);
    printf("\n%s", Faculty);
    printf("\n%s", GroupName);
    printf("\n-----------------------------");
    printf("\nstudent: %s %s", User, LastName);
    printf("\nage: %u", age);
    printf("\nsemestr: %u", semestr);
    printf("\n-----------------------------");
    printf("\nadmission score: %.2f", admissionScore);
    printf("\naverage grade=%.3lf", averageGrade);
    printf("\n");

return 0;

}