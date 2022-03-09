#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    float score[100];
    for(int i = 0; i < n; i++) cin >> score[i];
    for(int i = 0; i < n - 1; i++){
        for(int j = i + 1; j < n; j++){
            if(score[i] < score[j]){
                double temp;
                temp = score[i];
                score[i] = score[j];
                score[j] = temp;
            }
        }
    }
    for(int i = 0; i < n; i++) cout << fixed << setprecision(2) << score[i] << " ";
    return 0;
}
