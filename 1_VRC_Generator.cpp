/**
 *
 * todo: OBJECTIVE = To generate VRC for given char
 *
 * ! changes and addons to do in program:
 * todo:
 *
 * !
 *
 * ! Program to
 *
 * ? initialization dt. 23/08/2021
 * ? last updated on dt. 23/08/2021
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
            StringData += '1';
        else
            StringData += '0';

        DecimalData /= 2;
    }

    int Length = StringData.length();

    for (int i = 0; i < Length / 2; ++i)
    {
        swap(StringData[i], StringData[Length - i - 1]);
    }

    return StringData;
}

int main()
{
    cout << "Enter char";
    char c;
    cin >> c;

    string s = DecimalToBinary(int(c));

    int count = 0;

    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '1')
            count++;
    }
    if (count % 2 == 0)
        s += '0';
    else
        s += '1';

    cout << "VRC of " << c << " is: " << s << endl;

    return 0;
}