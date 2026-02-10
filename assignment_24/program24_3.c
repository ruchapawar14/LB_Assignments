/////////////////////////////////////////////////////////////////////////////////////////////////
// 
//  Required header files
// 
/////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

/////////////////////////////////////////////////////////////////////////////////////////////////
// 
//  Function Name : Difference
//  Description   : It returns the difference between the max and min number in the data
//  Input         : int * , int
//  Output        : int
//  Author        : Rucha Hanumant Pawar
//  Date          : 12/12/2025
// 
/////////////////////////////////////////////////////////////////////////////////////////////////

int Difference(int Arr[], int iLength)
{
    int iCnt = 0, iMin = 0, iMax = 0;
    iMin = iMax = Arr[0];

    for(iCnt = 0;iCnt<iLength; iCnt++)
    {
        if(Arr[iCnt]<iMin)
        {
            iMin = Arr[iCnt];
        }
        
        if(Arr[iCnt]>iMax)
        {
            iMax = Arr[iCnt];
        }
    }

    return (iMax - iMin);
}   //End of Difference

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

    iRet = Difference(p,iSize);

    printf("Difference between the maximum and minimum number in the data is %d\n", iRet);

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
//  Difference between the maximum and minimum number in the data is 90
// 
//  Input : 
//  Enter number of elements:
//  5
//  Enter the elements:
//  1   3   4   7   2
//
//  Output :   
//  Difference between the maximum and minimum number in the data is 6 
//
/////////////////////////////////////////////////////////////////////////////////////////////////