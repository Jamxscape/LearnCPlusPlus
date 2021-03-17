#include <iostream>
using namespace std;
int main(){
    int i=1;
    int j=10;
    for(int k=0;k<300;k+=10)
    {
        cout<<"<li><a href="<<'"'<<i+k<<".html"<<'"'<<">"<<i+k<<"--"<<j+k<<"</a></li>"<<endl;
    }
}
