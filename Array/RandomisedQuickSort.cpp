int partition(vector<int> &A,int start,int end){
	int pIndex = start;
	int pivot = A[end];

	for(int i=start;i<end;i++){
			if(A[i]<=pivot){
				swap(A[i],A[pIndex]);
				pIndex++;
			}
	}

	swap(A[pIndex],A[end]);
	return pIndex;
}

void quickSort(vector<int> &v,int start,int end){
	if(start<end){
		int random = rand()%(end-start+1)+start;
		swap(A[random],A[end]);
		int pIndex = partition(v,start,end);
		quickSort(v,start,pIndex-1);
		quickSort(v,pIndex+1,end);
	}
}