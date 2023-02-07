#include<bits/stdc++.h>
using namespace std ;
int flatlandSpaceStations(int n, vector<int> c) {
    vector<int> lmao ; 
    for(int i = 0 ; i <n ; i++){
        // cout<<"running the loop "<<i<<endl ; 
    int lol = abs(i-c[0]);

     for(int j = 1 ; j < c.size() ; j++){
        
        int temp =  abs(i - c[j]);
     
        // cout<<"i am temp "<<temp<<endl;
        // cout<<"i am the lol " <<lol<<endl;
      
        lol = min(lol , temp  );
        // cout<<"distance from space station "<<i<<" is "<<lol<<endl;
    }   
    lmao.push_back(lol);
    // cout<<"pushing back " <<lol<<endl; 
    }
    int max = INT_MIN  ; 
    for(int i = 0 ; i<lmao.size() ; i++){
        if(max<lmao[i]){
            max = lmao[i];
        }
    }
    for(int i = 0 ; i<lmao.size() ; i++){
    //    cout<<lmao[i]<<endl;
    }
    
    return max;
    
    


}

int main(){
    vector<int> ans ={93 ,41, 91, 61, 30 ,6 ,25 ,90, 97 };
 int lol = flatlandSpaceStations(100 , ans );
 cout<<lol<<endl;
}


