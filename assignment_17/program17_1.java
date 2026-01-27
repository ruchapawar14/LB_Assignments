//////////////////////////////////////////////////////////////////////////////////////////////////
// 
//  Required header files
//
//////////////////////////////////////////////////////////////////////////////////////////////////

import java.util.Scanner;

//////////////////////////////////////////////////////////////////////////////////////////////////
// 
//  Function Name   :   DigitSum
//  Description     :   It returns sum of digits of given number
//  Input           :   Int
//  Output          :   Int
//  Author          :   Rucha Hanumant Pawar
//  Date            :   8/12/2025
//  
//////////////////////////////////////////////////////////////////////////////////////////////////

class Logic
{
    int DigitSum(int iNo)
    {
        int iDigit = 0;
        int iSum = 0;

        if(iNo < 0)
        {
            iNo = -iNo;
        }

        while(iNo != 0)
        {
            iDigit = iNo % 10;
            iSum = iSum + iDigit;
            iNo = iNo / 10;
        }

        return iSum;
    } // End of DigitSum
}

//////////////////////////////////////////////////////////////////////////////////////////////////
// 
//  Entry point function for the application
// 
//////////////////////////////////////////////////////////////////////////////////////////////////

class program17_1
{
    public static void main(String[] args) {
        int iValue = 0;
        int iRet = 0;

        Scanner scanner = new Scanner(System.in);

        Logic obj = new Logic();

        System.out.println("Enter number : ");
        iValue = scanner.nextInt();

        iRet = obj.DigitSum(iValue);
        System.out.println("Sum of digits is : " + iRet);


        scanner.close();
    }
}

//////////////////////////////////////////////////////////////////////////////////////////////////
// 
//  Testcases handled successfully by the application
// 
//  Input   :   12345       Output  :   15
//  Input   :   751         Output  :   13
//  Input   :   0           Output  :   0
//  Input   :   -123        Output  :   6
// 
////////////////////////////////////////////////////////////////////////////////////////////////// 