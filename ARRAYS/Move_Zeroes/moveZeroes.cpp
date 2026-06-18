#include<iostream>
#include<vector>
using namespace std;

void moveZeroes(vector<int>& arr) {
    int j = 0;

    for(int i = 0; i < arr.size(); i++) {
        if(arr[i] != 0) {
            swap(arr[i], arr[j]);
            j++;
        }
    }
}

int main() {
    vector<int> arr = {1, 0, 0, 3, 9, 0, 13};
    moveZeroes(arr);

    for(int x : arr) {
        cout << x << " ";
    }
    
    return 0;
}