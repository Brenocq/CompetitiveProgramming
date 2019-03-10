#include<bits/stdc++.h>
using namespace std;

string s;
int pos;

int main(int argc, char const *argv[])
{
	cin>>s;

	
    pos = s.find( "WUB", pos );
	while(pos!=-1){
		s.insert(pos," ");
		s.erase(pos+1, 3);
		pos = s.find( "WUB", pos );
	}

	while(s[0]==' '){
		s.erase(0, 1);
	}
	while(s[s.size()-1]==' '){
		s.erase(s.size()-1, 1);
	}

    for (int i = 0; i < s.size()-1; ++i)
    {
    	if(s[i]==' ' && s[i+1]==' ')
    		s.erase(i, 1);
    }

	cout<<s;

	return 0;
}