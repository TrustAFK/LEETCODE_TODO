#include <bits/stdc++.h>
using namespace std;

void dis(vector<int> lol)
{
    for (int i = 0; i < lol.size(); i++)
    {
        cout << lol[i] << " ";
    }
}

vector<int> plusOne(vector<int> &digits)
{
    vector<int> lol;
    int carry = 0;
    int lastind = digits.size() - 1;
        int val = digits[lastind] + 1;
        cout<<val<<endl;
         if (val > 9)
        {
            lol.push_back(val % 10);
            cout<<"pushed"<<lol.back()<<endl;
            carry = 1;
        }
        else{
            lol.push_back(val);
             cout<<"pushed"<<lol.back()<<endl;
        }
        lastind--;

    while (lastind >= 0 )
    {
        val = digits[lastind] +carry;
          if (val > 9)
        {
             lol.push_back( val % 10);
             
            cout<<"pushed"<<lol.back()<<endl;
            carry = 1;
        }else{
            lol.push_back( val) ;
            
            cout<<"pushed"<<lol.back()<<endl;
            carry =0;
        }
        
           
        lastind--;
    }
    cout<<carry<<endl;
    if(carry){
        lol.push_back(carry);
    }

    reverse(lol.begin() , lol.end());

    return lol;
}

int main()
{
    cout << "jai shree ram" << endl;
    vector<int> lol;
    lol = {1,2,3};
    vector<int> ans = plusOne(lol);
    dis(ans);

    return 0;
}