#include<iostream>
using namespace std;
int main(){
    int total, totallegs;
    cin >> total >> totallegs;
    bool flag = false;
    int numChicken;
    for(int numChicken = 0; numChicken <= total; numChicken++) 
       if(numChicken * 2 + (total - numChicken) * 4 == totallegs){
           cout << "chicken = " << numChicken << ", "
                << "dog = " << total - numChicken;
           flag = true;
           break;
       }
    if(flag == false) cout << "invalid";
    return 0;
}
