#include<iostream>
using namespace std;
int power(int a,int n){
    for(int i=1;i<n;i++)
        a *= a;
    return a;
}
bool fis(int *a,int *b,int *c){
    return power(*a,2)+power(*b,2)==power(*c,2);
}
bool checkAll(int *a,int *b,int *c){
    if(fis(a,b,c)==1 || fis(a,c,b)==1 || fis(b,c,a)==1)
        return 1;
    else
        return 0;
}
int main() {
    int a,b,c;
    cin>>a;
    cin>>b;
    cin>>c;
    if(checkAll(&a,&b,&c)){
        cout<<"Yes";
    }else{
        cout<<"No";
    }
}
