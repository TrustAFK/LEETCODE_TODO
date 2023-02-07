int maxScore(vector<int>& lol, int k) {
        int ans=0 ;
        int  i = 0 ; 
        int start  = 0 ; 
        int end = lol.size()-1 ; 
        while(i<k){
            cout<<lol[start]<<" " <<lol[end] <<endl;
            if(lol[start]==lol[end]){
                int count = 0;
                while(lol[start]==lol[end] && start<lol.size() && end >=0 &&i<k){
                    cout<<lol[start]<<" " <<lol[end] <<endl;
                    ans = ans+lol[start];
                    cout<<"selecting "<<lol[start]<<endl;
                    start++;
                    end--;
                    i++;
                    count++;
                    cout<<"i am a I "<<i<<endl ; 
                }
                if(lol[start]==lol[end]&&i<k){
                    ans = ans + lol[start];
                    i++;
                    cout<<"i am a I "<<i<<endl ;

                }
                else if(lol[start]<lol[end] && start<lol.size() && end >=0 && i<k){
                    cout<<"in IF end "<<endl;
                    start = start - count;
                    ans = ans+lol[end];
                    cout<<"selecting "<<lol[end]<<endl;
                    i++;
                    cout<<"i am a I "<<i<<endl ;
                    end--;
                }
                else if(lol[start]>lol[end] && start<lol.size() && end >=0 && i<k){
                    end = end + count;
                    cout<<"in else front"<<endl;
                    ans= ans+lol[start];
                    cout<<"selecting "<<lol[start]<<endl;
                    start++;
                    i++;
                    cout<<"i am a I "<<i ;
                }
            }
            else if(lol[start]>lol[end]&&i<k){
                ans = ans + lol[start] ; 
                    cout<<"selecting "<<lol[start]<<endl;
                start ++ ;
                i++;
                    cout<<"i am a I "<<i<<endl ;
            }
            else if(lol[start]<lol[end]&&i<k){
                ans = ans + lol[end];
                
                    cout<<"selecting "<<lol[end]<<endl;
                cout<<end<<endl;
                end--;
                i++;
                    cout<<"i am a I "<<i<<endl ;
            }
            
        }
     return ans;
        
    }