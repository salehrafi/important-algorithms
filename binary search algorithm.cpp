#include<bits/stdc++.h>
using namespace std;

void test() {

	int n;
	cin >> n;
	int arr[n];
	for (int i = 0; i < n; ++i)
	{
		cin >> arr[i];
	}

	int low=0,high=n-1;
	int mid=(low+high)/2;

	int key;
	cin >> key;

	int step=0;

	while(high>=low){
		if(arr[mid] == key){
			step++;
			cout << "Found in " << step << " step\n";
			break;
		}else if(arr[mid] < key){
			low = mid+1;
			mid = (high+low)/2;
			step++;
		}else{
			high = mid-1;
			mid = (high+low)/2;
			step++;
		}
	}

	if(high<low){
			cout << "Not found!" << "step " << step << "\n";
		}

}
int main() {
	fix;
	test();
	return 0;
}
