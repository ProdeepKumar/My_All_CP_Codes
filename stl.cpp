#include <bits/stdc++.h>
using namespace std;
int n,t;
string s,a;
void GG()
{
	if(cin>>s)
	{
		a+=s;
		if(s=="pair")
		{
			a+='<';
			GG();
			a+=',';
			GG();
			a+='>';
		}
	}
	else
	{
		t=1;
	}
}
int main()
{
	scanf("%d",&n);
	GG();
	if(t==1 || cin>>s)
	{
		printf("Error occurred");
	}
	else
	cout<<a;
	return 0;
}