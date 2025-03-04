/*NAME:Yvonne Karimi
  REG NO:BSCIT-05-0072/2024
  DATE:03/03/2025
  */
  
#include <iostream>
using namespace std;


int main(){
	int marks [2][2][3]={
	{
	{20,30,50},
	{80,90,100}	
	},
	
	{
	{10,50,60},
	{70,80,90}	
	}
};
int i,j,k;
for(i=0;i<2;i++){
	for(j=0;j<2;j++){
		for(k=0;k<3;k++){
	
    cout<<marks[i][j][k]<<"\t";
		}
  cout<<endl;
}
cout<<endl;
}
return 0;
}