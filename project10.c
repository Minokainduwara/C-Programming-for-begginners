#include <stdio.h>
//Temperature of 2 cities in 5 days

main(){

    int temp[5][2] = {

                        {20,30},
                        {32,23},
                        {10,21},
                        {32,19},
                        {17,11},

                     };

    printf("\n\nDay1 : \nCity 1 Temperature : %d And City 2 Temperaure : %d",temp[0][0],temp[0][1]);
    printf("\n\nDay2 : \nCity 1 Temperature : %d And City 2 Temperaure : %d",temp[1][0],temp[1][1]);
    printf("\n\nDay3 : \nCity 1 Temperature : %d And City 2 Temperaure : %d",temp[2][0],temp[2][1]);
    printf("\n\nDay4 : \nCity 1 Temperature : %d And City 2 Temperaure : %d",temp[3][0],temp[3][1]);
    printf("\n\nDay5 : \nCity 1 Temperature : %d And City 2 Temperaure : %d",temp[4][0],temp[4][1]);

    getch();

}
