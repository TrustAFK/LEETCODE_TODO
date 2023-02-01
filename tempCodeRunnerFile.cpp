int maxProfit(vector<int>& lol) {
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
for (int i = min_ind; i < lol.size(); i++)
    {
 
           if(max<lol[i]){
          max_ind = i;
          max = lol[i];
      }
    }

    if(min_ind<max_ind){
        return max-min ; 

    }
    return 0;
    }