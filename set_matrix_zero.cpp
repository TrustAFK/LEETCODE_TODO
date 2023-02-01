#include <bits/stdc++.h>
using namespace std ;
 void setZeroes(vector<vector<int>>& lol) {
    cout<<"jai shree ram"<<endl;
    vector<vector<int>> saved ; 
    for (int i = 0; i < lol.size(); i++)
    {
     for (int j = 0; j < lol[i].size(); j++)
    {
        cout<<lol[i][j]<<" ";
        if(lol[i][j] == 0){
         saved[i][j] =    
        }
    }   
    cout<<endl;
    }
    

        
    }

int main (){
    cout<<"jai shree ram" ; 
    vector<vector<int>> lol {{0,1,2,0},{3,4,5,2},{1,3,1,5}};
    setZeroes(lol);

    
    return 0;
}