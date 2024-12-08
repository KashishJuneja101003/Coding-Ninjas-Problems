int lowerBound(vector<int> arr, int n, int x) {
	// Write your code here
	int start = 0, end = n-1, result=n;

	while(start <= end){
		int mid = start + (end-start)/2;

		if(arr[mid] >= x){
			result = mid;
			end = mid-1;
		}
		else start = mid+1;
	}
	
	return result;
}
