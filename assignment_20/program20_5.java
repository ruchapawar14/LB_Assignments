//////////////////////////////////////////////////////////////////////////////////////////////////
// 
//  Required header files
//
//////////////////////////////////////////////////////////////////////////////////////////////////

import java.util.Scanner;

//////////////////////////////////////////////////////////////////////////////////////////////////
// 
//  Function Name   :   FindSmallestDigit
//  Description     :   It is used to find the smallest digit in a number
//  Input           :   Int
//  Output          :   Int
//  Author          :   Rucha Hanumant Pawar
//  Date            :   8/12/2025
//  
//////////////////////////////////////////////////////////////////////////////////////////////////

class Logic
{
    int FindSmallestDigit(int iNo)
    {
        int iDigit = 0;
        int iMin = 9;

        while(iNo != 0)
        {
            iDigit = iNo % 10;
            
            if(iDigit < iMin)
            {
                iMin = iDigit;
            }

            iNo = iNo / 10;
        }

        return iMin;
    } // End of FindSmallestDigit
}

//////////////////////////////////////////////////////////////////////////////////////////////////
// 
//  Entry point function for the application
// 
//////////////////////////////////////////////////////////////////////////////////////////////////

class program20_5
{
    public static void main(String[] args) {
        int iValue = 0;
        int iRet = 0;

        Scanner scanner = new Scanner(System.in);
        Logic obj = new Logic();

        System.out.println("Enter number : ");
        iValue = scanner.nextInt();

        iRet = obj.FindSmallestDigit(iValue);

        System.out.println("Smallest digit: "+ iRet);


        scanner.close();        
    }
}

//////////////////////////////////////////////////////////////////////////////////////////////////
// 
//  Testcases handled successfully by the application
// 
//  Input   :   1216        Output  :   1
//  Input   :   8993        Output  :   3
//  Input   :   994749      Output  :   4
// 
////////////////////////////////////////////////////////////////////////////////////////////////// 