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

int BinaryToDecimal(string Add)
{
    int Decimal = 0;
    int Base = 0;
    int Lenght = Add.length() - 1;

    while (Lenght >= 0)
    {
        if (Add[Lenght] == '1')
            Decimal += pow(2, Base);

        Base++;
        Lenght--;
    }
    return Decimal;
}

int main()
{

    string First, Second, Third, Fourth;

    cout << "Enter First decimal bit of IP" << endl;
    getline(cin, First);

    cout << "Enter Second decimal bit of IP" << endl;
    getline(cin, Second);

    cout << "Enter Third decimal bit of IP" << endl;
    getline(cin, Third);

    cout << "Enter Fourth decimal bit of IP" << endl;
    getline(cin, Fourth);

    if (First.length() == 8 && Second.length() == 8 && Third.length() == 8 && Fourth.length() == 8)
    {
        int DecFirst = BinaryToDecimal(First);
        int DecSecond = BinaryToDecimal(Second);
        int DecThird = BinaryToDecimal(Third);
        int DecFourth = BinaryToDecimal(Fourth);

        cout << DecFirst << "." << DecSecond << "." << DecThird << "." << DecFourth << endl;
    }
    else
        cout << "Invalid IP Address" << endl;

    return 0;
}