#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    vector<int> stairs;
    for (int i = 0; i < n ; i++ ) {
        int buffer;
        cin >> buffer;
        stairs.push_back(buffer);
    }
    stairs.push_back(-1);

    vector<int> stairsCount;
    for(int i = 0; i < stairs.size()-1; i++) {
        if(stairs[i] >= stairs[i+1]) {
            stairsCount.push_back(stairs[i]);
        }
    }

    for(int i = 0; i < stairsCount.size(); i++) {
        cout << stairsCount[i];
        if (i != stairsCount.size() - 1) {
            cout << " ";
        }
    }
    cout << endl;


    return 0;
}