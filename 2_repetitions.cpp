/*
You are given a DNA sequence: a string consisting of characters A, C, G, and T. Your task is to find
the longest repetition in the sequence. This is a maximum-length substring containing only one type
of character.

Input
The only input line contains a string of n characters.

Output
Print one integer: the length of the longest repetition.

Example
ATTCGGGA --> 3

*/



#include <bits/stdc++.h>
using namespace std;

int main()
{


    string str = "ATTCAAAAAA";

    int max_length = 1;
    int current_length = 1;

    for (int i = 1; i < str.size(); i++)
    {
        if (str[i]  ==  str[i-1])
        {
            current_length++;
        }
        else 
        {
            max_length = max(max_length, current_length);
            current_length = 1;
        }
    }

    max_length = max(max_length, current_length);
    cout << max_length;

   
    return 0;
}

