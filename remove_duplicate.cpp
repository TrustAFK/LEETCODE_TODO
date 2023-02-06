#include <bits/stdc++.h>
using namespace std ; 

 vector<int> findDuplicates(vector<int>& nums){
    // sorting will make nlogn complexity
    // n*n 2 for loop

    unordered_map<int , int >lmao ; 

    vector<int>lol;
        
        for (int i = 0; i < nums.size(); i++)
        {
            lmao[nums[i]]++;
        }

        for(auto i : lmao){
            if( i.second>1){
                lol.push_back(i.first);

            }
        }
        return lol;

}

int main (){
    vector<int> lmao {4,3,2,7,8,2,3,1};
    findDuplicates(lmao);


}