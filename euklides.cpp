#include <iostream>
using namespace std;

int euklides(int a, int b)
{
	while(a!=b)
		if(a>b)
			a-=b;
		else
			b-=a;
	return a;
}
int main() {
    int a,b;
	cout << "Podaj a i b: ";
	cin>>a;
	cin>>b;
	cout<<"NWD = "<<euklides(a,b);
    return 0;
}
