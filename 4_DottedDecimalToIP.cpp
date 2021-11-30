/**
 *
 * todo: OBJECTIVE =
 *
 * ! changes and addons to do in program:
 * todo:
 *
 * !
 *
 * ! Program to
 *
 * ? initialization dt.
 * ? last updated on dt.
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

void DecimalToBinary(int BinArr[][8], int Row)
{
    int Num = BinArr[Row][0];

    int Counter = 7;

    while (Counter >= 0)
    {
        BinArr[Row][Counter] = Num % 2;
        Num /= 2;

        Counter--;
    }
}

int main()
{
    int Binary[4][8];

    cout << "Enter IP Address in Dotted Decimal Notation" << endl
         << "Enter First Octate" << endl;

    // Binary[0][0] = ;
    // Binary[1][0] = ;
    // Binary[2][0] = ;
    // Binary[3][0] = ;
    cin >> Binary[0][0];
    cout << "Enter Second Octet" << endl;
    cin >> Binary[1][0];
    cout << "Enter Third Octet" << endl;
    cin >> Binary[2][0];
    cout << "Enter Fourth Octet" << endl;
    cin >> Binary[3][0];

    for (int Row = 0; Row < 4; Row++)
    {
        DecimalToBinary(Binary, Row);
    }

    cout << "Binary Notation to Dotted Decimal Noatation of Given IP is:" << endl;

    for (int Row = 0; Row < 4; Row++)
    {
        for (int Column = 0; Column < 8; Column++)
        {
            cout << Binary[Row][Column];
        }
        cout << " ";
    }

    return 0;
}