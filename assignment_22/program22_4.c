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
//  Function Name : Frequency
//  Description   : It returns  no of times 11 is present in the data
//  Input         : int * , int
//  Output        : int
//  Author        : Rucha Hanumant Pawar
//  Date          : 10/12/2025
// 
/////////////////////////////////////////////////////////////////////////////////////////////////

 int Frequency(int Arr[], int iLength)
 {
    int iCnt = 0, iCount = 0;

    for(iCnt =0;iCnt<iLength;iCnt++)
    {
        if(Arr[iCnt] == 11)
        {
            iCount++;
        }
    }

    return iCount;
 }  //End of Frequency

/////////////////////////////////////////////////////////////////////////////////////////////////
// 
//  Entry point function for the application
// 
/////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iSize = 0, iCnt = 0, iRet = 0;
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

    iRet = Frequency(p, iSize);

    printf("The frequency of 11 is %d\n",iRet);

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
//  11  24  11  54  11
//  Output : 
//  The frequency of 11 is 3
// 
//  Input : 
//  Enter number of elements:
//  7
//  Enter the elements:
//  15  45  63  78  89  50  59    
//  Output : 
//  The frequency of 11 is 0
//
/////////////////////////////////////////////////////////////////////////////////////////////////