//////////////////////////////////////////////////////////////////////////////////////////////////
// 
//  Required header files
//
//////////////////////////////////////////////////////////////////////////////////////////////////

import java.util.Scanner;

//////////////////////////////////////////////////////////////////////////////////////////////////
// 
//  Function Name   :   FindLargestDigit
//  Description     :   It is used to find the largest digit in a number
//  Input           :   Int
//  Output          :   Int
//  Author          :   Rucha Hanumant Pawar
//  Date            :   4/12/2025
//  
//////////////////////////////////////////////////////////////////////////////////////////////////

class Logic
{
    int FindLargestDigit(int iNo)
    {
        int iDigit = 0;
        int iMax = 0;

        while(iNo != 0)
        {
            iDigit = iNo % 10;
            
            if(iDigit > iMax)
            {
                iMax = iDigit;
            }

            iNo = iNo / 10;
        }

        return iMax;
    } // End of FindLargestDigit
}

//////////////////////////////////////////////////////////////////////////////////////////////////
// 
//  Entry point function for the application
// 
//////////////////////////////////////////////////////////////////////////////////////////////////

class program20_4
{
    public static void main(String[] args) {
        int iValue = 0;
        int iRet = 0;

        Scanner scanner = new Scanner(System.in);
        Logic obj = new Logic();

        System.out.println("Enter number : ");
        iValue = scanner.nextInt();

        iRet = obj.FindLargestDigit(iValue);

        System.out.println("Largest digit: "+ iRet);


        scanner.close();        
    }
}

//////////////////////////////////////////////////////////////////////////////////////////////////
// 
//  Testcases handled successfully by the application
// 
//  Input   :   1416        Output  :   6
//  Input   :   29730       Output  :   9
//  Input   :   55684       Output  :   8
// 
////////////////////////////////////////////////////////////////////////////////////////////////// 