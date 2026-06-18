#include<iostream>
#include<vector>
using namespace std;

int largestElement(vector<int>& arr){
    int largest = arr[0];
    for(int i=1;i<arr.size();i++){
        if(arr[i]>largest){
            largest = arr[i];
        }
    }
    return largest;
} 

int main() {

    vector<int> arr = {1, 3, 5, 7, 9, 11, 13};
    cout<<largestElement(arr);
    
    return 0;
}