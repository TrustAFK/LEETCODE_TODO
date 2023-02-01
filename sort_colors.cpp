// in place sort using the same memory 
//  bubble sort, comb sort, selection sort, insertion sort, heapsort, and Shell sort

// Stable sorting algorithm
// preserve the orignal order of the array -> merge Sort, Timsort, Counting Sort, Insertion Sort, and Bubble Sort

// bubble sort 

#include <bits/stdc++.h>
#include <vector>
using namespace std;
void display (vector<int> lol){
    for (int i = 0; i < lol.size(); i++)
    {
        cout<<lol[i]<<" ";
    }
    
}

int main(){
   vector<int> lol;
   lol = {6,54,3,21} ; 

   for(int i = 0 ; i < lol.size() ; i++){
    for (int j = i; j < lol.size(); j++)
    {
        if(lol[i]>lol[j]){
            swap(lol[i] , lol[j]);
        }
    }
    
   }
   display(lol);
   cout<<"jai shree ram";

    return 0 ; 
}

