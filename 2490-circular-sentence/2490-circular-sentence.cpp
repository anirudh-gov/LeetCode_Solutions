class Solution {
public:
    bool isCircularSentence(string sentence) {
        
        stringstream s(sentence);
        string word;

        char prev = '\0';

        while (s >> word){
            int n = word.length();
            char curr = word[0]; 
            if(prev!=curr && prev != '\0')
                return false;
            prev = word[n-1];
        }

        if(prev!=sentence[0]) return false;
        return true;
    }
};