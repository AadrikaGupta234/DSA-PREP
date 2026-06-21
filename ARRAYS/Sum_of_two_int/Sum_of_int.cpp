#include<iostream>
#include<vector>
using namespace std;

int getSum(int a, int b){
    while(b!=0){
        int carry = (a&b)<<1;
        a= (a^b);
        b = carry;
    }
    return a;
}
int main(){

    cout<<getSum(1,2)<<"\n";
    cout<<getSum(9,23)<<"\n";
    
    return 0;
}