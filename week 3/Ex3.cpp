#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a[1105];
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < n -1; i++){
        if(a[i]==a[i+1]) continue;
        else cout << a[i] << " ";
    }
    cout << a[n-1];
    return 0;
}
