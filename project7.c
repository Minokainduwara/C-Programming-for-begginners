#include <stdio.h>

main(){

    char ope;
    float num1,num2;

    printf("Enter an Operator: ");
    scanf("%c", &ope);
    printf("\nEnter Numbers: ");
    scanf("%f,%f", &num1, &num2);

    //Switch
    switch(ope){
    case '+':
        printf("\nAddition is  %0.1f", num1 + num2);
        break;
    case '-':
        printf("\nSubstraction is  %0.1f", num1 - num2);
        break;
    case '*':
        printf("\nMultipication is  %0.1f", num1 * num2);
        break;
    case '/':
        printf("\nDivision is  %0.1f", num1 / num2);
        break;

    default:
        printf("\nInvalid Input");
        break;

    }


    getch();


}
