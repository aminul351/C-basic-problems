/*
You are given an array of n integers. You want to modify the array so that it is increasing, i.e.,
every element is at least as large as the previous element.

On each move, you may increase the value of any element by one. What is the minimum number of moves
required?

Input
The first input line contains an integer n: the size of the array. Then, the second line contains n
integers x1, x2, ... , xn : the contents of the array.

Output
Print the minimum number of moves.

Example:
5
3 2 5 1 7
5

*/

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "enter n : ";
    cin >> n;

    int arr[n];
    cout << "enter the arr : ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int moves = 0;
    for (int i = 1; i < n; i++)
    {

        // cout << "main array : " << arr[i] << " ";
        if (arr[i] < arr[i - 1])
        {
            moves += arr[i-1] - arr[i];
            // arr[i] = arr[i-1];  // Update arr[i] to maintain non-decreasing order
        }
        // cout << "sorted array : " << arr[i] << " ";
    }
    cout << "moves : " << moves;


    return 0;
}
