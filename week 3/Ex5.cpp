#include<iostream>
using namespace std;
int main(){
    int n, a[1005];
    cin >> n;
    for(int i = 0; i < n; i++) cin >> a[i];
    bool ok = 1;
    for(int i = 0; i < n; i++){
        if(a[i] != a[n-1-i])
            ok = 0;
        break;
    }
    if(ok == 1) cout << "Symmetric array.";
       else cout << "Asymmetric array.";
    return 0;
}

