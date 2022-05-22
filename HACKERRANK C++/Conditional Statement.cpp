#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    string a[11] = {"Greater than 9", "one","two", "three", "four", "five", "six", "seven","eight", "nine", "ten"};
    cin >> n;
    if(n > 9) cout << a[0];
    else cout << a[n];
    return 0;
}

