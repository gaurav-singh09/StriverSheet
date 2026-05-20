#include <iostream>
#include <vector>
using namespace std;

int main() {

    vector<int> arr = {1,2,3};

    int n = arr.size();

    // starting index
    for(int i = 0; i < n; i++) {

        // ending index
        for(int j = i; j < n; j++) {

            // print subarray
            for(int k = i; k <= j; k++) {
                cout << arr[k] << " ";
            }

            cout << endl;
        }
    }

    return 0;
}