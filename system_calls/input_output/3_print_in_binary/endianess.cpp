#include <bits/stdc++.h>
using namespace std;
int main()
{
	unsigned int i = 1;
	char *c = (char*)&i;
	if (*c)
		cout<<"Little endian\n";
	else
		cout<<"Big endian\n";
	return 0;
}

// This code is contributed by rathbhupendra
