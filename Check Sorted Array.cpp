int isSorted(int n, vector<int> a) {
    // Write your code here.
    int temp = a[0];
    for(int i:a){
        if(temp > i) return 0;
        temp = i;
    }

    return 1;
}
