#include <bits/stdc++.h>
using namespace std;

int bitCounter(int integer)
{
    int counter =0 ;
    for (counter; integer > 0; counter++)
    {
        integer &= (integer - 1);
        // cout << "integer: " << integer << endl;
    }
    // cout << "input: " << input << " counter: " << counter << endl;
    return counter;
}

int main()
{
    int test;
    cin >> test;

    for (int t = 0; t < test; t++)
    {
        int n;
        cin >> n;

        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        long long combinationCount = 0, validCombination = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                combinationCount++;
                // cout << validCombination << endl;
                int onBits = bitCounter(arr[i] ^ arr[j]);
                if (onBits >= 3)
                {
                    // cout << "added pair "  << " " << (arr[i] ^ arr[j])  << " " << onBits << endl;
                    validCombination++;
                }
                // cout << "output: " << arr[i] << " " << arr[j] << " " << (arr[i] ^ arr[j]) << " " << bitCounter(arr[i] ^ arr[j]) << endl;
                // cout << "combination: " << validCombination << endl;
            }   
        }

        cout << "Case #" << t + 1 << ": " << validCombination << " " << combinationCount - validCombination << endl;
    }

    return 0;
}