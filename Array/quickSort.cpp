int partition(vector<int> v,int start,int end){
	int pIndex = start;
	int pivotIndex = rand()%end + start;
	int pivot = A[pivotIndex];

	for(int i=start;i<end;i++){
		if(pivotIndex!=i){
			if(A[i]<=pivot){
				swap(A[i],A[pIndex]);
				pIndex++;
			}
		}
	}

	A[pIndex] = pivot;
	return pIndex;
}

void quickSort(vector<int> v,int start,int end){
	if(start<end){
		int pIndex = partition(v,start,end);
		quickSort(v,start,pIndex-1);
		quickSort(v,pIndex+1,end);
	}
}