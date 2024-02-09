/*
    Linear Searching algorithm..
    Finding the maximum and minimum element in a array
*/

#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    //searching large element in array

    int large  = arr[0];
    int small = arr[0];

    for (int i = 1; i < n; i++) {
        if (large < arr[i]) {
            large = arr[i];
        } else if (small > arr[i]) {
            small = arr[i];
        }
    }
    cout << "Large element is: " << large << endl;
    cout << "Small element is: " << small << endl;
    
    return 0;
}
