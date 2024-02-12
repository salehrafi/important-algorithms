#include <bits/stdc++.h>
#define ll long long
#define debug(x) cout << #x << ":" << endl;
#define fix ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;

void permutation(string data, int n) {
    if (n==1) {
        cout << data << endl;
    } else {
        for (int i=0;i<n;++i) {
            permutation(data, n-1);
            if (n%2==0) {
                swap(data[0], data[n-1]);
            } else {
                swap(data[i], data[n-1]);
            }
        }
    }
}

int main() {
    fix;
    string str;
    cin >> str;
    permutation(str, str.size());
    return 0;
}
