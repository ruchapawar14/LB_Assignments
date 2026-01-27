//////////////////////////////////////////////////////////////////////////////////////////////////
// 
//  Required header files
//
//////////////////////////////////////////////////////////////////////////////////////////////////

import java.util.Scanner;

//////////////////////////////////////////////////////////////////////////////////////////////////
// 
//  Function Name   :   CheckSign
//  Description     :   It is used to find whenther number is positive, negative or zero
//  Input           :   Int
//  Output          :   Void
//  Author          :   Rucha Hanumant Pawar
//  Date            :   8/12/2025
//  
//////////////////////////////////////////////////////////////////////////////////////////////////

class Logic
{
    void CheckSign(int iNo)
    {
        if(iNo > 0)
        {
            System.out.println("Positive");
        }
        else if(iNo < 0)
        {
            System.out.println("Negative");
        }
        else
        {
            System.out.println("Zero");
        }
    } // End of CheckSign
}

//////////////////////////////////////////////////////////////////////////////////////////////////
// 
//  Entry point function for the application
// 
//////////////////////////////////////////////////////////////////////////////////////////////////

class program18_5
{
    public static void main(String[] args) {
        int iValue = 0;

        Scanner scanner = new Scanner(System.in);

        Logic obj = new Logic();

        System.out.println("Enter number : ");
        iValue = scanner.nextInt();

        obj.CheckSign(iValue);

        scanner.close();
    }
}

//////////////////////////////////////////////////////////////////////////////////////////////////
// 
//  Testcases handled successfully by the application
// 
//  Input   :   14      Output  :   Positive
//  Input   :   -2      Output  :   Negative
//  Input   :   0       Output  :   Zero
// 
////////////////////////////////////////////////////////////////////////////////////////////////// 