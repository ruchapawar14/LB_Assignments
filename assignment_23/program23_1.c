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
//  Function Name : Check
//  Description   : It returns  True if user defined number is present and False if not present 
//  Input         : int * , int
//  Output        : bool
//  Author        : Rucha Hanumant Pawar
//  Date          : 10/12/2025
// 
/////////////////////////////////////////////////////////////////////////////////////////////////

 bool Check(int Arr[], int iLength, int iNo)
 {
    int iCnt = 0, iCount = 0;

    for(iCnt =0;iCnt<iLength;iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            iCount++;
            break;
        }
    }

    if(iCount > 0)
    {
        return true;
    }
    else
    {
        return false;
    }
 }  //End of Check

/////////////////////////////////////////////////////////////////////////////////////////////////
// 
//  Entry point function for the application
// 
/////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iSize = 0, iCnt = 0, iNo = 0;
    bool bRet = false;
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

    bRet = Check(p, iSize,iNo);

    if(bRet == true)
    {
        printf("%d is present in the data\n",iNo);
    }
    else
    {
        printf("%d is not present in the data\n",iNo);
    }

    free(p);

    return 0;
}

/////////////////////////////////////////////////////////////////////////////////////////////////
// 
//  Testcases successfully handled by the application
// 
//  Input : 
//  Enter the number of elements:
//  5
//  Enter the elements:
//  11  22  33  44  55
//  Enter the element you want to find: 
//  33
//  Output :   
//  33 is present in the data
// 
//  Input : 
//  Enter the number of elements:
//  9
//  Enter the elements:
//  54  63  59  58  72  13  60  49  6
//  Enter the element you want to find: 
//  14
//  Output :   
//  14 is not present in the data
//
/////////////////////////////////////////////////////////////////////////////////////////////////