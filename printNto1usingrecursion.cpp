class Solution {
  public:
    void Numbers(int n){
        if(n==0)return;
        cout<<n<<'\n';
        n--;
        Numbers(n);
    }
    
    void printNumbers(int n) {
        // Your code goes here
        
        Numbers(n);

    }
};