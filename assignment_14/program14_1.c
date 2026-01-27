//////////////////////////////////////////////////////////////////////////////////////////////////
// 
//  Required header files
// 
//////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

//////////////////////////////////////////////////////////////////////////////////////////////////
// 
//  Function Name   : DisplayDigit
//  Description     : It is used to accept number and display its digits in reverse order
//  Input           : Int
//  Output          : Void
//  Author          : Rucha Hanumant Pawar
//  Date            : 6/12/2025
//  
//////////////////////////////////////////////////////////////////////////////////////////////////

void DisplayDigit(int iNo)
{
    int iDigit = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        printf("%d\n", iDigit);
        iNo = iNo / 10;
    }
} // End of DisplayDigit

//  Time complexity :   log(N)

//////////////////////////////////////////////////////////////////////////////////////////////////
// 
//  Entry point function for the application
// 
//////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;

    printf("Enter number : ");
    scanf("%d", &iValue);

    DisplayDigit(iValue);    
    
    return 0;
}

//////////////////////////////////////////////////////////////////////////////////////////////////
// 
//  Testcases handled successfully by the application
// 
//  Input   :   2395    Output  :   5
//                                  9
//                                  3
//                                  2
//  Input   :   1018    Output  :   8
//                                  1
//                                  0
//                                  1
//  Input   :   -1018   Output  :   8
//                                  1
//                                  0
//                                  1
//  Input   :   9000    Output  :   0
//                                  0
//                                  0
//                                  9
// 
////////////////////////////////////////////////////////////////////////////////////////////////// 