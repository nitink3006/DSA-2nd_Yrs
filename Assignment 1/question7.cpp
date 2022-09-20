#include <iostream>
#include <string>
using namespace std;

int main() {
    string a,b;
    cin>>a>>b;
    int l1=a.size();
    int l2=b.size();
    cout<<l1<<" "<<l2<<endl;
    string c=a+b;
    cout<<c<<endl;
  
    int i=0;
        string s1=a;
        char k=s1[i];
        string s2=b;
        char d=s2[i];
        s1[0]=s2[0];
        string e=s1;
        cout<<e<<" ";
        i++;

    int j=0;
        string m1=b;
        char g=m1[j];
        string m2=a;
        char h=m2[j];
        m1[0]=m2[0];
        string f=m1;
        cout<<f<<" ";
        j++;
  
    return 0;
}
