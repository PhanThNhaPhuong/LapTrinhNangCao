#include<bits/stdc++.h>
using namespace std;
bool check1(string N){
    if(N.size() < 6 || N.size() > 15) return false;
       else return true;
}
bool check2(string N){
    if(N[0] >= '0' && N[0] <= '9') return false;
       else return true;
}
bool check3(string N){
    for(int i = 0; i < N.size(); i++){
        if((N[i] >= '0' && N[i] <= '9') || (N[i] >= 'a' && N[i] <= 'z') || (N[i] >= 'a' && N[i] <= 'z')) return true;
         else return false;
    }
}
int main(){
	string N;
	getline(cin, N);
	if(check1(N) == true && check2(N)== true && check3(N) == true) cout << "Valid username.";
	   else cout << "Invalid username.";
	return 0;
}
