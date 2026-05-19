class Solution {
public:
    bool isArmstrong(int n) {
        int cnt=0;
        int digit=0;
        int temp=n;
        while(temp>0){
            digit++;
            temp/=10;
        }
        temp=n;
        while(n>0){
            cnt+=(int)pow(n%10,digit);
            n/=10;
        }
        if(cnt==temp) return true;
        else return false;
    }
};