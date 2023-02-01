#include<bits/stdc++.h>
using namespace std;

// remove the duplicates //
// using the inplace sorting 
void display (vector<int> lol){
    for (int i = 0; i < lol.size(); i++)
    {
        cout<<lol[i]<<" ";
    }
    
}

int main(){
// vector <int> lol {1 ,x1,x1,2 ,x2,3,54 , x54 , 88a ,x88b , x88c  };
vector <int> lol {1 ,1 , 1 , 2 ,2 , 3 , 54 , 54 , 88 ,88 , 88  };
display(lol);

cout<<endl;

cout<<"jai shree ram "<<endl;

// for (int j = 0; j < lol.size(); j++)
// {
// for (int  i = j; i < lol.size()-1; i++)
// {
//     if(lol[i]!=lol[i+1]){
//         cout<<lol[i] <<" "<< lol[i+1]<<endl ; 
//         swap(lol[i] , lol[i+1]);

//     }


// }
// }
int sorted_index = 1 ; 
for(int i = 0 ; i<lol.size()-1 ; i++){
    if(lol[i]!=lol[i+1]){
        lol[sorted_index] = lol[i+1];
        sorted_index++;
    }
}

cout<<endl;
display(lol);

    return 0 ; 
}