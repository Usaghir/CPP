#include <iostream>
#include <fstream>
#include <cstring>
#include <stdio.h>
#include <sstream>
#include <iomanip> 

using namespace std;

//structure sam as the one outlined in the Step6 file
struct DataRecord
{
	char logger;
	double temp;
	time_t locTime;
};

//main function. Takes pointer to the file and injects their values with fread
//into the structture
int main(){
	string c;
	FILE *fl;
	fl=fopen("timelog.dat", "r");
	ofstream out("A.txt");
	 out.setf( ios::fixed, ios::floatfield );
	out.precision(1);
	out <<"Data A\n";
	while(1){
		struct DataRecord dr;
		int size;
		size=fread(&dr, sizeof(struct DataRecord), 1, fl);
		if(size==0){//if no bytes were loaded nothing is written
			break;
		}
		if(dr.logger=='A'){//if the logger is A then save into file
			out<<dr.temp << ", ";
			out << asctime(localtime(&dr.locTime));
		}
	}
	fclose(fl);
	out.close();
}