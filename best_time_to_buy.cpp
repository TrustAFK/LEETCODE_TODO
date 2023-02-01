#include <bits/stdc++.h>
using namespace std;

// int maxProfit(vector<int> &lol) // this shit is giving time-limit exceed error
// {
//     int ans = 0;
//     cout << "jai shree ram" << endl;
//     for (int i = 0; i < lol.size(); i++)
//     {
//         for (int j = i; j < lol.size(); j++)
//         {
//             if (lol[j] - lol[i] > ans)
//             {
//                 ans = lol[j] - lol[i];
//             }
//         }
//     }

//     return ans;
// }
int maxProfit(vector<int>& lol) {
        int ans ;
        int max_ind = 0;
        int min_ind = 0 ; 
        int max = INT_MIN;
        int min = INT_MAX;

    for (int i = 0; i < lol.size(); i++)
    {
 
         if(min>lol[i]){
          min_ind = i ;
            min = lol[i];
      }
    }
    cout<<"min value"<<min<<endl;
    cout<<min_ind<<endl;

for (int i = min_ind; i < lol.size(); i++)
    {
 
           if(max<lol[i]){
          max_ind = i;
          max = lol[i];
      }
    }
    cout<<"max value after index "<<max<<endl;
    cout<<max_ind<<endl ; 
    if(min_ind>max_ind){
        return max-min ; 

    }

    return 0;
    }

int main()
{
    cout << "jai shree ram" << endl;
    vector<int> lol{2,4,1};
 cout<< maxProfit(lol);

    return 0;
}