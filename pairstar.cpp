#include <iostream>
#include <string>
using namespace std;
int lengtharr(char str[]){
    int length=0;
    for (int i = 0;str[i]!='\0'; i++)
{
    length=length+1;
}
return length;
}
void pairstar(char str[]){
    if (str[0]=='\0')
    {
        return ;
    }
    if (str[0]!=str[1])
    {
        pairstar(str+1) ;
    }
    else
    { 
        for (int i = lengtharr(str); i>1; i--)
        {
            str[i]=str[i-1];
        }
        str[1]='*';
        pairstar(str+1);
    }
}

int main(){
char str[100];
cin>>str;
pairstar(str);
int length=lengtharr(str);
for (int i = 0;str[i]!='\0'; i++)
{
    cout<<str[i];
}

}