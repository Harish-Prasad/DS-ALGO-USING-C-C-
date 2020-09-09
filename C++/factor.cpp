#include<iostream>
using namespace std;
int main(void)
{
	int i,fact=1,n;
	cout<<"enter the number:";
	cin>>n;
		for(i=1;i<=n;i++)
		
			fact=fact*i;
			cout<<"factorial="<<fact<<endl;
			return 0;
		
}
