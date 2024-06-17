void insertHeap(int &x)
    {
        if(pmax.size() == pmin.size()){
           if(pmax.size() == 0){
               pmax.push(x);
           }
           else if(x <= pmax.top()){
               pmax.push(x);
           }else pmin.push(x);
        }else{
            if(pmax.size() > pmin.size()){
                if(x >= pmax.top()){
                    pmin.push(x);
                }else {
                    int temp = pmax.top();
                    pmax.pop();
                    pmin.push(temp);
                    pmax.push(x);

                }
            }else {
                if(x >= pmin.top()){
                    int temp = pmin.top();
                    pmin.pop();
                    pmin.push(x);
                    pmax.push(temp);
                    
                }else{
                    pmax.push(x);
                }
            }
        }
    }
    
    //Function to return Median.
    double getMedian()
    {
        if(pmax.size() == pmin.size()){
            return (pmin.top()+pmax.top())/2.0;
        }else {
            if(pmax.size()>pmin.size()){
                return pmax.top();
            }else 
                return pmin.top();
        }
    }
