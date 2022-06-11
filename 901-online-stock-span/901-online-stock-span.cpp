class StockSpanner {
public:
    stack<pair<int, int>> s;
    StockSpanner() {
        
    }
    
    int next(int price) {
        int daysCount=1;
        while(!s.empty() && s.top().first <= price){
            daysCount = daysCount + s.top().second;
            s.pop();
        }
        s.push({price, daysCount});
        return s.top().second;
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */