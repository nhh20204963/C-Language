#include <iostream>
using namespace std;
int main()
{
	int a, b, i, j, flag;
	cin >> a >> b; // nhap a va b.
	for(i=a+1; i<b; ++i)
	{
		flag=1;
		for(j=2; j<=i/2; ++j)
		{
			if(i%j==0)
			{
				flag=0;
				break;
			}
		}
		if(flag==1)
			cout << i << "  ";

	}

	return 0;
}
