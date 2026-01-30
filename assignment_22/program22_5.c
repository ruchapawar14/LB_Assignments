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
//  Description   : It returns the frequency user defined number in the array 
//  Input         : int * , int
//  Output        : int
//  Author        : Rucha Hanumant Pawar
//  Date          : 10/12/2025
// 
/////////////////////////////////////////////////////////////////////////////////////////////////

 int Frequency(int Arr[], int iLength, int iNo)
 {
    int iCnt = 0, iCount = 0;

    for(iCnt =0;iCnt<iLength;iCnt++)
    {
        if(Arr[iCnt] == iNo)
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
    int iSize = 0, iCnt = 0, iRet = 0, iValue = 0 ;
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

    printf("Enter the number whose frequency to find: \n");
    scanf("%d",&iValue);

    iRet = Frequency(p, iSize,iValue);

    printf("Frequency of %d is %d\n",iValue,iRet);

    free(p);

    return 0;
}

/////////////////////////////////////////////////////////////////////////////////////////////////
// 
//  Testcases successfully handled by the application
// 
//  Input : 
//  Enter the number of elements:
//  8
//  Enter the elements:
//  11  48  66  11  55  99  66  11
//  Enter number whose frequency to find: 
//  11
//  Output : 
//  Frequency of 11 is 3
//
//  Input : 
//  Enter the number of elements:
//  12
//  Enter the elements:
//  54  12  36  54  75  45  54  23  01  78  54  33
//  Enter number whose frequency to find: 
//  54
//  Output : 
//  Frequency of 54 is 4
// 
//  Input : 
//  Enter the number of elements:
//  6
//  Enter the elements:
//  12  45  65  78  63  30
//  Enter number whose frequency to find: 
//  1
//  Output : 
//  Frequency of 1 is 0
// 
/////////////////////////////////////////////////////////////////////////////////////////////////