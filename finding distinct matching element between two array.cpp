#include<bits/stdc++.h>
#define ll long long int
#define f0r(i,n) for (ll i=0;i<n;++i)
#define f1r(i,n) for(ll i=1;i<=n;++i)
#define pb push_back
#define arrsrt(a,n) sort(a,a+n)
#define vsrt(v) sort(v.begin(), v.end())
#define ucase(str) transform(str.begin(), str.end(), str.begin(), ::toupper)
#define fix ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define debug(x) cout << #x << ":" << endl;
using namespace std;

void test(){
	int n;
	cin >> n;
	int arr[n],arr2[n];

	for (int i = 0; i < n; ++i)
	{
		cin >> arr[i];
	}

	for (int i = 0; i < n; ++i)
	{
		cin >> arr2[i];
	}

	// swapping algo
	for (int i = 0; i < n; ++i)
	{
		for (int j = 1; j <= n; ++j)
		{
			if(arr[j-1]>arr[j]){
				int temp;
				temp = arr[j-1];
				arr[j-1] = arr[j];
				arr[j] = temp;
			}
			if (arr2[j-1]>arr2[j])
			{
				int temp;
				temp = arr2[j-1];
				arr2[j-1] = arr2[j];
				arr2[j] = temp;
			}
		}
	}
	
	int arr1[n], t = 0;
    arr1[t++] = arr[0];

    int arr22[n], t2 = 0;
    arr22[t2++] = arr2[0];

    for (int i = 1; i < n; ++i)
    {
        if (arr[i] != arr[i - 1])
        {
            arr1[t++] = arr[i];
        }
        if (arr2[i]!=arr2[i-1])
        {
        	arr22[t2++]  = arr2[i];
        }
    }
    int cnt=0;
    cout << "Matching elements: ";
    for (int i = 0; i < t; ++i)
    {
    	for (int j = 0; j < t2; ++j)
    	{
    		if(arr1[i] == arr22[j]){
    			cnt++;
    			cout << arr1[i] << " ";
    		}
    	}
    }

    cout << "\nCount: " << cnt << endl;

}
int main() {
	fix;
	int n=1;
	// cin >> n;
	while(n--){
		// solve();
		test();
	}
	return 0;
}
