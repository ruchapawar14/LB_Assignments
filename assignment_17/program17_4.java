//////////////////////////////////////////////////////////////////////////////////////////////////
// 
//  Required header files
//
//////////////////////////////////////////////////////////////////////////////////////////////////

import java.util.Scanner;

//////////////////////////////////////////////////////////////////////////////////////////////////
// 
//  Function Name   :   FindMin
//  Description     :   It is used to find minimum of three numbers
//  Input           :   Int, Int, Int
//  Output          :   Int
//  Author          :   Rucha Hanumant Pawar
//  Date            :   8/12/2025
//  
//////////////////////////////////////////////////////////////////////////////////////////////////

class Logic
{
    int FindMin(int iNo1, int iNo2, int iNo3)
    {
        if((iNo1 < iNo2) && (iNo1 < iNo3))
        {
            return iNo1;
        }
        else if ((iNo2 < iNo1) && (iNo2 < iNo3))
        {
            return iNo2;
        }
        else
        {
            return iNo3;
        }
    } // End of FindMin
}

//////////////////////////////////////////////////////////////////////////////////////////////////
// 
//  Entry point function for the application
// 
//////////////////////////////////////////////////////////////////////////////////////////////////

class program17_4
{
    public static void main(String[] args) {
        int iValue1 = 0, iValue2 = 0, iValue3 = 0;
        int iRet = 0;

        Scanner scanner = new Scanner(System.in);
        Logic obj = new Logic();

        System.out.println("Enter first number : ");
        iValue1 = scanner.nextInt();

        System.out.println("Enter second number : ");
        iValue2 = scanner.nextInt();

        System.out.println("Enter second number : ");
        iValue3 = scanner.nextInt();

        if((iValue1 == iValue2) && (iValue2 == iValue3))
        {
            System.out.println("All are equal");
        }
        else
        {
            iRet = obj.FindMin(iValue1, iValue2, iValue3);
            System.out.println(iRet + " is minimum");
        }

        scanner.close();
    }
}

//////////////////////////////////////////////////////////////////////////////////////////////////
// 
//  Testcases handled successfully by the application
// 
//  Input   :   9   5    3      Output  :   3
//  Input   :   -5  12  -1      Output  :   -1
//  Input   :   0   7   4       Output  :   0
//  Input   :   40  40  40      Output  :   All are equal
// 
////////////////////////////////////////////////////////////////////////////////////////////////// 