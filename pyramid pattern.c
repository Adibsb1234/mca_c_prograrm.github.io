#include <stdio.h>  
#include <conio.h>  
void main()  
{  
    int i, j, rows;  
    printf (" Enter a number to define the rows: \n ");  
    scanf("%d", &rows);   
    printf("\n");  
    for (i = rows; i > 0; i--) // define the outer loop  
    {  
        for (j = i; j > 0; j--) // define the inner loop  
        {  
            printf ("* "); // print the Star  
        }  
        printf ("\n");   
    }  
    getch();      
} 
