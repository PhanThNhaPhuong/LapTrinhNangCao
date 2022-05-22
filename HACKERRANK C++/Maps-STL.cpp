#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    map <string, int> m;
    int Q; cin >> Q;
    while(Q--) {
        int type; cin >> type;
        string name; cin >> name;
        if(type == 1) {
            int score; cin >> score;
            m[name] += score;
        } else if(type == 2) {
            m[name] = 0;
        } else cout << m[name] << "\n";
    }
    return 0;
}




