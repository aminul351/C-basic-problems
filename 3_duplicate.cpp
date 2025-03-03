#include <bits/stdc++.h>
using namespace std;

int main()
{

    int arr[5] = {3, 2, 5, 2, 3};
    vector<int> duplicate;

    for (int i = 0; i < 5; i++)
    {
        for (int j = i + 1; j < 5; j++)
        {
            if (arr[i] == arr[j])
            {
                duplicate.push_back(arr[i]);
            
            }
        }
    }

    cout << "duplicates : ";
    for (int i = 0; i < duplicate.size(); i++){
        cout << duplicate[i];
    }

    return 0;
}