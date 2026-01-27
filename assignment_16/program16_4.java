//////////////////////////////////////////////////////////////////////////////////////////////////
// 
//  Required header files
//
//////////////////////////////////////////////////////////////////////////////////////////////////

import java.util.Scanner;

//////////////////////////////////////////////////////////////////////////////////////////////////
// 
//  Function Name   :   ReverseNumber
//  Description     :   It is used to reverse given number
//  Input           :   Int
//  Output          :   Void
//  Author          :   Rucha Hanumant Pawar
//  Date            :   8/12/2025
//  
//////////////////////////////////////////////////////////////////////////////////////////////////

class Logic
{
    void ReverseNumber(int iNo)
    {
        int iDigit = 0;

        if(iNo < 0)
        {
            iNo = -iNo;
        }

        while(iNo != 0)
        {
            iDigit = iNo % 10;
            System.out.print(iDigit);
            iNo = iNo / 10;
        }
    } // End of ReverseNumber
}

//////////////////////////////////////////////////////////////////////////////////////////////////
// 
//  Entry point function for the application
// 
//////////////////////////////////////////////////////////////////////////////////////////////////

class program16_4
{
    public static void main(String[] args) {
        int iValue = 0;

        Scanner scanner = new Scanner(System.in);

        Logic obj = new Logic();

        System.out.println("Enter number : ");
        iValue = scanner.nextInt();

        obj.ReverseNumber(iValue);


        scanner.close();
    }
}

//////////////////////////////////////////////////////////////////////////////////////////////////
// 
//  Testcases handled successfully by the application
// 
//  Input   :   12345       Output  :   54321
//  Input   :   9876        Output  :   6789
//  Input   :   -54321      Output  :   12345
// 
////////////////////////////////////////////////////////////////////////////////////////////////// 