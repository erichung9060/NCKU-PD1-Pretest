#include <bits/stdc++.h>

#define int long long

using namespace std;

signed main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	
	int a1,b1,a2,b2;
	cin >> a1 >> b1 >> a2 >> b2;
	
	if( a1 * b2 + a2 * b1 < b1 * b2 ) cout << 1 << "\n";
	else cout << 0 << "\n";
}
