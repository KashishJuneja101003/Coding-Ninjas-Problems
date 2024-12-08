#include <bits/stdc++.h> 
int largestElement(vector<int> &arr, int n) {
    int greatest = INT_MIN;
    for(int i:arr)
        greatest = max(greatest, i);
    return greatest;

}
