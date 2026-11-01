class Solution {
public:
    bool isAnagram(string s, string t) {
        int len1=s.size();
        int len2=t.size();

        int freq1[26]={0};
        int freq2[26]={0};

        if(len1!=len2){
            return false;
        }else{
            for(int i=0;i<len1;i++){
                freq1[s[i]-'a']++;
            }

            for(int i=0;i<len2;i++){
                freq2[t[i]-'a']++;
            }

            for(int i=0;i<26;i++){
                if(freq1[i]!=freq2[i]){
                    return false;
                }
            }
            return true;
        }
    }
};
