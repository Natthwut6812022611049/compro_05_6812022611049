#include <stdio.h>
int main() {
    char name[30]; 
    int age; 
    float height; 
    char subject[30]; 
    float grade; 
    char gradechar; 

    printf ("Enter your name , age ,height, subject, grade: "); 
    scanf ("%s %d %f %s %f", name, &age, &height, subject, &grade); 

    printf ("%c is %d years old %.1f cm tall, studies %s and has a grade of %.2f.\n", name[0], age, height, subject, grade); 
    printf ("In subject %s, grade is %.2f which is symbolized as %c.\n", subject, grade, (grade >= 90) ? 'A' : (grade >= 80) ? 'B' : (grade >= 70) ? 'C' : (grade >= 60) ? 'D' : 'F'); //แสดงผลวิชา, เกรด และสัญลักษณ์เกรดตามเงื่อนไข
   return 0; 
}