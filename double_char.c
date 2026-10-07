#include <stdio.h>

int main()
{
    double number;
    char alphabet;

   printf("Enter a double number: ");
    scanf("%lf", &number);

    printf("Enter character input :");
    scanf("\n%c", &alphabet);

    printf("Number : %lf", number);
    printf("\nCharacter : %c", alphabet);

    return 0;
}