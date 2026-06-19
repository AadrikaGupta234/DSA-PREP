#include<iostream>
#include<vector>
using namespace std;

    int removeDuplicates(vector<int>& arr) {

        if(arr.empty()) return 0;

        int j = 0;
        for(int i=1;i<arr.size();i++){
            if(arr[i] != arr[j]){
                j++;
                arr[j] = arr[i];

            }
            if(arr[i] == arr[i-1]){
                arr[i] = '_';
            }
        }
        return j+1;   
    }
 int main(){
    vector<int> arr = {1,1,3,4,6,8,8,9};
    int k = removeDuplicates(arr);
    
    cout<<k<<endl;

    for(int i=0;i<k;i++){
        cout<<arr[i]<<" ";
    }
    for(int i=0;i<k;i++){
        cout<<'_';
    }
    cout<<"\n";
    return 0;
 }