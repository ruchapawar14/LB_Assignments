/////////////////////////////////////////////////////////////////////////////////////////////////
// 
//  Required header files
// 
/////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

/////////////////////////////////////////////////////////////////////////////////////////////////
// 
//  Function Name : Range
//  Description   : It returns the last occurance of the user defined number 
//  Input         : int * , int, int, int
//  Output        : void
//  Author        : Rucha Hanumant Pawar
//  Date          : 10/12/2025
// 
/////////////////////////////////////////////////////////////////////////////////////////////////

void Range(int Arr[], int iLength, int iStart,int iEnd)
{
    int iCnt = 0;

    if(iStart>iEnd)
    {
        printf("Invalid Range\n");
        return;
    }

    for(iCnt = 0;iCnt<iLength; iCnt++)
    {
        if(Arr[iCnt]>=iStart && Arr[iCnt]<=iEnd)
        {
            printf("%d\t",Arr[iCnt]);
        }
    }

}   //End of Range

/////////////////////////////////////////////////////////////////////////////////////////////////
// 
//  Entry point function for the application
// 
/////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iCnt = 0, iSize = 0, iValue1 = 0, iValue2 = 0;
    int *p = NULL;

    printf("Enter number of elements:\n");
    scanf("%d",&iSize);

    p = (int *) malloc(iSize * sizeof(int));
    if(p == NULL)
    {
        printf("Unable to allocate memory\n");
        return -1;
    }

    printf("Enter the elements: \n");
    for(iCnt=0; iCnt<iSize; iCnt++)
    {
        scanf("%d",&p[iCnt]);
    }

    printf("Enter starting point:\n");
    scanf("%d",&iValue1);

    printf("Enter ending point:\n");
    scanf("%d",&iValue2);

    Range(p, iSize, iValue1,iValue2);
    
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
//  43  21  90  87  66
//  Enter starting point:
//  10
//  Enter ending point:
//  40
//  Output :    
//  21
// 
//
//  Input : 
//  Enter number of elements:
//  7
//  Enter the elements:
//  87  67  16  90  60  33  21
//  Enter starting point:
//  30
//  Enter ending point:
//  60
//  Output : 
//  60  33   
//  
/////////////////////////////////////////////////////////////////////////////////////////////////