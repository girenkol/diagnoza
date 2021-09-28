#include <iostream>
using namespace std;

int *tab;

int main() {
	int n;
    cout << "Podaj ilosc liczb: ";
	cin >> n;

	tab = new int[n];

	cout<<"Podaj te liczby: "<<endl;
	for(int i=0; i<n; i++)
		cin >> tab[i];

	for(int i=0; i<n; i++)
		for(int j=1; j<n-i; j++)
			if(tab[j-1]>tab[j])
				swap(tab[j-1],tab[j]);
	
	for(int i=0; i<n; i++)
		cout <<endl<< tab[i];
	
    return 0;
}
