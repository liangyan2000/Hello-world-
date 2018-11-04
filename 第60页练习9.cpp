#include <bits/stdc++.h>
using namespace std;
int main()
{
	int k, x, count1, count5=0, count10;
	//不知道为什么这个count5必须赋值为0，否则就当成1来处理，而其他两个就没事。 
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

