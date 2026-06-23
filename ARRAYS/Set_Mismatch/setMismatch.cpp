#include<iostream>
#include<vector>
using namespace std;

vector<int> findErrorNums(vector<int>& nums) {
        int n = nums.size();
        int duplicate = 0;
        int missing = 0;

        vector<int> count(n+1,0);
        vector<int> arr(2);

        for(int num:nums){
            count[num]++;
        }

        for(int i=0;i<n+1;i++){
            if(count[i]==0){
                missing = i;
            }

            else if(count[i]==2){
                duplicate = i;
            }

            arr[0] = duplicate;
            arr[1] = missing;
        }

        return arr;
    }

int main(){

    vector<int> arr = {1,2,3,4,4};

    vector<int> arr1 = findErrorNums(arr);
    for (int x: arr1){
        cout<< x <<" ";
    } 
    cout<<"\n";



    return 0;
}