#include <iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

void goldmine(vector<vector<int>> mine){

	vector<vector<int> > smine(mine.size(),vector<int>(mine[0].size()));
	vector<vector<string> > path(mine.size(),vector<string>(mine[0].size()));

	int orow = -1;
	int ocol = -1;
	int omax = INT_MIN;

	for(int c=mine[0].size()-1;c>=0;c--){
		for(int r = 0;r<mine.size();r++){
			int rm1 = r-1;
			int rp1 = r+1;
			int cp1 = c+1;

			string row = to_string(r);
			string col = to_string(c);

			if(c==mine[0].size()-1){
				smine[r][c] = mine[r][c];
				path[r][c] = string(" ")+ row +string("_")+ col;
			}
			else if(r==0){
				if(smine[rp1][cp1]>smine[r][cp1]){
					smine[r][c] = mine[r][c] + smine[rp1][cp1];
					path[r][c] = string(" ")+ row +string("_")+ col + path[rp1][cp1];
				}
				else{
					smine[r][c] = mine[r][c] + smine[r][cp1];
					path[r][c] = string(" ")+ row +string("_")+ col + path[r][cp1];
				}
			}
			else if(r==mine.size()-1){
				if(smine[rm1][cp1]>smine[r][cp1]){
					smine[r][c] = mine[r][c] + smine[rm1][cp1];
					path[r][c] = string(" ")+ row +string("_")+ col + path[rm1][cp1];
				}
				else{
					smine[r][c] = mine[r][c] + smine[r][cp1];
					path[r][c] = string(" ")+ row+string("_")+ col + path[r][cp1];
				}
			}
			else{
				if(smine[rp1][cp1]>smine[r][cp1] && smine[rp1][cp1]>smine[rm1][cp1]){
					smine[r][c] = mine[r][c] + smine[rp1][cp1];
					path[r][c] = string(" ")+ row +string("_")+ col + path[rp1][cp1];
				}
				else if(smine[rm1][cp1]>smine[r][cp1] && smine[rm1][cp1]>smine[rp1][cp1]){
					smine[r][c] = mine[r][c] + smine[rm1][cp1];
					path[r][c] = string(" ")+ row +string("_")+ col + path[rm1][cp1];
				}
				else{
					smine[r][c] = mine[r][c] + smine[r][cp1];
					path[r][c] = string(" ")+ row +string("_")+ col + path[r][cp1];
				}


			}

			if(smine[r][c]>omax){
				omax = smine[r][c];
				orow = r;
				ocol = c;
			}

		}
		
	}
	cout << omax;
	cout << path[orow][ocol];
	return ;
}

	



int main(){
	vector<vector<int> > v = {{2,6,0,5},{0,7,5,2},{3,0,3,7},{8,0,2,3}};
	goldmine(v);
	return 0;
}


