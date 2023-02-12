#include<iostream>
#include <string>
using namespace std;

int main() {
    string str,temp;
    int sum=0;
    getline(cin,str);
    for(int i=0,j=0;j<3;i++){
        if(str[i]!=' '){
            temp+=str[i];
        }
        else{
            if(stoi(temp)==0 || stoi(temp)>=180){
                sum=0;
                break;
            }else{
                sum+=stoi(temp);
                temp="";
                j++;
            }
        }
    }
    if(sum == 180){
        cout << "Yes";
    }
    else{
        cout<<"No";
    }
}
