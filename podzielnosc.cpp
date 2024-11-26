#include <iostream>
using namespace std;
int nwd(int a,int b) {
    while(b!=0)
    {
        int temp=b;
        b=a%b;
        a=temp;
    }
    return a;
}
int main(){
	int a,b;
	cin>>a>>b;
	if(a<=0 || b<=0){cout<<"Liczby musza byc dodatnie!\n";
		return 1;}

	cout<<a<<" "<<b<<endl;
	cout<<"NWD: "<<nwd(a,b)<<endl; 
	return 0;}

