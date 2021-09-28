#include <iostream>

using namespace std;

int *wsp;

int horner(int wsp[], int x, int st)
{
	if(st==0)
		return wsp[0];
	return x*horner(wsp, x, st-1)+wsp[st];
}

int main() {
	int st, x;
    cout << "Podaj stopien: ";
	cin>>st;

	wsp = new int[st+1];
	
	for(int i=0; i<=st; i++){
		cout<<"Podaj wspolcznnik stojacy przy x do potegi "<<st-i<<" : ";
		cin>>wsp[i];
	}
	
	cout<<"Podaj x: ";
	cin>>x;

	cout<<"wynik = "<<horner(wsp, x, st);
	
    return 0;
}
