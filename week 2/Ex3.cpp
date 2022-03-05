#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int lowerBound, upperBound;
    cin >> lowerBound >> upperBound;
    int first = sqrt(lowerBound), last = sqrt(upperBound);
    if(first * first == lowerBound)
           for(int i = first; i <= last; i++) cout << i * i << " ";
       else for(int i = first + 1; i <= last; i++) cout << i * i << " ";
    return 0;
}
