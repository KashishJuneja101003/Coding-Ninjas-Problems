// TC: O(n) SC: O(n)
#include <bits/stdc++.h> 
bool duplicateParanthesis(string &expr)
{
    stack<int> stk;
    for(int i=0; i<expr.size(); i++){
        if(expr[i] == '(') stk.push(i);
        else if (expr[i] == ')'){
            int idx2 = stk.top(); stk.pop();
            if(!stk.empty()){
                int idx1 = stk.top();
                if(expr[i+1] == ')' && idx2-1 == idx1) return true;
            }
        }
    }

    return false;
}
