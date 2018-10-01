// Given an array of integers. The task is to find a peak element in it. An array element is peak if it is not smaller than its neighbors. For corner elements, we need to consider only one neighbor. For example, for input array {5, 10, 20, 15}, 20 is the only peak element. For input array {10, 20, 15, 2, 23, 90, 67}, there are two peak elements: 20 and 90. 

// Note: There may be multiple peak element possible, in that case you may return any valid index.

// Input:
// The first line of input contains an integer T denoting the no of test cases. Then T test cases follow. Each test case contains an integer N. Then in the next line are N space separated values of the array.

// Output:
// For each test case output will be 1 if the index returned by the function is an peak index.

// Constraints:
// 1<=T<=100
// 1<=N<=100
// 1<=A[]<=1000

// Example:
// Input:
// 2
// 3
// 1 2 3
// 2
// 3 4
// Output:
// 1
// 1

int peak(int arr[], int n)
{
   if(arr[0]>=arr[1]){
       return 0;
   }
   if(arr[n-1]>=arr[n-2]){
       return n-1;
   }
   for(int i=1;i<n-1;i++){
       if(arr[i]>=arr[i-1] && arr[i]>=arr[i+1]){
           return i;
       }
   }
   
   return -1;
       
}