#include <bits/stdc++.h>

#define int long long

using namespace std;

signed main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	
	int n;
	cin >> n;
	vector<int>a(n+1),f(n+1,0),b(n+1,0);
	for(int i=1;i<=n;i++)
	{
		a[i] = i;
		f[i] = i - 1 , b[i] = i + 1;
	}
	
	b[n] = 0;
	
	while(1)
	{
		int opt;
		cin >> opt;
		if( opt == 1 )
		{
			int x,y;
			cin >> x >> y;
			if( b[x] == y ) continue;
			
			int back_x = b[x];
			int front_y = f[y];
			
			f[back_x] = f[x];
			b[f[x]] = back_x;
			
			b[front_y] = x;
			f[x] = front_y;
			
			b[x] = y;
			f[y] = x;
		}
		else if( opt == 2 )
		{
			int p;
			cin >> p;
			
			int st = 0;
			for(int i=1;i<=n;i++) if( f[i] == 0 ) st = i;
			p--;
			int ans = st;
			while(p--)
			{
				ans = b[ans];
			}
			
			cout << ans << "\n";
		}
		else break;
	}
	
	return 0;
}
