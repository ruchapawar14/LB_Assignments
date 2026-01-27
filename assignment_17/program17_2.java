//////////////////////////////////////////////////////////////////////////////////////////////////
// 
//  Required header files
//
//////////////////////////////////////////////////////////////////////////////////////////////////

import java.util.Scanner;

//////////////////////////////////////////////////////////////////////////////////////////////////
// 
//  Function Name   :   CheckPalindrome
//  Description     :   It is used to check whether given number is palindrome or not
//  Input           :   Int
//  Output          :   Boolean
//  Author          :   Rucha Hanumant Pawar
//  Date            :   8/12/2025
//  
//////////////////////////////////////////////////////////////////////////////////////////////////

class Logic
{
    boolean CheckPalindrome(int iNo)
    {
        int iOriginal = iNo;
        int iRev = 0;

        while(iNo != 0)
        {
            int digit = iNo % 10;
            iRev = iRev * 10 + digit;
            iNo = iNo / 10;
        }

        if(iOriginal == iRev)
        {
            return true;
        }

        return false;
    } // End of CheckPalindrome
}

//////////////////////////////////////////////////////////////////////////////////////////////////
// 
//  Entry point function for the application
// 
//////////////////////////////////////////////////////////////////////////////////////////////////

class program17_2
{
    public static void main(String[] args) {
        int iValue = 0;
        boolean bRet = false;

        Scanner scanner = new Scanner(System.in);

        Logic obj = new Logic();

        System.out.println("Enter number : ");
        iValue = scanner.nextInt();

        bRet = obj.CheckPalindrome(iValue);

        if(bRet == true)
            System.out.println(iValue + " is a Palindrome number");
        else
            System.out.println(iValue + " is not a Palindrome number");


        scanner.close();
    }
}

//////////////////////////////////////////////////////////////////////////////////////////////////
// 
//  Testcases handled successfully by the application
// 
//  Input   :   12341       Output  :   12341 is not a Palindrome number
//  Input   :   2112        Output  :   2112 is a Palindrome number
//  Input   :   45654       Output  :   45654 is a Palindrome number
//  Input   :   141414      Output  :   141414 is not a Palindrome number
// 
////////////////////////////////////////////////////////////////////////////////////////////////// 