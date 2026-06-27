#include <iostream>
#include <vector>
using namespace std;
char grid[105][105];//二維陣列存地圖 
int Fieldcount=1;
int main(){
	int n,m;
	while(cin>>n>>m){
		if(n==0 && m==0){
			break;
		}
		for(int i=0;i<=n-1;i++){
			for(int j=0;j<=m-1;j++){
				cin>>grid[i][j];
			}
		}
		if(Fieldcount>=1) cout<<endl;
		cout<<"Field"<<"#"<<Fieldcount<<":"<<endl;
		for(int i=0;i<=n-1;i++){
			for(int j=0;j<=m-1;j++){
				if(grid[i][j]=='*'){
					cout<<'*';
				}
				else if(grid[i][j]=='.'){
					int count=0;
					if(i-1>=0 && grid[i-1][j]=='*'){ //上面那格 
						count++;	
					}
					if(j-1>=0 && grid[i][j-1]=='*'){ //左邊那格 
						count++;	
					}
					if(j+1<m && grid[i][j+1]=='*'){ //右邊那格 
						count++;	
					}
					if(i+1<n && grid[i+1][j]=='*'){ //下面那格 
						count++;	
					}
					if(i-1>=0 && j+1<m && grid[i-1][j+1]=='*'){ //右上那格 
						count++;	
					}
					if(j-1>=0 && i+1<n && grid[i+1][j-1]=='*'){ //左下那格 
						count++;	
					}
					if(j+1<m && i+1<n && grid[i+1][j+1]=='*'){ //右下那格 
						count++;	
					}
					if(i-1>=0 && j-1>=0 && grid[i-1][j-1]=='*'){ //左上那格 
						count++;	
					}
					cout<<count;
				}
			}
			cout<<endl;
		}
		Fieldcount++;
	}
}


