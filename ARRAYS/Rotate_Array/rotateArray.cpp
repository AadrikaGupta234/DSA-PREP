#include<iostream>
#include<vector>
using namespace std;



int main(){
    
    vector<int> arr = {1,3,7,5,35,76,8}; 
    int d;
    cout<<"Enter no. of rotations :";
    cin>>d;
    d = d % (arr.size());

    for(int i=d;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }

    for(int i=0;i<d;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    return 0;
}




