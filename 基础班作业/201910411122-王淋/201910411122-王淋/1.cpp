#include <iostream>
using namespace std;
int main()
{
    int height;
    cin>>height;
    const int a = 12;
    cout<<"你的身高为: "<<height / 12<<" feet "<<height % 12<<" inches"
	<<endl;
    return 0;
}

