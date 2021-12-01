#include <bits/stdc++.h>
#include <iostream>

using namespace std;

char Suggestion(int Host)
{
    if (Host <= pow(2, 24) - 2 && Host > pow(2, 16) - 2)
    {
        return 'A';
    }
    else if (Host <= pow(2, 16) - 2 && Host > pow(2, 8) - 2)
    {
        return 'B';
    }
    else if (Host <= pow(2, 8) - 2)
    {
        return 'C';
    }
}

int main()
{
    int HostNumber;

    cout << "Enter number of host" << endl;
    cin >> HostNumber;

    cout << "Suggested IP address Class is :" << Suggestion(HostNumber) << endl;

    return 0;
}