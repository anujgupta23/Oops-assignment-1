#include <iostream>
using namespace std;
class mul
{
	public:
		int product(int a,int b)
		{
			return a*b;
			
		}
};
int main()
{
	mul s;
	int c=s.product(4,5);
	cout<<"multiplication is:"<<c;
	return 0;
}
