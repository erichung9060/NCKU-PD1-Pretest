#include <bits/stdc++.h>
 
#include <ext/pb_ds/assoc_container.hpp>
 
#include <ext/pb_ds/tree_policy.hpp>
 
#define int long long // find by order , order of key
 
using namespace __gnu_pbds;
 
using namespace std;
 
typedef tree<int,null_type,less<int>,rb_tree_tag,tree_order_statistics_node_update> order_set;

signed main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
	int n;
	cin >> n;
	
	string ans,save;
	
	cin.ignore();
	
	for(int i=0;i<n;i++)
	{
		string s;
		getline(cin,s);
		
		char u;
		for(int i=0;i<s.size();i++) if( s[i] == '<' ) u = s[i+1];
		
		if( s[0] == ' ' )
		{
			save += u;
		}
		else
		{
		    if( save != "" )
		    {
		        if( ans != "" ) ans += "+";
		        ans += save;
		    }

			save = "" , save += u;
		}
	}
	
	
		 if( save != "" )
	    {
	        if( ans != "" ) ans += "+";
	        ans += save;
	    }

	
	
	cout << "O(" + ans + ")" << "\n";
	
    return 0;
}
