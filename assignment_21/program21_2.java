//////////////////////////////////////////////////////////////////////////////////////////////////
// 
//  Required header files
//
//////////////////////////////////////////////////////////////////////////////////////////////////

import java.util.Scanner;

//////////////////////////////////////////////////////////////////////////////////////////////////
// 
//  Function Name   :   CountEvenOddRange
//  Description     :   It is used to count even and odd numbers present between 1 to N
//  Input           :   Int
//  Output          :   Void
//  Author          :   Rucha Hanumant Pawar
//  Date            :   8/12/2025
//  
//////////////////////////////////////////////////////////////////////////////////////////////////

class Logic
{
    void CountEvenOddRange(int iNo)
    {
        int iCnt = 0;
        int iEvenCount = 0;
        int iOddCount = 0;

        for(iCnt = 1; iCnt <= iNo; iCnt++)
        {
            if(iCnt % 2 == 0)
            {
                iEvenCount++;
            }
            else
            {
                iOddCount++;
            }
        }

        System.out.println("Total even numbers : " + iEvenCount);
        System.out.println("Total odd numbers : " + iOddCount);
    } // End of CountEvenOddRange
}

//////////////////////////////////////////////////////////////////////////////////////////////////
// 
//  Entry point function for the application
// 
//////////////////////////////////////////////////////////////////////////////////////////////////

class program21_2
{
    public static void main(String[] args) {
        int iValue = 0;

        Scanner scanner = new Scanner(System.in);
        Logic obj = new Logic();

        System.out.println("Enter number : ");
        iValue = scanner.nextInt();

        obj.CountEvenOddRange(iValue);

        scanner.close();        
    }
}

//////////////////////////////////////////////////////////////////////////////////////////////////
// 
//  Testcases handled successfully by the application
// 
//  Input   :   10          Output  :  Even : 5     Odd : 5
//  Input   :   567         Output  :  Even : 283   Odd : 284
//  Input   :   1010        Output  :  Even : 505   Odd : 505
//  Input   :   7231        Output  :  Even : 3615  Odd : 3616
// 
////////////////////////////////////////////////////////////////////////////////////////////////// 