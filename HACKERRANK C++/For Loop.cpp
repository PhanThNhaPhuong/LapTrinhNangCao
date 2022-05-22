#include <iostream>
#include <string.h>

using namespace std;
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int a, b;
    cin >> a >> b;
    string str[12]={"even","odd","one","two", "three", "four", "five", "six", "seven","eight", "nine", "ten"};
    for(int n = a; n <= b; n++){
        if(n <= 9) cout << str[n+1] << endl;
        else if(n % 2 == 0) cout << str[0] << endl;
             else cout << str[1] << endl;
    }
    return 0;
}
