#include <iostream>
using namespace std;
void replacex(char s[],char x,char y){
    if (s[0]=='\0')
    {
        return ;
    }
    if (s[0]!=x)
    {
        replacex(s+1,x,y) ;
    }
    else
    { s[0]=y;
        replacex(s+1,x,y);
    }
    
}
int main(){
char str[100];
cin>>str;
char x;
cin>>x;
char y;
cin>>y;

replacex(str,x,y);
cout<<str<<endl;
}