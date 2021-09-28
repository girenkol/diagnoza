#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int a,b,c;
    cout << "ax^2 + bx + c"<<endl;
	cout << "Podaj a: ";
	cin >> a;
	cout << "Podaj b: ";
	cin >> b;
	cout << "Podaj c: ";
	cin >> c;

    int delta = b*b-4*a*c;
    cout<<"delta = "<<delta<<endl;

    if(delta<0){
        cout<<"Brak miejsc zerowych";
        return 0;
    }
    else{
        if(delta==0){
            cout<<"m0 = " << -b/(2*a);
            return 0;
        }
        else{
            cout<<"Miejsca zerowe: "<<endl;
            cout<<"m1 = "<<(-b-sqrt(delta))/(2*a)<<endl;
            cout<<"m2 = "<<(-b+sqrt(delta))/(2*a);
            }
    }


    return 0;
}
