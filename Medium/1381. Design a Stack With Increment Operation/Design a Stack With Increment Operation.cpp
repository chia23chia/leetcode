class CustomStack {
private:
    vector<int> stack ;
    int cnt = 0 ;
    int m ;
public:
    CustomStack(int maxSize) {
        stack = vector<int>(maxSize) ;
        stack.clear() ;
        m = maxSize ;
    }
    
    void push(int x) {
        if(cnt >= m)
            return ;
        stack.push_back(x);
        cnt++ ;
    }
    
    int pop() {
        int tmp ;
        if(stack.empty())
            return  -1 ;
        cnt-- ;
        tmp = stack[cnt] ;
        stack.pop_back() ;
        return  tmp ;
    }
    
    void increment(int k, int val) {
        if(k > m)
            k = m ;
        for(int i = 0 ; i < k ; i++)
            stack[i] += val ;
    }
};

/**
 * Your CustomStack object will be instantiated and called as such:
 * CustomStack* obj = new CustomStack(maxSize);
 * obj->push(x);
 * int param_2 = obj->pop();
 * obj->increment(k,val);
 */
