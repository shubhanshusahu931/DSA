#include <iostream>
#include<string>
#include<cstring>
using namespace std;

void revstr(string &s, int start ,int end ){
    if(start>= end)return;
    swap(s[start],s[end]);
    revstr(s,start+1,end-1);
}

int main() {
    string s;
    cout<<"enter any string : ";
    cin>>s;
    int len = s.length(); 
    revstr(s,0,len-1);
    cout<<"reverse of string is : "<< s;
    return 0;
}