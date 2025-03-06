/*
Your task is to find the missing number.
Example
5
2 3 1 5
4
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n, total_sum, missing_num;
    cout << "enter n : ";
    cin >> n;

    total_sum = (n * (n + 1)) / 2;

    vector<int> arr(n - 1);
    cout << "enter " << n - 1 << "array : ";

    int given_num_sum = 0;
    for (int i = 0; i < n - 1; i++)
    {
        cin >> arr[i];
        given_num_sum += arr[i];
    }

    missing_num = total_sum - given_num_sum;
    cout << missing_num;

    return 0;
}
