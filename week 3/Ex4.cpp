#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	double a[1005],k;
	cin >> n;
	for(int i = 1; i <= n; i++) cin >> a[i];
	cin >> k;
	if(k < a[1]) {
		a[0] = k;
		for(int i =0; i<=n; i++)  cout << fixed << setprecision(2) << a[i] << " ";
	} else if(k > a[n]) {
		a[n+1] = k;
		for(int i = 1; i <= n+1; i++)  cout << fixed << setprecision(2) << a[i] << " ";
	} else {
		for(int i = 1; i <= n; i++) {
			if(a[i] < k && a[i+1] > k){
				for(int j = n; j >= i+1; j--){
					a[j+1]=a[j];
				}
				a[i+1] =k;
			}
		}
		for(int i = 1; i <= n+1; i++) cout << fixed << setprecision(2) << a[i] << " ";
	}
}
