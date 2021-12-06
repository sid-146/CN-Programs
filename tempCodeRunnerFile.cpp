#include <bits/stdc++.h>
#include <iostream>

using namespace std;

string DottedDecimalToBinary(long int Decimal)
{
    string s = "";

    int Temp[8] = {0};

    int i = 0;

    while (Decimal > 0)
    {
        Temp[i] = Decimal % 2;
        Decimal /= 2;
        i++;
    }

    Reverse(Temp, Temp + 8);

    for (int i = 0; i < 8; i++)
    {
        s += std::to_string(Temp[i]);
    }

    return s;
}

int NumberOfOne(string s)
{
    int OneCount = count(s.begin(), s.end(), '1');

    return OneCount;
}

int NumberOfTwo(string s)
{
    int ZeroCount = count(s.begin(), s.end(), '0');

    return ZeroCount;
}

int main()
{
    string s;

    long int First, Second, Third, Fourth;

    cout << "Enter IP Address in dotted decimal notation" << endl;
    cout << "Enter First Decimal Octet: ";
    cin >> First;
    cout << "Enter Second Decimal Octet: ";
    cin >> Second;
    cout << "Enter Third Decimal Octet: ";
    cin >> Third;
    cout << "Enter Fourth Decimal Octet: ";
    cin >> Fourth;

    string SFirst = DottedDecimalToBinary(First);
    string SSecond = DottedDecimalToBinary(Second);
    string SThird = DottedDecimalToBinary(Third);
    string SFourth = DottedDecimalToBinary(Fourth);

    int One, Zero;

    if (First == 255)
    {
        if (Second == 255)
        {
            if (Third == 255)
            {
                One = NumberOfOne(SFourth);
                Zero = 8 - One;
            }
            else
            {
                One = NumberOfOne(SThird);
                Zero = 16 - One;
            }
        }
        else
        {
            One = NumberOfOne(SSecond);
            Zero = 24 - One;
        }
    }

    cout << "Number of Subnets are: " << pow(2, One) << endl;
    cout << "Number of hosts are: " << pow(2, Zero) << endl;

    return 0;
}