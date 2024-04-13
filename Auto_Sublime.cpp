#include<bits/stdc++.h>
#include<windows.h>
#include<direct.h>
using namespace std;
namespace wzk{
	int in;
    char cwd[256];
	string q="";
	void run(vector<string>vec){
		string s="";
		for(int i=0;i<(int)vec.size();i++) s+=vec[i];
		const char *c=s.c_str();
		system(c);
	}
	char username[256];
	DWORD cache=256;
	void debug(){cerr<<username<<' '<<q<<'\n';}
	int main(){
		// freopen(".in","r",stdin);
		// freopen(".out","w",stdout);
        _getcwd(cwd,256);
		for(int i=0;i<256;i++){
			if(cwd[i]==':') break;
			q+=cwd[i];
		}
		GetUserName(username,&cache);
		printf("Do you need Mingw?(1/0)");
		scanf("%d",&in);
		if(in) run({"C:\\Windows\\System32\\xcopy.exe \"",q,":\\mingw\" \"D:\\mingw\" /S /I"});
		run({"C:\\Windows\\System32\\xcopy.exe \"",q,":\\need\" \"D:\\need\" /S /I"});
		run({"C:\\Windows\\System32\\xcopy.exe \"D:\\need\\ip\" \"C:\\Users\\",username,"\\AppData\\Roaming\\Sublime Text\\Installed Packages\" /S /I"});
		run({"C:\\Windows\\System32\\xcopy.exe \"D:\\need\\lc\" \"C:\\Users\\",username,"\\AppData\\Roaming\\Sublime Text\\Local\" /S /I"});
		run({"C:\\Windows\\System32\\xcopy.exe \"D:\\need\\pa\" \"C:\\Users\\",username,"\\AppData\\Roaming\\Sublime Text\\Packages\" /S /I"});
		run({"rmdir \"D:\\need\" /S /Q"});
		return 0;
	}
}
int main(){
	return wzk::main();
}
//Good night.
