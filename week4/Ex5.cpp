bool isPrime(int number){
    bool checkprime = true;
    if(number <= 1) checkprime = false;
    if(number == 2) checkprime = true;
    if(number > 2) {
        for(int i = 2; i <= sqrt(number); i++) {
            if(number % i == 0) checkprime = 0;
            break;
        }
    }
    return checkprime;
}
