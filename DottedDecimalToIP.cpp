/**
 * 
 * todo: OBJECTIVE = To Convert Dotted Decimal Notation IP to Binary Notation IP
 * 
 * ! changes and addons to do in program:
 * todo: 
 * 
 * ! 
 * 
 * ! Program to 
 * 
 * ? initialization dt. 17/09/2021
 * ? last updated on dt. 19/09/2021
 * 
 * ? this program is made by SUDHANWA KAVEESHWAR....
 * 
 * ! **************** PROBLEMS ****************** 
 * ! 
 * 
 * * *************** OTHERS *******************
 * * 
 * 
*/

#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int DottedDecimalToBinary(long long int Decimal)
{
    int BArr[8] = {0};
    int i = 0;

    while (Decimal > 0)
    {
        BArr[i] = Decimal % 2;
        Decimal /= 2;
        i++;
    }

    int n = sizeof(BArr) / sizeof(BArr[0]);
    reverse(BArr, BArr + n);

    for (int i = 0; i < 8; i++)
    {
        cout << BArr[i];
    }
    cout << " ";
}

void ConvertIP(long int First, long int Second, long int Third, long int Fourth)
{
    cout << "IP Address in Dotted Decimal Notation: " << First << "." << Second << "." << Third << "." << Fourth;
    if ((0 <= First && First <= 255) && (0 <= Second && Second <= 255) && (0 <= Third && Third <= 255) && (0 <= Fourth && Fourth <= 255))
    {
        cout << "\n IP Address in Binary Notation: ";
        DottedDecimalToBinary(First);
        DottedDecimalToBinary(Second);
        DottedDecimalToBinary(Third);
        DottedDecimalToBinary(Fourth);
    }
    else
    {
        cout << "\n Invalid Address ";
    }
}

int main()
{
    long int first, second, third, fourth;
    cout << "Enter the IP Address in Dotted Decimal Notation: " << endl;
    cout << " Enter First Octet: ";
    cin >> first;
    cout << "Enter Second Octet: ";
    cin >> second;
    cout << "Enter Third Octet: ";
    cin >> third;
    cout << "Enter Fourth Octet: ";
    cin >> fourth;

    ConvertIP(first, second, third, fourth);

    return 0;
}