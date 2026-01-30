/////////////////////////////////////////////////////////////////////////
// 
//  Required header files
// 
/////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

/////////////////////////////////////////////////////////////////////////
// 
//  Function Name : CountEven
//  Description   : It counts the frequency of even numbers in the array
//  Input         : int * , int
//  Output        : int
//  Author        : Rucha Hanumant Pawar      
//  Date          : 10/12/2025
// 
/////////////////////////////////////////////////////////////////////////

 int CountEven(int Arr[], int iLength)
 {
    int iCnt = 0, iCount = 0;

    for(iCnt = 0; iCnt<iLength; iCnt++)
    {
        if(Arr[iCnt]%2 == 0)
        {
            iCount++;
        }
    }

    return iCount;
 }  //End of CountEven

////////////////////////////////////////////////////////////////////////
// 
//  Entry point function for the application
// 
/////////////////////////////////////////////////////////////////////////

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

    iRet = CountEven(p, iSize);

    printf("The number of even elements are %d\n",iRet);

    free(p);

    return 0;
}

/////////////////////////////////////////////////////////////////////////////////
// 
//  Testcases successfully handled by the application
// 
//  Input : 
//  Enter number of elements:
//  5
//  Enter the elements:
//  10  20  30  40  50  
//
//  Output :   The number of even elements are 5
// 
//  Input : 
//  Enter number of elements:
//  8
//  Enter the elements:
//  12  85  64  73   63  45  50  22
//
//  Output :   The number of even elements are 4
//
/////////////////////////////////////////////////////////////////////////////////