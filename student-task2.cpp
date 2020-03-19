#include <iostream>
#include <set>
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
	
	set<string> marks;
	
	while(!fin.eof()){
		fin >> string1;
		fin >> string2;
		mark = stoi(string2);
		if (mark < 50) {
            marks.insert(string1);
        }
    }

    set<string>::iterator i;
    for (i = marks.begin(); i != marks.end(); i++) {
        cout << *i << endl;
    }

    return 0;
}

