#include "testlib.h"

using namespace std;

int mx = 1e9;

int main(int argc, char* argv[])
{
	registerGen(argc, argv, 1);
	
	int g = opt<int>("n");
	
	int n = 2e5;
	cout << n << "\n";
	
	int q = 5000 - 1 , cnt = 99;
	while(q--)
	{
		int opt = rnd.next(1,100);
		if( cnt != 0 && opt >= 90 )
		{
			cout << 2 << " ";
			int p = rnd.next(1,n);
			cout << p << "\n";
			cnt--;
		}
		else
		{
			int a = rnd.next(1,n);
			int b = rnd.next(1,n);
			while( a == b ) b = rnd.next(1,n);
			cout << 1 << " ";
			cout << a << " " << b << "\n";
		}
	}
	
	cout << 2 << " ";
	int p = rnd.next(1,n);
	cout << p << "\n";
	
	cout << 3 << "\n";
	
	return 0;
}
