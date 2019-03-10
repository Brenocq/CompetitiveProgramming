#include<bits/stdc++.h>
using namespace std;

string s;
int up;

int main(int argc, char const *argv[])
{
	cin>>s;

	for (int i = 0; i < s.size(); ++i)
	{
		if(s[i]>='A' && s[i]<='Z')
			up++;
	}

	if(s.size()-up >= up){

		for (int i = 0; i < s.size(); ++i)
		{
			if(s[i]>='A' && s[i]<='Z')
				s[i]=s[i]+32;
		}

	}else{

		for (int i = 0; i < s.size(); ++i)
		{
			if(s[i]>='a' && s[i]<='z')
				s[i]=s[i]-32;
		}

	}

    cout<<s;
    
	return 0;
}