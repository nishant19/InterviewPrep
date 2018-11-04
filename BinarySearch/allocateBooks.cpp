// N number of books are given. 
// The ith book has Pi number of pages. 
// You have to allocate books to M number of students so that maximum number of pages alloted to a student is minimum. A book will be allocated to exactly one student. Each student has to be allocated at least one book. Allotment should be in contiguous order, for example: A student cannot be allocated book 1 and book 3, skipping book 2.

// NOTE: Return -1 if a valid assignment is not possible

// Input:

// List of Books
// M number of students
// Your function should return an integer corresponding to the minimum number.

// Example:

// P : [12, 34, 67, 90]
// M : 2

// Output : 113

// There are 2 number of students. Books can be distributed in following fashion : 
//   1) [12] and [34, 67, 90]
//       Max number of pages is allocated to student 2 with 34 + 67 + 90 = 191 pages
//   2) [12, 34] and [67, 90]
//       Max number of pages is allocated to student 2 with 67 + 90 = 157 pages 
//   3) [12, 34, 67] and [90]
//       Max number of pages is allocated to student 1 with 12 + 34 + 67 = 113 pages

// Of the 3 cases, Option 3 has the minimum pages = 113. 

int getStudents(vector<int> &A,int pages){
        int sum = 0;
        int students = 1;
        for(int i=0;i<A.size();i++){
            if(sum+A[i]<=pages){
                sum+=A[i];
            }
            else{
                sum = A[i];
                students++;
            }
        }
        
        // cout << students <<"\n";
        return students;
    }

int Solution::books(vector<int> &A, int B) {
    
    // sort(A.begin(),A.end());
    
    if(B > A.size()){
        return -1;
    }
    
    int sum = 0;
    int max = INT_MIN;
    for(int i=0;i<A.size();i++){
        sum+=A[i];
        if(max<A[i]){
            max = A[i];
        }
    }
    
    if(B == A.size()){
        return max;
    } 
    
    int start = max;
    int end = sum;
    
    int ans = max;
    
    while(start<=end){
        int mid = start+(end-start)/2;
        // cout << mid <<" ";
        int currentStudents = getStudents(A,mid);
        if(currentStudents==B){
            ans = mid;
            end = mid-1;
        }
        else if(currentStudents>B){
            start = mid+1;
        }
        else{
            end = mid-1;
        }
    }
    
    
    
    
    
    return ans;
}