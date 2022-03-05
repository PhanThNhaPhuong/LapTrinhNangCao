#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, k, a[10000];
    //ios_base::sync_with_stdio(0); cin.tie(0);
    cin >> n >> k;
    for (int i = 0; i < n; i++) cin >> a[i];
    sort(a, a + n);
    cout << abs(a[k - 1] - a[n - k]);
    return 0;
}
