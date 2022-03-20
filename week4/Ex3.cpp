void printArrow(int n, bool left){
    if(left == 1){
       for(int i = n; i >= 1; i--){
           for(int j = i - 1; j>=1 ; j--) cout<< " ";
           for(int k = 1; k <= i; k++) cout <<"*";
           cout << endl;
       }
       for(int i = 2; i <= n; i++){
           for(int j = 1; j <= i -1; j++) cout << " ";
           for(int k = 1; k <= i; k++) cout <<"*";
           cout << endl;
       }
    }
    if(left == 0){
        for(int i = n; i >= 1; i--){
           for(int j = n-i; j>=1 ; j--) cout<< "  ";
           for(int k = 1; k <= i; k++) cout <<"*";
           cout << endl;
       }
       for(int i = 2; i <= n; i++){
           for(int j = 1;j <= n-i; j++) cout << "  ";
           for(int k = 1; k <= i; k++) cout <<"*";
           cout << endl;
       }
    }
}
