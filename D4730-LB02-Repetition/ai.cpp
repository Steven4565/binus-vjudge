#include <bits/stdc++.h>
using namespace std;

int main() {
    int test;
    cin >> test;
    
    for ( int t = 0; t < test; t++) {
        int n;
        cin >> n;

        vector<int> arr;
        for(int i = 0; i < n; i++) {
            int buffer;
            cin >> buffer;
            arr.push_back(buffer);
        }

        long long leftSum = 0;
        long long rightSum = accumulate(arr.begin(), arr.end(), 0);

        bool answerFound = false;
        for(int i = 0; i < n-1; i++) {
            leftSum += arr[i];
            rightSum -= arr[i];
            
            // cout << leftSum << " " << rightSum << endl;

            if (leftSum == rightSum) {
                answerFound = true;
                break;
            }
        }

        cout << "Case #" << t+1 << ": ";
        if (answerFound) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }

    return 0;
}