/////////////////////////////////////////////////////////////////////////////////////////////////
// 
//  Required header files
// 
/////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////////////////////////
// 
//  Function Name : Pattern
//  Description :   It displays N*M matrix with capital alphabets for odd and small for even rows
//  Input :         int , int
//  Output :        void
//  Author :        Rucha Hanumant Pawar
//  Date :          14/12/2025
// 
/////////////////////////////////////////////////////////////////////////////////////////////////

void Pattern(int iRow, int iCol)
{
    int i=0 , j=0;
    char ch1 ='\0', ch2 ='\0';

    for(i=1; i<=iRow; i++)
    {
        for(ch1 = 'A', ch2 = 'a', j=1; j<=iCol; j++,ch1++,ch2++)
        {
            if((i%2) == 0)
            {
                printf("%c\t",ch2);
            }
            else
            {
                printf("%c\t",ch1);
            }
        }
        printf("\n");
    }
}   //End of Pattern

/////////////////////////////////////////////////////////////////////////////////////////////////
// 
//  Entry point function for the application
// 
/////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter number of rows:\n");
    scanf("%d",&iValue1);

    printf("Enter number of columns:\n");
    scanf("%d",&iValue2);

    Pattern(iValue1, iValue2);

    return 0;
}

/////////////////////////////////////////////////////////////////////////////////////////////////
// 
//  Testcases successfully handled by the application
// 
//  Input : 
//  Enter number of rows:
//  4
//  Enter number of columns:
//  4
//  Output:
//  A	B	C	D	
//  a	b	c	d	
//  A	B	C	D	
//  a	b	c	d
//
/////////////////////////////////////////////////////////////////////////////////////////////////