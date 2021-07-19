class Solution {
public:
    bool checkIfPangram(string sentence) {
        bool ans = true;
        vector<int> temp(26) ;
        for(int i = 0 ; i < sentence.size() ; i++)
        {
                if(sentence[i] == 'a')temp[0] ++ ;
                if(sentence[i] == 'b')temp[1] ++ ;
                if(sentence[i] == 'c')temp[2] ++ ;
                if(sentence[i] == 'd')temp[3] ++ ;
                if(sentence[i] == 'e')temp[4] ++ ;
                if(sentence[i] == 'f')temp[5] ++ ;
                if(sentence[i] == 'g')temp[6] ++ ;
                if(sentence[i] == 'h')temp[7] ++ ;
                if(sentence[i] == 'i')temp[8] ++ ;
                if(sentence[i] == 'j')temp[9] ++ ;
                if(sentence[i] == 'k')temp[10] ++ ;
                if(sentence[i] == 'l')temp[11] ++ ;
                if(sentence[i] == 'm')temp[12] ++ ;
                if(sentence[i] == 'n')temp[13] ++ ;
                if(sentence[i] == 'o')temp[14] ++ ;
                if(sentence[i] == 'p')temp[15] ++ ;
                if(sentence[i] == 'q')temp[16] ++ ;
                if(sentence[i] == 'r')temp[17] ++ ;
                if(sentence[i] == 's')temp[18] ++ ;
                if(sentence[i] == 't')temp[19] ++ ;
                if(sentence[i] == 'u')temp[20] ++ ;
                if(sentence[i] == 'v')temp[21] ++ ;
                if(sentence[i] == 'w')temp[22] ++ ;
                if(sentence[i] == 'x')temp[23] ++ ;
                if(sentence[i] == 'y')temp[24] ++ ;
                if(sentence[i] == 'z')temp[25] ++ ;
        }
        for(int i = 0 ; i < 26 ; i++)
        {
            if(temp[i] == 0)
                ans = false ;
        }
        return ans ;
    }
};
