#include <iostream>


using namespace std;

int fine(int n,int date,int* cars,int* penalties){
	bool odd = (date%2==0)?false:true;
	int i,fine=0;
	for(i=0;i<n;i++){
		bool car = (cars[i]%2!=0);
		if (car != odd){
			fine+=penalties[i];
		}
	}
	return fine;

}

int main(){
	// #ifndef ONLINE_JUDGE
	// freopen("input.txt","r",stdin);
	// freopen("output.txt","w",stdout);
	// #endif

	int t,i,n,date,j;
	int odd;
	cin >> t;
	for(i=0;i<t;i++){
		cin >> n >> date;
		int* cars = NULL;
		int* penalties = NULL;
		cars = new int[n];
		penalties = new int[n];
		for(j=0;j<n;j++){
			cin >> cars[j];	
		}
		for(j=0;j<n;j++){
			cin >> penalties[j];
		}
		cout << fine(n,date,cars,penalties) << "\n";
		delete cars;
		delete penalties;
		
	}


	return 0;
}