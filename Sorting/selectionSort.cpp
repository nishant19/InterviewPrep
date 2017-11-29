#include <bits/stdc++.h>

using namespace std;

void swap(int* x,int* y){
	int temp = *x;
	*x = *y;
	*y = temp;
}

void selection(int arr[],int size){
	int i;
	for(i=0;i<size-1;i++){
		int min_index = i;
		int j;
		for(j=i+1;j<size;j++){
			if(arr[min_index]>arr[j]){
				min_index = j;
			}
		}
		swap(arr[min_index],arr[i]);

	}
}

void printArray(int arr[],int size){
	int i;
	for(i=0;i<size;i++){
		cout << arr[i] <<" ";
	}
}

int main(){
	int arr[] = {7,2,4,1,5,3};
	int n = sizeof(arr)/sizeof(arr[0]);
	selection(arr,n);
	printArray(arr,n);
	return 0;
}