/*
	Author:		Akshat Sharma.
	Problem:	To print a report card of a school based on input in c.
*/
#include <stdio.h>

int main()
{
    char name[30], section, grade;
    int classS, mathsM, hindiM, englishM, scienceM, socialScienceM, totalM;
    
    printf("Enter Student's name: ");
    scanf("%[^\n]%*c", name);
    
    printf("Enter Student's class: ");
    scanf("%d", &classS);
    
    while((getchar()) != '\n');
    
    printf("Enter Student's section: ");
    scanf("%c", &section);
    
    printf("Enter Marks in Mathematics: ");
    scanf("%d", &mathsM);
    
    printf("Enter Marks in Hindi: ");
    scanf("%d", &hindiM);
    
    printf("Enter Marks in English: ");
    scanf("%d", &englishM);
    
    printf("Enter Marks in Science: ");
    scanf("%d", &scienceM);
    
    printf("Enter Marks in Social Science: ");
    scanf("%d", &socialScienceM);
    
    totalM = mathsM + hindiM + englishM + scienceM + socialScienceM;
    
    if (totalM <= 500 && totalM >= 450) {
        grade = 'A';
    } else if (totalM <= 449 && totalM >= 400) {
        grade = 'B';
    } else if (totalM <= 399 && totalM >= 350) {
        grade = 'C';
    } else if (totalM <= 349 && totalM >= 300) {
        grade = 'D';
    } else if (totalM <= 299 && totalM >= 200) {
        grade = 'E';
    } else if (totalM <= 200 && totalM >= 0) {
        grade = 'F';
    }
    
    puts("\n");
    
    puts("---------------------------------------------");
    puts("\tJawahar Navodaya Vidyalaya");
    puts("\t\tReport Card");
    
    puts("");
    
    printf("Student Name: %s\n", name);
    printf("Student Class: %d\n", classS);
    printf("Student Section: %c\n\n", section);
    
    puts("Marks secured by student out of 100:");
    printf("Mathematics: %d\n", mathsM);
    printf("Hindi: %d\n", hindiM);
    printf("English: %d\n", englishM);
    printf("Science: %d\n", scienceM);
    printf("Social Science: %d\n", socialScienceM);
    puts("");
    printf("Total Marks: %d\n", totalM);
    printf("Grade: %c\n", grade);
    puts("");
    puts("----------------------------------------------");
}
