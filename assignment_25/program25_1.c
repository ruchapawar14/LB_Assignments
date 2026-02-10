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
//  Description   : It returns the difference between the sum of even and sum of odd numbers
//  Input         : int * , int
//  Output        : int
//  Author        : Rucha Hanumant Pawar
//  Date          : 12/12/2025
// 
/////////////////////////////////////////////////////////////////////////////////////////////////

 int Difference(int Arr[], int iLength)
 {
    int iCnt = 0, iEvenSum =0, iOddSum = 0; 

    for(iCnt =0;iCnt<iLength;iCnt++)
    {
        if(Arr[iCnt]%2 == 0)
        {
            iEvenSum = iEvenSum + Arr[iCnt];
        }
        else
        {
            iOddSum = iOddSum +Arr[iCnt];
        }
    }

    return (iEvenSum - iOddSum);
 }  //End of Difference

/////////////////////////////////////////////////////////////////////////////////////////////////
// 
//  Entry point function for the application
// 
/////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iSize = 0, iCnt = 0,iRet = 0;
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

    iRet = Difference(p, iSize);

    printf("Required difference is %d\n", iRet);

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
//  85  66  3   80  93 88
//  Output :   
//  Required difference is 53
// 
//  Input : 
//  Enter number of elements:
//  5
//  Enter the elements:
//  11  22  22  11  11  
//  Output :   
//  Required difference is 11
//
/////////////////////////////////////////////////////////////////////////////////////////////////