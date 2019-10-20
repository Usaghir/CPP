#include <iostream>
#include <fstream>

using namespace std;

//the boolean function outlined in Step 6
bool senderFilter(char *logFileName, char *resultFileName, const char *sender){
	ifstream input(logFileName);
	ofstream output(resultFileName);
	if(!input.good()){
		cout << "Failed opening file " << logFileName << endl;
		return 0;
	}
	if(!output.good()){
		cout << "Failed creating file " <<  resultFileName << endl;
		return 0;
	}
	while(!input.eof()){
		string no;
		getline(input, no);
		string dummy;
		getline(input, dummy);//discarts the reciever number
		getline(input, dummy);//discarts the date
		string line;
		getline(input, line);//takes the post value
		while(line.size()>=256){//if the post is to long it cuts it down
			line.erase(line.size()-1);
		}
		string cpy=sender;
		if(cpy==no){//if the sender is the same as desired number
			output << line << endl;//copy into file
		}
	}
	input.close();
	output.close();
	return 1;
}

int main(){
	//main function. Just calls the boolean function
	if(senderFilter("smslog_eng.txt", "smslog_res.txt", "0702-235689")==1){
		return 0;
	}
	else{
		return -1;
	}
}