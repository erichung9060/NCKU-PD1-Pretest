#include <bits/stdc++.h>

#define int long long

using namespace std;

signed main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	
	string a,b;
	cin >> a >> b;
	
	cout << a + b << "\n";
	int odd = 0 , even = 0;
	string s = a + b;
	
	int now = 1;
	for(int i=s.size()-1;i>=0;i--)
	{
		if( now % 2 == 1 ) odd += s[i] - '0';
		else even += s[i] - '0';
		
		now++;	
	}
	
	if( abs(odd-even) % 11 == 0 ) cout << "Yes\n";
	else cout << "No\n";
	
	return 0;
}
