#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int a;
    long b;
    char c;
    float d;
    double e;
    cin >> a >> b >> c >> d >> e;
    cout << a << '\n' << b << '\n' << c << '\n';
    cout << fixed <<  setprecision(3) << d <<'\n';
    cout << fixed << setprecision(9) << e ;
    return 0;
}

