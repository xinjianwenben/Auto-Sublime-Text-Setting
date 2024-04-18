#include<bits/stdc++.h>
#include<windows.h>
#include<direct.h>
using namespace std;
namespace estidi{
	int in;
    char cwd[256];
	string q="";
	void run(vector<string>vec){
		string s="";
		for(int i=0;i<(int)vec.size();i++) s+=vec[i];
//		cout<<">"<<s<<endl;
		system(s.c_str());
	}
	char username[256];
	DWORD cache=256;
	void debug(){cerr<<username<<' '<<q<<'\n';}
	int main(int argc,char ** argv){
		// freopen(".in","r",stdin);
		// freopen(".out","w",stdout);
        _getcwd(cwd,256);
		for(int i=0;i<256;i++){
			if(cwd[i]==':') break;
			q+=cwd[i];
		}
		GetUserName(username,&cache);
		string path=q+":\\need";
		if(argc>1)
			path=argv[1];
		printf("Do you need Mingw?(1/0)");
		scanf("%d",&in);
		if(in) run({"C:\\Windows\\System32\\xcopy.exe \"",q,":\\mingw\" \"D:\\mingw\" /S /I"});
		if(system("cd \"Sublime Text\"")){
			run({"cd .."});
			run({"rmdir \"Sublime Text\""});
		}
		run({"C:\\Windows\\System32\\xcopy.exe \"",path,"\\Sublime Text\" \"C:\\Users\\",username,"\\AppData\\Roaming\" /S /I"});
		run({"pause"});
		return 0;
	}
}
int main(int argc,char ** argv){
	return estidi::main(argc,argv);
}
