#include <bits/stdc++.h>

using namespace std;

void insertion(int arr[],int size){
	int i;
	for(i=1;i<size;i++){
		int j = i-1;
		int value = arr[i];
		while(j>=0 && arr[j]>value){
			arr[j+1]=arr[j];
			j=j-1;
		} 
		arr[j+1] = value;
	}
}

void printArray(int arr[],int size){
	int i;
	for(i=0;i<size;i++){
		cout << arr[i] <<" ";
	}	
}

int main(){
	int arr[] = {2,7,4,1,5,3};
	int n = sizeof(arr)/sizeof(arr[0]);
	insertion(arr,n);
	printArray(arr,n);
	return 0;

}