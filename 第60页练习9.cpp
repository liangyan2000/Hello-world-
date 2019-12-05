#include <bits/stdc++.h>
using namespace std;
int main()
{
	int k, x, count1=0, count5=0, count10=0;
	//without initializing, variables inside main() will have random initial value
	cin>>k;
	for (int i=1;i<=k;i++)
		{
			cin>>x;
			if (x==1)count1++;
			if (x==5)count5++;
			if(x==10)count10++;		
		}
	cout<<count1<<endl<<count5<<endl<<count10;
return 0;
}

