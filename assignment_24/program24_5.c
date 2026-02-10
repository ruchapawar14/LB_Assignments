/////////////////////////////////////////////////////////////////////////////////////////////////
// 
//  Required header files
// 
/////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

/////////////////////////////////////////////////////////////////////////////////////////////////
// 
//  Function Name : DigitsSum
//  Description   : It prints the summation of all digits of the numbers in the data
//  Input         : int * , int
//  Output        : void
//  Author        : Rucha Hanumant Pawar
//  Date          : 12/12/2025
// 
/////////////////////////////////////////////////////////////////////////////////////////////////

void DigitsSum(int Arr[], int iLength)
{
    int iCnt = 0, iNo = 0, iDigit = 0, iSum = 0;

    for(iCnt = 0;iCnt<iLength; iCnt++)
    {
        iSum =0;
        iDigit = 0;
        iNo = Arr[iCnt];
        while( iNo!=0 )
        {
            iDigit = iNo%10;

            iSum = iSum+iDigit;

            iNo = iNo/10;
        }
        printf("%d\t",iSum);
    }
}   //End of DigitsSum

/////////////////////////////////////////////////////////////////////////////////////////////////
// 
//  Entry point function for the application
// 
/////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iSize = 0, iCnt =0;
    int * p = NULL;

    printf("Enter number of elements:\n");
    scanf("%d",&iSize);

    p = (int *)malloc(iSize * sizeof(int));
    if(p == NULL)
    {
        printf("Unable to allocate memory\n");
        return -1;
    }

    printf("Enter elements: \n");
    for(iCnt = 0; iCnt<iSize; iCnt++)
    {
        scanf("%d",&p[iCnt]);
    }

    DigitsSum(p,iSize);

    free(p);

    return 0;
}

/////////////////////////////////////////////////////////////////////////////////////////////////
// 
//  Testcases successfully handled by the application
// 
//  Input : 
//  Enter number of elements:
//  6
//  Enter the elements:
//  8225    665  3    76  953   858
//
//  Output :    
//  17	17	3	13	17	21
// 
//  Input : 
//  Enter number of elements:
//  5
//  Enter the elements:
//  11  22  33  44  55
//
//  Output :  
//  2 4 6 8 10
//
/////////////////////////////////////////////////////////////////////////////////////////////////