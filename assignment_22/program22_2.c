/////////////////////////////////////////////////////////////////////////////////////////////////
// 
//  Required header files
// 
/////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

/////////////////////////////////////////////////////////////////////////////////////////////////
// 
//  Function Name : Frequency
//  Description   : It returns the difference between the frequency of even and odd numbers.
//  Input         : int * , int
//  Output        : int
//  Author        : Rucha Hanumant Pawar
//  Date          : 10/12/2025
// 
/////////////////////////////////////////////////////////////////////////////////////////////////

 int Frequency(int Arr[], int iLength)
 {
    int iCnt = 0, iEvenCount = 0, iOddCount = 0;

    for(iCnt = 0; iCnt<iLength; iCnt++)
    {
        if(Arr[iCnt]%2 == 0)
        {
            iEvenCount++;
        }
        else
        {
            iOddCount++;
        }
    }

    return (iEvenCount - iOddCount);
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

    printf("The Difference between the frequency of even and odd numbers is %d\n",iRet);

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
//  11  22  33  44  55 
//  Output : 
//  The Difference between the frequency of even and odd numbers is -1
// 
//  Input : 
//  Enter number of elements:
//  9
//  Enter the elements:
//  56 87 94 23 10 45 66 80 94
//  Output : 
//  The Difference between the frequency of even and odd numbers is 3
//
/////////////////////////////////////////////////////////////////////////////////////////////////