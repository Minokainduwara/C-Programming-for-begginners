#include <stdio.h>

main(){
    int age;
    char State, Gender;
    system("CLS");
    printf("Enter State,Gender,Age ==> (Ex: m,f,18 or M,F,18) : ");
    scanf("%c,%c,%d",&State,&Gender,&age);

    if (State == 'm' || State == 'M')
    {
        printf("\nYou Can't Marry");
    }

    else if (State == 'u' || State == 'U')
    {
        if (Gender == 'm' || Gender == 'M')
        {
            if (age >= 21){
                printf("\nYou Can Marry");
            }





            else{
                printf("\nYou Cannot Marry");
            }

        }

        else (Gender == 'f' || Gender == 'F');
        {
            if (age >= 21)
                printf("\nYou Can Marry");


            else
                printf("\nYou Cannot Marry");
        }
    }

    else
    {
       printf("\nInvalid Input");
    }
    getch();
}
