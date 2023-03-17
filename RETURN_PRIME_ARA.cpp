int isPrime(int n){
    if(n<=1) return 0;
    for(int i = 2; i <= sqrt(n); i++){
        if(n%i == 0) return 0;
    }
    return 1;
}

int *Prime(int a, int b, int &returnSize){
    int *result = new int[b - a + 1];
    int size = 0;
    for(int i = a; i <= b; i++){
        if(isPrime(i)){
            result[size++] = i;  
        }
    }
    returnSize = size;
    return result;
