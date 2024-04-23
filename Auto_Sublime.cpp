#include<bits/stdc++.h>
#include<windows.h>
#include<direct.h>
using namespace std;
namespace estidi{
	int in;
    char cwd[256];
	string q="";
	void run(vector<string>vec,bool lei){
		string s="";
		for(int i=0;i<(int)vec.size();i++) s+=vec[i];
//		cout<<">"<<s<<endl;
		if(!lei) system(s.c_str());
		else chdir(s.c_str());
	}
	char username[256];
	DWORD cache=256;
	string qu;
	void debug(){cerr<<username<<' '<<q<<'\n';}
	int main(int argc,char ** argv){
		// freopen(".in","r",stdin);
		// freopen(".out","w",stdout);
        _getcwd(cwd,256);
		for(int i=0;i<256;i++){
			if(cwd[i]=='\0') break;
			q+=cwd[i];
		}
		qu=q[0];
		GetUserName(username,&cache);
		string path=q+"\\need";
//		if(argc>1)
//			path=argv[1];
		printf("Do you need Mingw?(1/0)");
		scanf("%d",&in);
		if(in) run({"C:\\Windows\\System32\\xcopy.exe \"",q,"\\mingw\" \"D:\\mingw\" /S /I"},0);
		run({"C:\\Users\\",username,"\\AppData\\Roaming"},1);
		if(!system("cd \"Sublime Text\" 2>nul")) run({"rmdir \"Sublime Text\" /S /Q"},0);
		run({q},1);
		run({"C:\\Windows\\System32\\xcopy.exe \"",path,"\" \"C:\\Users\\",username,"\\AppData\\Roaming\" /S /I"},0);
		run({"pause"},0);
		return 0;
	}
}
int main(int argc,char ** argv){
	return estidi::main(argc,argv);
}
