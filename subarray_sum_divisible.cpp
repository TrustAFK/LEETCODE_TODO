#include <bits/stdc++.h>
using namespace std ; 
int subarraysDivByK(vector<int>& lol, int k) {
        int count = 0 ; 
        int ans = 0;
        for(int i = 0 ; i<lol.size() ; i++){
            cout<<"i am loop "<<i <<endl;
            if(lol[i]%k==0){
                cout<<lol[i]<<endl;

                count++;
            }
           ans =lol[i];
            for(int j = i+1 ; j<lol.size() ; j++){
                
                ans = ans + lol[j];
                cout<<ans<<endl;
                
               if(ans%k==0){
                // cout<<ans<<endl;
                // cout<<i <<" "<<j<<endl;
                   count++;
               }
               
            
        }   
        ans = 0 ; 
        }
        return count ;
 
    }
int main (){
    vector<int>lol = {-1,2,9} ; 
    cout<<subarraysDivByK(lol , 2 );

}