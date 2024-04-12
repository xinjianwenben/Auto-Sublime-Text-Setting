#include<bits/stdc++.h>
#include<windows.h>
#include<direct.h>
using namespace std;
namespace wzk{
	int in;
    char cwd[256];
	string q="";
	int main(){
		// freopen(".in","r",stdin);
		// freopen(".out","w",stdout);
        _getcwd(cwd,256);
		for(int i=0;i<256;i++){
			if(cwd[i]==':') break;
			q+=cwd[i];
		}
		// cerr<<"C:\\Windows\\System32\\xcopy.exe \""+q+":\\need\" \"D:\\need\" /S /I"<<'\n';
		printf("Do you need Mingw?(1/0)");
		scanf("%d",&in);
		string s="C:\\Windows\\System32\\xcopy.exe \""+q+":\\mingw\" \"D:\\mingw\" /S /I";
		const char *c=s.c_str();
		if(in) system(c);
		s="C:\\Windows\\System32\\xcopy.exe \""+q+":\\need\" \"D:\\need\" /S /I";
		const char *cc=s.c_str();
		system(cc);
		system("C:\\Windows\\System32\\xcopy.exe \"D:\\need\\ip\" \"C:\\Users\\admin\\AppData\\Roaming\\Sublime Text\\Installed Packages\" /S /I");
		system("C:\\Windows\\System32\\xcopy.exe \"D:\\need\\lc\" \"C:\\Users\\admin\\AppData\\Roaming\\Sublime Text\\Local\" /S /I");
		system("C:\\Windows\\System32\\xcopy.exe \"D:\\need\\pa\" \"C:\\Users\\admin\\AppData\\Roaming\\Sublime Text\\Packages\" /S /I");
		system("rmdir \"D:\\need\" /S /Q");
		return 0;
	}
}
int main(){
	return wzk::main();
}
//Good night.
