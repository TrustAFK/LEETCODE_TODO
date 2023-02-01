#include <bits/stdc++.h>
using namespace std ;
int maxProfit(vector<int>& lol) {
    int min_val_1  =  INT_MAX ; 
        int profit_1 = 0 ; 
        int ans_1  = profit_1 ; 
        for(int i = 0 ; i< lol.size() ; i++){
            
            min_val_1  = min(min_val_1 , lol[i]);
            profit_1 = - min_val_1 + lol[i] ; 
            ans_1 = max(profit_1 , ans_1) ; 
 
         }
        int min_val = INT_MAX ; 
        int profit = 0 ;
        int ans = 0;
        int pekka = 0; 
        for(int i = 0  ; i<lol.size() ; i++){
            min_val = min(min_val , lol[i]);
            profit = - min_val + lol[i];
            // cout<<"at " <<lol[i]<<" profit "<<profit<<endl;
            ans = max(profit  , ans)  ;
            // cout<<"i am ans "<<ans<<endl;
            if(ans>0){
                pekka = pekka + ans ;
                cout<< "i am pekka "<<pekka<<endl;
                min_val = lol[i+1];
                // cout<<"changed min value to " << min_val ;
                ans = 0; 
            }
        }
        cout<<pekka << " " <<ans_1<<endl;
        return max(pekka , ans_1);
        
        
    }

int main(){
    cout<<"jai shree ram "<<endl;
    vector<int>lol = {6,1,3,2,4,7};
    cout<< maxProfit(lol);



return 0;
}