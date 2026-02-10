/////////////////////////////////////////////////////////////////////////////////////////////////
// 
//  Required header files
// 
/////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

/////////////////////////////////////////////////////////////////////////////////////////////////
// 
//  Function Name : Digits
//  Description   : It displays the numbers with 3 digits
//  Input         : int * , int
//  Output        : void
//  Author        : Rucha Hanumant Pawar
//  Date          : 12/12/2025
// 
/////////////////////////////////////////////////////////////////////////////////////////////////

void Digits(int Arr[], int iLength)
{
    int iCnt = 0;

    for(iCnt = 0;iCnt<iLength; iCnt++)
    {
        if(Arr[iCnt]>=100 && Arr[iCnt]<=999)
        {
            printf("%d\t",Arr[iCnt]);
        }
        
    }
}   //End of Digits

/////////////////////////////////////////////////////////////////////////////////////////////////
// 
//  Entry point function for the application
// 
/////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iSize = 0, iCnt =0;
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

    Digits(p,iSize);

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
//  8225    665  3    76  953   858
//
//  Output :    
//  665 953 858
// 
//  Input : 
//  Enter number of elements:
//  5
//  Enter the elements:
//  11 22 567 8900 5
//
//  Output :  
//  567
//
/////////////////////////////////////////////////////////////////////////////////////////////////