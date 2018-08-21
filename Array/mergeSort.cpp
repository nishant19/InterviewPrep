void merge(vector<int> &left,vector<int> &right,vector<int> &a){
	int l = left.size();
	int r = right.size();

	int i = 0;
	int j = 0;
	int k = 0;

	while(i<l && j<r){
		if(left[i]<=right[j]){
			a[k] = left[i];
			i++;
		}
		else{
			a[k] = right[j];
			j++;
		}
		k++;
	}

	while(i<l){
		a[k] = left[i];
		i++;
		k++;
	}
	while(j<r){
		a[k] = right[j];
		j++;
		k++;
	}

}

void mergeSort(vector<int> &a){

	int size = a.size();

	if(size==1){
		return;
	}

	int mid = size/2;

	vector<int> left(mid);
	vector<int> right(a.size()-mid);

	for(int i=0;i<mid;i++){
		left[i] = a[i];
	}
	for(int j=mid;j<size;j++){
		right[j-mid] = a[j];
	}

	mergeSort(left);
	mergeSort(right);
	merge(left,right,a);

	return;

}