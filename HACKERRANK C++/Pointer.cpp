#include<cstdio>
#include<iostream>
using namespace std;

int abs(int a){
    return (a > 0 ? a : -a);
}

void update(int *a, int *b){
    *a = *a + *b;
    *b = abs(*a - 2 * *b);
}

int main(){
    int a, b;
    int *pa = &a, *pb = &b;
    cin >> a >> b;
    update(pa, pb);
    cout << a << "\n" << b;
    return 0;
}

