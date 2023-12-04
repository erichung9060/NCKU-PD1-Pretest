#include <bits/stdc++.h>

using namespace std;

int main(void)
{
	int n;
	
	cin >> n;
	
	vector <double> a(n),b(n);
	
	for(int i=0;i<n;i++) cin >> a[i];
	for(int i=0;i<n;i++) cin >> b[i];
	
	double total1,total2,total3;
	
	total1 = total2 = total3 = 0.0;
	
	for(int i=0;i<n;i++)
	{
		total1 += a[i] * b[i];
		
		total2 += a[i] * a[i];
		
		total3 += b[i] * b[i];		
	}
	
	double ans = total1 / ( sqrt(total2) * sqrt(total3) );
	
	int ans2 = ans * 100;
	
	cout << "0." << ans2  << "\n";
}
