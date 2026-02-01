/////////////////////////////////////////////////////////////////////////////////////////////////
// 
//  Required header files
// 
/////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

/////////////////////////////////////////////////////////////////////////////////////////////////
// 
//  Function Name : LastOcc
//  Description   : It returns the last occurance of the user defined number 
//  Input         : int * , int
//  Output        : int
//  Author        : Rucha Hanumant Pawar
//  Date          : 10/12/2025
// 
/////////////////////////////////////////////////////////////////////////////////////////////////

 int LastOcc(int Arr[], int iLength, int iNo)
 {
    int iCnt = 0, iIndex = 0;

    for(iCnt =iLength;iCnt>=0; iCnt--)
    {
        if(Arr[iCnt] == iNo)
        {
            iIndex = iCnt;
            break;
        }
    }
    
    if(iCnt == -1)
    {
        return -1;
    }
    else
    {
        return iIndex;
    }
 }  //End of LastOcc

/////////////////////////////////////////////////////////////////////////////////////////////////
// 
//  Entry point function for the application
// 
/////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iSize = 0, iCnt = 0, iNo = 0, iRet = 0;
    int * p = NULL;

    printf("Enter number of elements:\n");
    scanf("%d",&iSize);

    p = (int *) malloc(iSize * sizeof(int));
    if(p == NULL)
    {
        printf("Unable to allocate memory\n");
        return -1;
    }

    printf("Enter the elements:\n");
    for(iCnt=0; iCnt<iSize; iCnt++)
    {
        scanf("%d",&p[iCnt]);
    }

    printf("Enter the element that you want to find: \n");
    scanf("%d",&iNo);

    iRet = LastOcc(p, iSize,iNo);

    if(iRet == -1)
    {
        printf("There is no such number\n");
    }
    else
    {
        printf("Last Occurance of number is %d\n",iRet);
    }

    free(p);

    return 0;
}

/////////////////////////////////////////////////////////////////////////////////////////////////
// 
//  Testcases successfully handled by the application
// 
//  Input : 
//  Enter number of elements:
//  4
//  Enter the elements:
//  11  11  22  22
//  Enter the element you want to find: 
//  22
//  Output :    
//  Last Occurance of number is 2
// 
//
//  Input : 
//  Enter number of elements:
//  6
//  Enter the elements:
//  45  77  89  63  14  45
//  Enter the element you want to find: 
//  14
//  Output :    
//  Last Occurance of number is 4
//
/////////////////////////////////////////////////////////////////////////////////////////////////