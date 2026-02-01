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
//  Function Name : FirstOcc
//  Description   : It returns the first occurance of the user defined number 
//  Input         : int * , int
//  Output        : int
//  Author        : Rucha Hanumant Pawar
//  Date          : 10/12/2025
// 
/////////////////////////////////////////////////////////////////////////////////////////////////

 int FirstOcc(int Arr[], int iLength, int iNo)
 {
    int iCnt = 0, iIndex = 0;

    for(iCnt =0;iCnt<iLength;iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            iIndex = iCnt;
            break;
        }
    }
    
    if(iCnt == iLength)
    {
        return -1;
    }
    else
    {
        return iIndex;
    }
 }  //End of FirstOcc

/////////////////////////////////////////////////////////////////////////////////////////////////
// 
//  Entry point function for the application
// 
/////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iSize = 0, iCnt = 0, iNo = 0, iRet = 0;
    int * p = NULL;

    printf("Enter the number of elements:\n");
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

    iRet = FirstOcc(p, iSize,iNo);

    if(iRet == -1)
    {
        printf("There is no such number\n");
    }
    else
    {
        printf("First Occurance of number is %d\n",iRet);
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
//  5
//  Enter the elements:
//  45  85  32  62  10
//  Enter the element you want to find: 
//  10
//  Output :  
//  First Occurance of number is 4
// 
//  Input : 
//  Enter number of elements:
//  7
//  Enter the elements:
//  45  47  10  85  32  62  11
//  Enter the element you want to find: 
//  14
//  Output :  
//  There is no such number
//
/////////////////////////////////////////////////////////////////////////////////////////////////