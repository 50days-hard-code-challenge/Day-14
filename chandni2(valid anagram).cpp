class Solution {
public:
    bool isAnagram(string s, string t) {
        int n=s.size(),m=t.size();
        if(n!=m){
            return false;
        }
        vector<int>charcount(256,0);
        for(int i=0;i<n;i++){
           charcount[s[i]]++;
           charcount[t[i]]--;
        }
       for(int count:charcount){
           if(count!=0){
               return false;
           }
       }
       return true;
    }
};
