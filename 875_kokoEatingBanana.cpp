#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int n= piles.size();
        int max_banana =  *max_element(piles.begin(), piles.end());
        int sum=0;
        sort(piles.begin(),piles.end());
        for (int num : piles) {
            sum += num;
        }


        if(n==h) {
            return max_banana;
        }
        
        if(sum%h==0){
            for(auto i:piles){
                
            }
        }
            
        

        
    }
};

int main(){

    Solution sol;
    vector<int> piles = {30,11,23,4,20};
    int h= 6;

    cout<<sol.minEatingSpeed(piles,h);

    return 0;
}