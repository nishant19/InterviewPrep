

int Solution::deleteandconquer(vector<int> &A) {
    int num;
    int max = INT_MIN;
    unordered_map<int,int> map;
    for(int i: A){
        map[i]++;
    }
    for(auto i:map){
        if(max<i.second){
            max = i.second;
        }
        // cout<<max<<" ";
    }
    num = A.size()-max;
    return num;
}
