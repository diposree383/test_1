#include <stdio.h> 
 
int main() 
{ 
    double number; 
    char alphabet; 
 
    printf("Enter double number :"); 
    scanf("%lf", &number); 
 
    printf("Enter character value :"); 
    scanf("\n%c", &alphabet); 
 
    printf("Number : %lf", number); 
    printf("\nCharacter : %c", alphabet); 
 
    return 0; 
}