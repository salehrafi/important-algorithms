#include<bits/stdc++.h>
using namespace std;

signed main()
{
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++) cin >> arr[i];


    for(int j=1; j<n; j++){
        int loc = j;
        for(int i=loc; i>=1; i--){
            if(arr[i]<arr[i-1]){
                swap(arr[i],arr[i-1]);
                loc-=i;
            }
            else{
                break;
            }
        }
    }
    for(int i=0; i<n; i++) cout << arr[i] << " ";
}
