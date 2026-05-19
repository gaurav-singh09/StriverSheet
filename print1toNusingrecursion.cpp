class Solution {
  public:
    void Numbers(int n,int digit){
        if(digit>n) return;
        cout<<digit<<'\n';
        digit++;
        Numbers(n,digit);
    }
    
    void printNumbers(int n) {
        // Your code goes here
        
        Numbers(n,1);

    }
};