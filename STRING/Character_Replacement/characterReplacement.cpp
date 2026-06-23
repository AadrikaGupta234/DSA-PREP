#include<iostream>
#include<vector>
#include<string>
using namespace std;

class Solution{
public:
int characterReplacement(string s, int k) {
        
        vector<int> counts(26,0);
        int l = 0, longest = 0 , max_count = 0;

        for(int i = 0;i<s.size();i++){
            counts[s[i] - 'A']++;

            max_count = max(max_count,counts[s[i]-'A']);

        while((i-l+1)-max_count > k){
            counts[s[l] - 'A']--;
            l++;
            }
        longest = max(longest,i-l+1);
        }
        return longest;
    }
};



    int main() {
    Solution sol;
    cout << sol.characterReplacement("AABABBA", 1) << endl;
    return 0;
}