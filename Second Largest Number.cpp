vector<int> getSecondOrderElements(int n, vector<int> a) {
    // Write your code here.
    int l=INT_MIN, sl = INT_MIN, s = INT_MAX, ss = INT_MAX;

    for(int i:a){
        if(i>l){
            sl = l; l = i; 
        }
        else if(i > sl && i!=l) sl = i;

        if(i < s){
            ss = s; s = i; 
        }
        else if(i <ss && i != s) ss=i;
    }

    return {sl, ss};
}
