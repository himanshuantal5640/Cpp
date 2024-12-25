#include <iostream>
using namespace std;
#include<cstring>
void toggleCase(const char* sentance){
bool flag=true;
for(int i=0;sentance[i]!='\0';++i){
if(isalpha(sentance[i])){
if(flag){
putchar(toupper(sentance[i]));
}
else{
putchar(tolower(sentance[i]));
}
flag=!flag;
}
else{
cout<<sentance[i];
}
}
}

void camelCase(const char* sentance){
bool toUpper=false;
for(int i=0;sentance[i]!='\0';++i){
if(isalpha(sentance[i])){
if (toUpper){
putchar(toupper(sentance[i]));
toUpper=false;
}
else{
putchar(tolower(sentance[i]));
}
}
else{
toUpper=true;
}
}
//cout<<sentance;
}
int main()
{
char sentance[100];
cin.getline(sentance,100);
camelCase(sentance);
cout<<endl;
toggleCase(sentance);
return 0;
}