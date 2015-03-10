#include<iostream>
using namespace std;
main(){
	int n;
	cin>>n;
	cout<<n<<" ";
	if(n == 1){
		return 0;}
while(n>1){
	if(n % 2 == 1){
		     n = 3 * n + 1;}
		else{
		     n = n / 2;}
cout<<n<<" ";}
cout<<endl;
return 0;
}
