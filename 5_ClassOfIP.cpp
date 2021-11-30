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
 * ? initialization dt. 18/09/2021
 * ? last updated on dt. 18/09/2021
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

int main()
{
    int Octat[4];

    for (int Counter = 0; Counter < 4; Counter++)
    {
        cout << "Enter " << Counter + 1 << " Octat" << endl;
        cin >> Octat[Counter];
    }

    int First = Octat[0];

    if (First >= 0 && First <= 127)
        cout << "IP Address belongs to 'A' class" << endl;
    else if (First >= 128 && First <= 191)
        cout << "IP Address belongs to 'B' class" << endl;
    else if (First >= 192 && First <= 223)
        cout << "IP Address belongs to 'C' class" << endl;
    else if (First >= 224 && First <= 239)
        cout << "IP Address belongs to 'D' class" << endl;
    else if (First >= 240 && First <= 255)
        cout << "IP Address belongs to 'E' class" << endl;
    else
        cout << "IP Address does not belongs to any class" << endl;

    return 0;
}