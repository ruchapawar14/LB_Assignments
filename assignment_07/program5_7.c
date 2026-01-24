/////////////////////////////////////////////////////////////////////////////////
// 
//  Required header files
// 
/////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

/////////////////////////////////////////////////////////////////////////////////
// 
//  Function Name   : MultipleDisplay
//  Description     : It is used to accept N and print first 5 multiples of N
//  Input           : Int
//  Output          : Void
//  Author          : Rucha Hanumant Pawar
//  Date            : 3/12/2025
//  
/////////////////////////////////////////////////////////////////////////////////

void MultipleDisplay(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= 5; iCnt++)
    {
        printf("%d\t", iNo*iCnt);
    }
} // End of MultipleDisplay

//  Time complexity :   O(1)

/////////////////////////////////////////////////////////////////////////////////
// 
//  Entry point function for the application
// 
/////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;

    printf("Enter number : ");
    scanf("%d", &iValue);

    MultipleDisplay(iValue);

    return 0;
}

/////////////////////////////////////////////////////////////////////////////////
// 
//  Testcases handled successfully by the application
// 
//  Input : 5       Output  : 5       10      15      20      25
//  Input : 7       Output  : 7       14      21      28      3
//  Input : -4      Output  : 4       8       12      16      2
//  Input : 0       Output  : 0       0       0       0       0
// 
///////////////////////////////////////////////////////////////////////////////// 
