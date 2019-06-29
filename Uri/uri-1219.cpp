#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int main(){
	long double a,b,c;
	long double radioS, radioR;
	long double areaT;
	long double areaS, areaV, areaR;
	while(cin >> a >> b >> c){	
		long double perimetro = a + b + c;
		long double p = perimetro / 2;
		areaT = sqrt(p*(p-a)*(p-b)*(p-c) );
		radioS = (a*b*c)/(4*areaT);
		radioR = areaT/p;
		areaR = M_PI * radioR * radioR;
		areaV = areaT - areaR;
		areaS = M_PI * radioS * radioS - areaT;
		cout << fixed;
		cout << setprecision(4);
		cout << areaS << " " << areaV << " " << areaR << endl;
		//cout << EOF << endl;
	}
	 return 0;
}


