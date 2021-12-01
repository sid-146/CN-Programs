/**
 *
 * todo: OBJECTIVE = Bit Stuffing
 *
 * ! changes and addons to do in program:
 * todo:
 *
 * !
 *
 * ! Program to
 *
 * ? initialization dt. 17/09/2021
 * ? last updated on dt. 17/09/2021
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

/*
** program number 3: To write program that stuff a bit to binary data
Algorithm for Bit−Stuffing
1. Start
2. Initialize the array for transmitted stream with the special bit pattern 0111 1110 which indicates the beginning of the frame.
3. Get the bit stream to be transmitted in to the array.
4. Check for five consecutive ones and if they occur, stuff a bit 0
5. Display the data transmitted as it appears on the data line after appending 0111 1110 at the End.
6. For de−stuffing, copy the transmitted data to another array after detecting the stuffed bits.
7. Display the received bit stream.
8. Stop
*/

#include <bits/stdc++.h>
#include <iostream>
#include <string>

using namespace std;

int main()
{
    string Data;
    Data = "11111111 01111110 00111110";
    cout << "Enter the bit string (each byte seprated by space) " << Data << endl;

    // getline(cin, Data);

    string Flag = "11111111 01111110 00111110";

    int counter = 0;

    for (int i; i < Data.length(); ++i)
    {
        if (Data[i] == '1')
            ++counter;
        else if (Data[i] == '0')
            counter = 0;
        else
        {
            Data.erase(Data.begin() + i);
            --i;
        }
        if (counter == 5)
        {
            Data.insert(i + 1, "0");
            counter = 0;
        }
    }

    string OutputData = Flag + " " + Data + " " + Flag;

    cout << OutputData << endl;

    return 0;
}