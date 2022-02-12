//Q1).Adding Two Numbers
int addNumbers(float a, float b) {
    return floor(a+b);
}

//Q2).Sum Them All
int arraySum(int numbers_count, int* numbers) {
    int result = 0;
    
    for(int i=0; i<numbers_count; i++){
        result += numbers[i];
    }
    return result;
}

//Q3).Prime or Not? 
int isPrime(long n) {
    for (long k = 2; k <= n/2; k++){
        if (n%k == 0){
            return k;
        }
        else {
        continue;    
        }
    }
    return 1;

}

//Q4).Find the Factor

long pthFactor(long n, long p) {
    for(int i=1; i < sqrt(n); i++){
        if(n % i == 0 && --p == 0 ){
            return i;
        }        
    }

    for(int i = (int)sqrt(n); i >= 1; i--){
        if( n % i == 0 && --p == 0){
            return n/i;
        }
    }
    return 0;
}

