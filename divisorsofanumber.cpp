class Solution {
public:
    vector<int> divisors(int n) {
        vector<int>ans;
        for(int i=1;i<=n;i++){
            if(n%i==0) ans.push_back(i);
            
        }
    }
};
//but here the time complexity is O(n) but if we divide this by 2 and then compare then also time complexity will be O(n/2+1) that is also equal to O(n)
//more optimized code will be 
//optimized code is also same as we reduced it for half search O(root n)

class Solution {
public:
    vector<int> divisors(int n) {
        vector<int>ans;
        for(int i=0;i*i<=n;i++){
            if(n%i==0){
                ans.push_back(i);
                if(i!=n/i) ans.push_back(n/i);
            }
        }
            
        }
    }
};