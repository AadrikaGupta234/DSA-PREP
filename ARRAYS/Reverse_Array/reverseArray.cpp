#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> arr = {1,3,7,5,35,76,8};

    int start = 0;
    int end = arr.size() - 1;

    while(start < end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }

    cout << "Reversed array: ";
    for(int x : arr){
        cout << x << " ";
    }

    return 0;
}