#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n; cin >> n;
    vector <int> v;
    for(int i = 0; i < n; i++) {
        int x; cin >> x;
        v.push_back(x);
    }
    sort(v.begin(), v.end());
    int Q; cin >> Q;
    for(int i = 0; i < Q; i++) {
        int x; cin >> x;
        int index =  lower_bound(v.begin(), v.end(), x) - v.begin();
        if(x == v[index]) cout << "Yes ";
           else cout << "No ";
        cout << index + 1 << endl;
    }
    return 0;
}

