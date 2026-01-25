//////////////////////////////////////////////////////////////////////////////////////////////////
// 
//  Required header files
// 
//////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

//////////////////////////////////////////////////////////////////////////////////////////////////
// 
//  Function Name   : RangeSumEven
//  Description     : It is used to accept range and display sum of all even numbers between that range
//  Input           : Int, Int
//  Output          : Int
//  Author          : Rucha Hanumant Pawar
//  Date            : 6/12/2025
//  
//////////////////////////////////////////////////////////////////////////////////////////////////

int RangeSumEven(
                    int iStart,                            
                    int iEnd                            
                )
{
    int iCnt = 0;
    int iSum = 0;                                         

    if((iStart > iEnd) || (iStart <= 0))
    {
        printf("Invalid Range\n");
        return 0;
    }
    
    for(iCnt = iStart; iCnt <= iEnd; iCnt++)
    {
        if((iCnt % 2) == 0)
        {
            iSum = iSum + iCnt;
        }
    }

    return iSum;
} // End of RangeSumEven

//  Time Complexity :   O(N)

//////////////////////////////////////////////////////////////////////////////////////////////////
// 
//  Entry point function for the application
// 
//////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    int iRet = 0;                                           

    printf("Enter starting point: ");
    scanf("%d", &iValue1);

    printf("Enter ending point: ");
    scanf("%d", &iValue2);

    iRet = RangeSumEven(iValue1, iValue2);
    
    printf("Addition is : %d\n", iRet);
    

    return 0;
}

//////////////////////////////////////////////////////////////////////////////////////////////////
// 
//  Testcases handled successfully by the application
// 
//  Input   :   23  30      Output  :   108
//  Input   :   10  18      Output  :   70
//  Input   :   -10 2       Output  :   Invalid Range
//  Input   :   90  18      Output  :   Invalid Range
// 
////////////////////////////////////////////////////////////////////////////////////////////////// 