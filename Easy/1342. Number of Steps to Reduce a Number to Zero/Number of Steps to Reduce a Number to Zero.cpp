class Solution {
public:
    int numberOfSteps(int num) {
        /*int ans = 1;
        while(num != 1){
            if(num % 2 == 0)
                num = num / 2 ; 
            else
                num = num - 1;
           ans ++ ; 
        }
        return ans ;*/
        int ans = 0;
        for (; num > 0; ans++)
            if (num % 2 == 1) num--;
            else num /= 2;
        return ans;
    }
};
