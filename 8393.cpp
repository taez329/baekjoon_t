#include <iostream>
using namespace std;

int main()
{
	int n;
	int k = 0;
	cin>>n;
	
	for (int i=1; i<=n; i++)
	{
		k += i;
	}
	cout<<k<<endl;
	return 0;
	
	//cout<<n(n+1)/2;
}