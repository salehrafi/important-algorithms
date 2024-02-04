#include<bits/stdc++.h>
using namespace std;

void test(){
    // prime number checking 

    int n;
    cin >> n;
    bool chk = true;
    for(int i=2;i<n;i++){
        if(n%i==0){
            chk = false; break;
        }
    }
    if(chk ? cout << "prime\n" : cout << "not prime\n");
}
int main(){
    int t;
    cin >> t;
    while(t--){
        test();
    }
}
