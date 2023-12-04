#include "testlib.h"

using namespace std;

const long long int mx = 1e18;

int main(int argc, char *argv[])
{
	registerValidation(argc, argv);
	
	int n = inf.readInt(1,100,"n");
	
	inf.readEoln();
	
	for(int i=0;i<n;i++)
	{
		inf.readInt(1,100,"Xi");
		
		if( i != n - 1 ) inf.readSpace();
	}
	
	inf.readEoln();
	
	for(int i=0;i<n;i++)
	{
		inf.readInt(1,100,"Yi");
		
		if( i != n - 1 ) inf.readSpace();
	}
	
	inf.readEoln();
	
	inf.readEof();
	
	return 0;
} 
