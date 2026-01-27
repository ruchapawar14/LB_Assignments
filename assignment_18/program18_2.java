//////////////////////////////////////////////////////////////////////////////////////////////////
// 
//  Required header files
//
//////////////////////////////////////////////////////////////////////////////////////////////////

import java.util.Scanner;

//////////////////////////////////////////////////////////////////////////////////////////////////
// 
//  Function Name   :   PrintEven
//  Description     :   It is used to print all even numbers upto given number
//  Input           :   Int
//  Output          :   Void
//  Author          :   Rucha Hanumant Pawar
//  Date            :   8/12/2025
//  
//////////////////////////////////////////////////////////////////////////////////////////////////

class Logic
{
    void PrintEven(int iNo)
    {
        int iCnt = 0;

        if(iNo < 0)
        {
            iNo = -iNo;
        }

        for(iCnt = 2; iCnt <= iNo; iCnt++)
        {
            if(iCnt % 2 == 0)
            {
                System.out.print(iCnt + "\t");
            }
        }
    } // End of PrintEven
}

//////////////////////////////////////////////////////////////////////////////////////////////////
// 
//  Entry point function for the application
// 
//////////////////////////////////////////////////////////////////////////////////////////////////

class program18_2
{
    public static void main(String[] args) {
        int iValue = 0;

        Scanner scanner = new Scanner(System.in);

        Logic obj = new Logic();

        System.out.println("Enter number : ");
        iValue = scanner.nextInt();

        obj.PrintEven(iValue);

        scanner.close();
    }
}

//////////////////////////////////////////////////////////////////////////////////////////////////
// 
//  Testcases handled successfully by the application
// 
//  Input   :   8       Output  :   2       4       6       8
//  Input   :   15      Output  :   2       4       6       8       10      12      14
//  Input   :   -10     Output  :   2       4       6       8       10
// 
////////////////////////////////////////////////////////////////////////////////////////////////// 