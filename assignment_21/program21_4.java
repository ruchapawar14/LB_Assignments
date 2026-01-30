//////////////////////////////////////////////////////////////////////////////////////////////////
// 
//  Required header files
//
//////////////////////////////////////////////////////////////////////////////////////////////////

import java.util.Scanner;

//////////////////////////////////////////////////////////////////////////////////////////////////
// 
//  Function Name   :   CountFactors
//  Description     :   It is used to count all factors of a number
//  Input           :   Int
//  Output          :   Int
//  Author          :   Rucha Hanumant Pawar
//  Date            :   8/12/2025
//  
//////////////////////////////////////////////////////////////////////////////////////////////////

class Logic
{
    int CountFactors(int iNo)
    {
        int iCnt = 0;
        int iCount = 1;

        for(iCnt = 1; iCnt <= iNo/2; iCnt++)
        {
            if(iNo % iCnt == 0)
            {
                iCount++;
            }
        }

        return iCount;
    } // End of CountFactors
}

//////////////////////////////////////////////////////////////////////////////////////////////////
// 
//  Entry point function for the application
// 
//////////////////////////////////////////////////////////////////////////////////////////////////

class program21_4
{
    public static void main(String[] args) {
        int iValue = 0;
        int iRet = 0;

        Scanner scanner = new Scanner(System.in);
        Logic obj = new Logic();

        System.out.println("Enter number : ");
        iValue = scanner.nextInt();

        iRet = obj.CountFactors(iValue);

        System.out.println("Total factors of " + iValue + " : " + iRet);

        scanner.close();        
    }
}

//////////////////////////////////////////////////////////////////////////////////////////////////
// 
//  Testcases handled successfully by the application
// 
//  Input   :   14          Output  :  4
//  Input   :   56          Output  :  8
//  Input   :   100         Output  :  9
//  Input   :   1012        Output  :  12
// 
////////////////////////////////////////////////////////////////////////////////////////////////// 