//WAP program to print below output using for loop
// 01 02 03 04 05 06 07 08 09 10
// 11 12 13 14 15 16 17 18 19 20
// ..............
// ..............
// 41 42 43 44 45 46 47 48 49 50
#include <stdio.h>
void main()
{
	int rows = 5; // Number of rows
    int cols = 10; // Number of columns
    int num = 1; // Starting number
    int i,j;

    for (i=0;i<rows;i++)
    {
        for(j=0;j<cols;j++)
        {
            printf("%02d ",num);
            num++;
        }
        printf("\n");
    }
}