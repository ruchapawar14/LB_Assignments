/////////////////////////////////////////////////////////////////////////////////////////////////
// 
//  Required header files
// 
/////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

/////////////////////////////////////////////////////////////////////////////////////////////////
// 
//  Function Name : Minimum
//  Description   : It returns the minimum value in the data 
//  Input         : int * , int
//  Output        : int
//  Author        : Rucha Hanumant Pawar
//  Date          : 12/12/2025
// 
/////////////////////////////////////////////////////////////////////////////////////////////////

int Minimum(int Arr[], int iLength)
{
    int iCnt = 0, iMin = 0;
    iMin = Arr[0];

    for(iCnt = 0;iCnt<iLength; iCnt++)
    {
        if(Arr[iCnt]<iMin)
        {
            iMin = Arr[iCnt];
        }
    }

    return iMin;
}   //End of Minimum

/////////////////////////////////////////////////////////////////////////////////////////////////
// 
//  Entry point function for the application
// 
/////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iSize = 0, iCnt =0, iRet = 0;
    int * p = NULL;

    printf("Enter no of elements:\n");
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

    iRet = Minimum(p,iSize);

    printf("Minimum number in the data is %d\n", iRet);

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
//  85 66 30 76 93 88
//
//  Output :    
//  Minimum number in the data is 30
// 
//  Input : 
//  Enter number of elements:
//  5
//  Enter the elements:
//  10   1   4   5   14
//
//  Output :    
//  Minimum number in the data is 1  
//
/////////////////////////////////////////////////////////////////////////////////////////////////