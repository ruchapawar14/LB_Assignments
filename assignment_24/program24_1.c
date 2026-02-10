/////////////////////////////////////////////////////////////////////////////////////////////////
// 
//  Required header files
// 
/////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

/////////////////////////////////////////////////////////////////////////////////////////////////
// 
//  Function Name : Maximum
//  Description :   It returns the maximum value in the data 
//  Input :         int * , int
//  Output :        int
//  Author :        Rucha Hanumant Pawar
//  Date :          12/12/2025
// 
/////////////////////////////////////////////////////////////////////////////////////////////////

int Maximum(int Arr[], int iLength)
{
    int iCnt = 0, iMax = 0;
    iMax = Arr[0];

    for(iCnt = 0;iCnt<iLength; iCnt++)
    {
        if(Arr[iCnt]>iMax)
        {
            iMax = Arr[iCnt];
        }
    }

    return iMax;
}   //End of Maximum

/////////////////////////////////////////////////////////////////////////////////////////////////
// 
//  Entry point function for the application
// 
/////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iSize = 0, iCnt =0, iRet = 0;
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

    iRet = Maximum(p,iSize);

    printf("Maximum number in the data is %d\n", iRet);

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
//  85 66 3 76 93 88
//
//  Output :    
//  Maximum number in the data is 93
// 
//  Input : 
//  Enter number of elements:
//  5
//  Enter the elements:
//  14   3   4   1   2
//
//  Output :    
//  Maximum number in the data is 14  
//
/////////////////////////////////////////////////////////////////////////////////////////////////