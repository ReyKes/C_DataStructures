#include<stdio.h>
#include<stdlib.h>

int main()
{
    int matrix[5][4];  /*matrix with 5 rows and 4 columns*/

    /*initializing values to the first row of the matrix*/

    matrix[0][0]=5;
    matrix[0][1]=6;
    matrix[0][2]=3;
    matrix[0][3]=2;

    /*initializing values to the second row of the matrix*/

/*
    matrix[1][0]=1;
    matrix[1][1]=2;
    matrix[1][2]=3;
    matrix[1][3]=4;

    //initializing values to the third row of the matrix

    matrix[2][0]=5;
    matrix[2][1]=6;
    matrix[2][2]=7;
    matrix[2][3]=8;

    //initializing values to the fourth row of the matrix

    matrix[3][0]=9;
    matrix[3][1]=10;
    matrix[3][2]=11;
    matrix[3][3]=12;

    //initializing values to the fifth row of the matrix

    matrix[4][0]=13;
    matrix[4][1]=14;
    matrix[4][2]=15;
    matrix[4][3]=16;

*/

    int col,row;
    int counter=1;
     for(row=1;row<5;row++)  /*assigning values from the first index (second row) of the matrix*/
    {
        for(col=0;col<4;col++)
        {
           matrix[row][col]=counter;
           counter++;
        }

    }



    for(row=0;row<5;row++)
    {
        for(col=0;col<4;col++)
        {
            printf("%d\t",matrix[row][col]);
            /*printf("%d\t",matrix[col][row]); prints the transpose of the matrix*/
        }
        printf("\n");
    }

    return 0;
}
