int num_ways(string data){
	vector<int> memo(data.length()+1);
	return helper(data,data.length(),memo);

}

int helper(string data,int k,vector<int> memo){
	if(k==0){
		return 1;
	}

	int s = data.length()-k;

	if(data[s]=='0'){
		return 0;
	}

	if(memo[k]!=null){
		return memo[k];
	}

	int result = helper(data,k-1,memo);

	if(k>=2 && stoi(data.substr(s,2))<27){
		result += helper(data,k-2,memo); 
	}
	memo[k] = result;
	return result;

}