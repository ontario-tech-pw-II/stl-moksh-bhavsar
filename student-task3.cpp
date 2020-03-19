#include <iostream>
#include <map>
#include <fstream>
#include <string>

using namespace std;

int main(){
	
	ifstream fin;
	fin.open("input.txt");
	
	if (fin.fail()){
		cerr << "ERROR: cannot open the file" << endl;
		return 0;
	}
	
	string string1;
	string string2;
	int mark;
	
	map<string, int> marks;
	
	while(!fin.eof()){
		int count = 0;
		fin >> string1;
		fin >> string2;
		mark = stoi(string2);
		if (mark < 50) {
			if (marks.find(string1) == marks.end()){
				marks[string1] = 1;
			}
			else {
				marks[string1]++;
			}
        }
		else{
			if (marks.find(string1) == marks.end()) {
                marks[string1] = 0;
			}
		}
    }

    map<string, int>::iterator i;
    for (i = marks.begin(); i != marks.end(); i++) {
        cout << i->first << " " << i->second  << endl;
    }

    return 0;
}