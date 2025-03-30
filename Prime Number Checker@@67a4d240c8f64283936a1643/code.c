int isPrime(int t) {
    if (t <= 1) { 
        return 0;
    }
    for (int i = 2; i <= t / 2; i++) {
        if (t % i == 0) {
            return 0; 
        }
    }
    return 1; 
}