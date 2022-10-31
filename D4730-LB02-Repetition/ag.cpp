#include <bits/stdc++.h>
using namespace std;

int main() {

    int test;
    cin >> test;

    for (int t = 0; t < test; t++) {
        long long n;
        cin >> n;

        cout << "Case " << t+1 << ": ";

        long long sum = 1;
        for (int i = 0; i < n; i++ ) {
            cout << sum;
            sum += i+1;
            if (i != n-1) {
                cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}