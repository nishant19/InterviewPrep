int num_ways(int steps,vector<int> step_ways){
	vector<int> memo(steps+1);
	return helper(steps,memo);
}

int helper(int steps,vector<int> memo,vector<int> step_ways){
	if(steps==0 || steps==1){
		memo[steps]=1;
		return 1;
	}

	if(memo[steps]!=null){
		return memo[steps];
	}

	int result = 0;

	for(int i=0;step_ways[i]<=steps;i++){
		result += num_ways(steps-step_ways[i]);
	}

	memo[steps] = result;
	return result;
}

//  Alternate method




int num_ways(int steps,vector<int> step_ways){
	vector<int> nums(steps+1);
	nums[0]=1;

	for(int i=1;i<=steps;i++){
		int total=0;
		for(int j:step_ways){
			if(i-j>=0){
				total+=nums[i-j];
			}
		}
		nums[i] = total;

	}
	return nums[steps];
}







