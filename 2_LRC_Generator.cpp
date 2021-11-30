/**
 * 
 * todo: OBJECTIVE = Program to generate LRC for any character
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

string DecimalToBinary(int DecimalData)
{
    string StringData;
    while (DecimalData > 0)
    {
        if (DecimalData % 2 == 1)
        {
            StringData += '1';
        }
        else
        {
            StringData += '0';
        }
        DecimalData /= 2;
    }

    int Length = StringData.length();

    for (int i = 0; i < Length / 2; i++)
        swap(StringData[i], StringData[Length - i - 1]);

    return StringData;
}

int main()
{
    char ch1, ch2;
    cout << "Enter first character: ";
    cin >> ch1;
    cout << "Enter second character: ";
    cin >> ch2;

    string c1, c2;
    c1 = DecimalToBinary(int(ch1));
    c2 = DecimalToBinary(int(ch2));

    if (c1.length() < 8)
    {
        reverse(c1.begin(), c1.end());
        int x = (8 - c1.length());
        while (x--)
        {
            c1 += '0';
        }
        reverse(c1.begin(), c1.end());
    }

    if (c2.length() < 8)
    {
        reverse(c2.begin(), c2.end());
        int x = (8 - c2.length());
        while (x--)
        {
            c2 += '0';
        }
        reverse(c2.begin(), c2.end());
    }

    string lrc;

    for (int i = 0; i < 8; i++)
    {
        if (c1[i] == c2[i])
            lrc += '0';
        else
            lrc += '1';
    }

    cout << lrc << endl;

    return 0;
}