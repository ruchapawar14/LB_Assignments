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
//  Description   : It returns  True if 11 is present and False if not present 
//  Input         : int * , int
//  Output        : bool
//  Author        : Rucha Hanumant Pawar
//  Date          : 10/12/2025
// 
/////////////////////////////////////////////////////////////////////////////////////////////////

 bool Check(int Arr[], int iLength)
 {
    int iCnt = 0, iCount = 0;

    for(iCnt =0;iCnt<iLength;iCnt++)
    {
        if(Arr[iCnt] == 11)
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
    int iSize = 0, iCnt = 0;
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

    bRet = Check(p, iSize);

    if(bRet == true)
    {
        printf("11 is present in the data\n");
    }
    else
    {
        printf("11 is not present in the data\n");
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
//  4
//  Enter the elements:
//  11  33  55  99
//  Output : 11 is present in the data
// 
//  Input : 
//  Enter no of elements:
//  8
//  Enter the elements:
//  45  69  85  23  02  17  43  55       
//  Output : 11 is not present in the data
//
/////////////////////////////////////////////////////////////////////////////////////////////////