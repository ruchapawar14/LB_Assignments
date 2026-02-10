/////////////////////////////////////////////////////////////////////////////////////////////////
// 
//  Required header files
// 
/////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

/////////////////////////////////////////////////////////////////////////////////////////////////
// 
//  Function Name : Display
//  Description   : It displays all numbers of the set which are even and divisible by 5 
//  Input         : int * , int
//  Output        : void
//  Author        : Rucha Hanumant Pawar
//  Date          : 12/12/2025
// 
/////////////////////////////////////////////////////////////////////////////////////////////////

 void Display(int Arr[], int iLength)
 {
    int iCnt = 0; 

    for(iCnt =0;iCnt<iLength;iCnt++)
    {
        if((Arr[iCnt]%2 == 0) && (Arr[iCnt]%5 == 0))
        {
            printf("%d\t",Arr[iCnt]);
        }
    }

 }  //End of Display

/////////////////////////////////////////////////////////////////////////////////////////////////
// 
//  Entry point function for the application
// 
/////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iSize = 0, iCnt = 0;
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

    Display(p, iSize);

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
//  80
// 
//  Input : 
//  Enter number of elements:
//  6
//  Enter the elements:
//  10  11  25  100  40  66
//  Output :   
//  10   100   40
//
/////////////////////////////////////////////////////////////////////////////////////////////////