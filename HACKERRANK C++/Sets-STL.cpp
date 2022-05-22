#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    set<int> s;
    int Q, x, y;
    cin >> Q ;
    while(Q--) {
        cin >> y >> x;
        if(y == 1) s.insert(x);
        else if(y == 2) s.erase(x);
              else {
                  if(s.find(x) != s.end()) cout << "Yes" << endl;
                   else cout << "No" << endl;
              }
    }
    return 0;
}




