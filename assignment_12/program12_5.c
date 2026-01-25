//////////////////////////////////////////////////////////////////////////////////////////////////
// 
//  Required header files
// 
//////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdbool.h>

//////////////////////////////////////////////////////////////////////////////////////////////////
// 
//  Function Name   : CheckDivisibleBy5
//  Description     : It is used to check if number is divisible by 5
//  Input           : Int
//  Output          : Bool
//  Author          : Rucha Hanumant Pawar
//  Date            : 6/12/2025
//  
//////////////////////////////////////////////////////////////////////////////////////////////////

bool CheckDivisibleBy5(int iNo)
{
    if (iNo % 5 == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
} // End of CheckDivisibleBy5

//  Time complexity :   O(1)

//////////////////////////////////////////////////////////////////////////////////////////////////
// 
//  Entry point function for the application
// 
//////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter number: ");
    scanf("%d", &iValue);

    bRet = CheckDivisibleBy5(iValue);
    
    if(bRet == true)
    {
        printf("%d is divisible by 5", iValue);
    }
    else
    {
        printf("%d is not divisible by 5", iValue);
    }

    return 0;
}

//////////////////////////////////////////////////////////////////////////////////////////////////
// 
//  Testcases handled successfully by the application
// 
//  Input   :   10      Output  :   10 is divisible by 5
//  Input   :   0       Output  :   0 is divisible by 5
//  Input   :   55      Output  :   55 is divisible by 5
//  Input   :   23      Output  :   23 is not divisible by 5
//  Input   :   12      Output  :   12 is not divisible by 5
//  Input   :   -15     Output  :   -15 is divisible by 5
// 
////////////////////////////////////////////////////////////////////////////////////////////////// 