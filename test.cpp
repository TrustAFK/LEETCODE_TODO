#include<bits/stdc++.h>
using namespace std ;

int main(){
    vector<string>ans ; 
    vector<string>lol;
    lol = {".......", "...O...", "....O..", ".......", "OO.....", "OO....."} ; 
string zeroline  ;

for(int j  = 0 ; j<lol[0].size() ;j++){
        zeroline.append("O");
    }
    cout<<zeroline<<endl;
for(int i = 0 ; i<lol.size() ; i++ ){
    ans.push_back(zeroline);
    // cout<<"jai shree ram";
    
}
for(int i = 0 ; i <lol.size() ; i++ ){
    cout<<ans[i]<<endl;
    
}
}


