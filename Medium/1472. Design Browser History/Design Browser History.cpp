class BrowserHistory {
private:
    vector<string> history ;
    int tmp ;
    int n ;
public:
    BrowserHistory(string homepage) {
        history.push_back(homepage) ;
        tmp = 0 ;
        n = 0 ;
    }
    
    void visit(string url) {
        tmp++ ;
        if(history.size() == tmp) 
            history.push_back(url) ;
        else
            history[tmp] = url ;
        
        n = tmp ;
    }
    
    string back(int steps) {
        tmp = max(tmp - steps , 0);
        return history[tmp] ;
    }
    
    string forward(int steps) {
        tmp = min(tmp + steps , n) ;
        return history[tmp] ;
    }
};

/**
 * Your BrowserHistory object will be instantiated and called as such:
 * BrowserHistory* obj = new BrowserHistory(homepage);
 * obj->visit(url);
 * string param_2 = obj->back(steps);
 * string param_3 = obj->forward(steps);
 */
