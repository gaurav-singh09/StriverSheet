bool isPrime(int n){
    if(n<=1)return false;

    for(int i=2;i<n;i++){
        if(n%i==0) return false;

    }
    return true;
}
//above code was brute force approach 
//Time Complexity O(N)

// optimized code for this ?
// with Time Complexity O(square root of n)

bool isPrime(int n){
    if(n<=1) return false;
    for(int i=2;i*i<=n;i++){
        if(n%i==0) return false;
    }
    return true;
}
