// #ifndef ONLINE JUDGE
// 	freopen("input.txt","r",stdin);
// 	freopen("output.txt","w",stdout);
// #endif

#include <bits/stdc++.h>

using namespace std;

void swap(int* x,int* y){
	int temp = *x;
	*x = *y;
	*y = temp;
}

void bubble(int arr[],int size){
	int i;
	for(i=0;i<size-1;i++){
		int j;
		int flag = 0;
		for(j=0;j<size-1-i;j++){
			if(arr[j]>arr[j+1]){
				swap(arr[j],arr[j+1]);
				flag = 1;
			}
		}
		if (flag==0){
			break;
		}

	}
}

// int* takeInput(){
// 	cout << "enter number of elements" << "\n";
// 	int n;
// 	cin >> n;
// 	int* arr = new int[n];
// 	int i;
// 	for(i=0;i<n;i++){
// 		cin >> arr[i];
// 	}
// 	return arr;
// }

void printArray(int arr[],int size){
	int i;
	for(i=0;i<size;i++){
		cout << arr[i] <<" ";
	}

}

int main(){
	
	int arr[] = {2,7,4,1,5,3};
	int n = sizeof(arr)/sizeof(arr[0]);
	bubble(arr,n);
	printArray(arr,n);

}
