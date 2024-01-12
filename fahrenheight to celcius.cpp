#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"input n"<<endl;
    cin>>n;
    cout<<"\n";
    while (n>=0)
    {
        int fah=(n*9/5)+32;
        cout<<"when the temp in c is= "<<n<<endl;
        cout<<"the temp in fahrenheit is= "<<fah<<endl;
        cout<<"\n";
        n--;
    }
    return 0;
}