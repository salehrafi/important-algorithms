#include<bits/stdc++.h>
using namespace std;

int test(int n){
   // printing prime number from n;
   
    for(int i=1;i<=n;i++){
         bool chk = true;
        for(int j=2; j*j<=i;j++){
            if(i%j==0){
                chk = false;
                break;
            }
        }if (chk)
        {
            cout << i << endl;
        }
    }
}

int main(){
    int n;
    cin >> n;
    test(n);
    return 0;
}
