#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
using namespace std;

int main(int argc, char *argv[]) {
	string line;
	ifstream infile (argv[1]);
	if(infile.is_open()) {
		while( getline(infile,line) ) {
			if(!line.empty()) {
	
				string s;
				istringstream iss(line);
				while( getline(iss, s, ' ') ) {
					
					
					
				}

			}
		}
		infile.close();
	}
	return 0;
}