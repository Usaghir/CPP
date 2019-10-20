#include <iostream>
#include <fstream>
#include <climits>
#include <algorithm>
#include <cmath>

using namespace std;

int main()
{
	ifstream input("surfacedata.txt");
	if(!input.good())
  {
		cout << "File read problem!\n";
		return -1;
	}
	double min_t=INT_MAX, max_t=-1*(INT_MAX-1);
	double n=0, Ra=0, Rq=0;
	cout.setf( ios::fixed, ios::floatfield );
	cout.precision(3);
	while(!input.eof())
  {
		double val;
		input >> val;
		max_t=max(max_t, val);
		min_t=min(min_t, val);
		++n;
		Ra+=abs(val);
		Rq+=pow(val, 2);
	}
	input.close();
	Rq/=n;
	Rq=sqrt(Rq);
	Ra/=n;
	cout << "Ra                   = " << Ra << endl;
	cout << "Rq                   = " << Rq << endl;
	cout << "Max Roughness height = " << abs(max_t-min_t) << endl;
	cout << "Numbers of values    = " << n << endl;
	cout << "Done!" << endl;
}