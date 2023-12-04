#include "testlib.h"

using namespace std;

int main(int argc, char* argv[])
{
	registerGen(argc, argv, 1);
	
	int n = rnd.next(1,100);
	
	cout << n << "\n";
	
	for(int i=0;i<n;i++)
	{
		cout << rnd.next(1,100);
		
		if( i != n - 1 ) cout << " ";
	}
	
	cout << "\n";
	
	for(int i=0;i<n;i++)
	{
		cout << rnd.next(1,100);
		
		if( i != n - 1 ) cout << " ";
	}
	
	cout << "\n";
	
	return 0;
}



