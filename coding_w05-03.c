#include <stdio.h>

int main() {
    char name_initial;
    int age;
    double height;

    printf("Enter initial, age, and height (e.g., K 18 167.0): ");
    scanf(" %c %d %lf", &name_initial, &age, &height);

    char subject_initial;
    double score;
    char symbol;

    printf("Enter subject initial, score, and symbol (e.g., M 3.50 A): ");
    scanf(" %c %lf %c", &subject_initial, &score, &symbol);

    printf("%c is %d years old and %.1f centimeters tall.\n", name_initial, age, height);
    printf("In subject %c, %c got %.2f which is symbolized as '%c'.\n", subject_initial, name_initial, score, symbol);

    return 0;
}