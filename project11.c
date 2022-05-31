#include <stdio.h>
//Arithmatic operations with user inputs

main(){

    int marks[2][2];
    int st1tot,st2tot;

    printf("\nEnter student 1 marks (Ex: 85,67)  : ");
    scanf("%d,%d,",&marks[0][0],&marks[0][1]);

    printf("\n\nEnter student 2 marks (Ex: 85,67)  : ");
    scanf("%d,%d,",&marks[1][0],&marks[1][1]);

    st1tot = marks[0][0] + marks[0][1];
    st2tot = marks[1][0] + marks[1][1];

    printf("\n\n\nStudent 1 Total is => %d",st1tot);
    printf("\nStudent 2 Total is => %d",st2tot);

    if (st1tot > st2tot){
        printf("\n\nStudent 1 is brighter");
    }

    else if (st1tot == st2tot){
        printf("\n\nBoth are bright");

    }

    else{
        printf("\n\nStudent 2 is brighter");
    }


    getch();

}
