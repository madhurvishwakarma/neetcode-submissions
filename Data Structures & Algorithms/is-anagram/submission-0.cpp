class Solution {
public:
    bool isAnagram(string s, string t) {
        int n = s.size() , m = t.size() ;
        if( n != m ){
            return false ;
        }
        map<char , int > mp ;
        map<char , int > np ;
        for( int i =0 ; i< n ; i++ ){
            mp[s[i]]++ ;
            np[t[i]]++ ;
        }
        if( mp == np ){
            return true ;
        }
        return false ;
    }
};
