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

char ClassFind(char Str[])
{
    char Octet[4];
    int Counter = 0;

    while (Str[Counter] != '.')
    {
        Octet[Counter] = Str[Counter];
        Counter++;
    }
    Counter--;

    int IP = 0;
    int j = 1;

    while (Counter >= 0)
    {
        IP = IP + (Str[Counter] - '0') * j;
        j = j * 10;
        Counter--;
    }

    if (IP >= 1 && IP <= 126)
        return 'A';

    else if (IP >= 128 && IP <= 191)
        return 'B';

    else if (IP >= 192 && IP <= 223)
        return 'C';

    else if (IP >= 224 && IP <= 239)
        return 'D';

    else
        return 'E';
}

void FindIDs(char Str[], char IPClass)
{
    char Network[12];
    char Host[12];

    for (int k = 0; k < 12; k++)
    {
        Network[k] = Host[k] = '\0';
    }

    if (IPClass == 'A')
    {
        int i = 0;
        int j = 0;

        while (Str[j] != '.')
        {
            Network[i++] = Str[j++];
        }
        i = 0;
        j++;

        while (Str[j] != '\0')
        {
            Host[i++] = Str[j++];
        }

        cout << "Network ID is " << Network << endl;
        cout << "Host ID is " << Host << endl;
    }

    else if (IPClass == 'B')
    {
        int i = 0;
        int j = 0;
        int DotCount = 0;

        while (DotCount < 2)
        {
            Network[i++] = Str[j++];
            if (Str[j] == '.')
                DotCount++;
        }
        i = 0;
        j++;

        while (Str[j] != '\0')
        {
            Host[i++] = Str[j++];
        }

        cout << "Network ID is " << Network << endl;
        cout << "Host ID is " << Host << endl;
    }

    else if (IPClass == 'C')
    {
        int i = 0;
        int j = 0;
        int DotCount = 0;

        while (DotCount < 3)
        {
            Network[i++] = Str[j++];
            if (Str[j] == '.')
            {
                DotCount++;
            }
        }

        i = 0;
        j++;

        while (Str[j] != '\0')
        {
            Host[i++] = Str[j++];
        }

        cout << "Network ID is " << Network << endl;
        cout << "Host ID is " << Host << endl;
    }
    else
    {
        cout << "In this, IP address is not divided into\nNetwork and Host address" << endl;
    }
}

int main()
{
    // string DecimalIP;
    // cout << "Enter Decimal IP" << endl;

    // getline(cin, DecimalIP);

    char DecimalIP[] = "19.226.12.11";

    char IPClass = ClassFind(DecimalIP);

    cout << "Given IP address belongs to " << IPClass << endl;
    FindIDs(DecimalIP, IPClass);

    return 0;
}