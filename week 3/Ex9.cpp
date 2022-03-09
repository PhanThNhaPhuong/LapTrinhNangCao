#include<bits/stdc++.h>
using namespace std;
int main(){
    string text;
    getline(cin,text);
    int countStartSpaces = 0;
    while(text[countStartSpaces] == ' '){
        cout << text[countStartSpaces];
        countStartSpaces++;
        
    }
    for(int i=countStartSpaces; i< text.size(); i++){
        if(text[i] != ' ') cout << text[i];
           else{
               cout << " ";
               while(text[i+1] == ' ') i++;
           }
    }
    return 0;
}
