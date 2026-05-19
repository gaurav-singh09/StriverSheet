class Solution{
public:
    void swap(int &a,int &b){
        int temp=a;
        a=b;
        b=temp;
    }
    void reverse(int arr[], int n){
        int i=0;
        int j=n-1;
        while(i<j){
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
        return;    
    }
};
