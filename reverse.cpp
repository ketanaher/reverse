#include<iostream>
#include<string>
using namespace std;
void Reversestring(string str){
    for(int i = str.length()-1;i >= 0;i--){
        cout << str[i];
    }
}
int main(){
    string str;
    cout << "Enter the string:";
    getline(cin,str);
    Reversestring(str);
    return 0;
}