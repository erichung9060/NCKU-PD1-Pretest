#include "testlib.h"

using namespace std;

int main(int argc, char *argv[])
{
	registerValidation(argc, argv);
	
	int group_id = validator.group()[0] - '0';
	
	int n = inf.readInt(-1000,1000,"n");
	
	inf.readEoln();
	
	inf.readEof();
	
	return 0;
} 
