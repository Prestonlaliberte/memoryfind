//locates a text file on disk
// find out how big it is
// create a char array to hold it 
// reads file into array
// reverse file
// print file out

#include <iostream>
#include <fstream>
using namespace std;

void reverse(char* s, int size);


int main()
{
	char filename[200];
	cout << "enter a file name: ";
		cin.getline(filename,200);
	ifstream in(filename);// declares and opens into a file
	if(!in.is_open()){
		cerr<< "ERROR: FAILED TO OPEN " << filename << endl;
		exit(-1);
	}
	in.seekg(0,ios::end);
	int length=in.tellg();
	in.seekg(0,ios::beg);
	char* s = new char[length];
	in.read(s,length);
	cout << s << endl;
	reverse(s,length);
	cout << endl << endl;
	delete [] s;
	cout << s << endl;
	return 0;
	

}

void reverse(char* s, int size){
	for(int i=0;i<size/2;i++){
		char temp = s[i];
		s[i] = s[size-1-i];
		s[size-1-i]=temp;

	}
}
