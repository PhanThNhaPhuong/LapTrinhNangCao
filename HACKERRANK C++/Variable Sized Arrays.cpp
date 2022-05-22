#include<iostream>
using namespace std;
int main(){
    int n, q;
    cin >> n >> q;
    int **p = new int*[n];
    for(int i = 0; i <n; i++) {
        int k;
        cin >> k;
        p[i]= new int[k];
        for(int j = 0; j < k; j++) cin >> p[i][j];
    }
    for(int i = 0; i < q; i++){
        int a, b;
        cin >> a >> b ;
        cout << p[a][b] << endl;
    }
    return 0;
}
