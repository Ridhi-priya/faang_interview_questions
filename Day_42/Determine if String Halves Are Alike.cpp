//Code:

class Solution {
public:
    bool halvesAreAlike(string s) {
      transform(s.begin(), s.end(), s.begin(), ::tolower);
        string p="", q="";
      for(int i=0;i<s.length()/2;i++)
        p+=s[i];
      for(int i=s.length()/2 ; i<s.length(); i++)
        q+=s[i];
     int c=0, f=0;
      for(int i=0; i<p.length() ;i++){
        if(p[i]=='a' || p[i]=='e' || p[i]=='i' || p[i]=='o' || p[i]=='u')
          c++;
      }
      for(int i=0; i<q.length() ;i++){
        if(q[i]=='a' || q[i]=='e' || q[i]=='i' || q[i]=='o' || q[i]=='u')
          f++;
      }
      if(c==f)
        return true;
      return false;
    }    
};
