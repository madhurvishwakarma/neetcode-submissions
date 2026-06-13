class Solution {
public:
    bool isAnagram(string s, string t) {
        int n = s.size() , m = t.size() ;
        if( n != m ){
            return false ;
        }
        map<char , int > mp ;
        for( int i =0 ; i< n ; i++ ){
            mp[s[i]]++ ;
            mp[t[i]]-- ;

        }
        for( auto x : mp ){
            if( x.second != 0 ){
                return false ;
            }
        }
        return true ;
    }
};
