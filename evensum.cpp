#include<iostream>
using namespace std;
int main(){
    int n, sum=0;
    cout<<"input n"<<endl;
    cin>>n;
    cout<<"\n";
    while (n>0)
    {
        if(n%2==0){
            sum+=n;
        }
        n--;
    }
    cout<<"the sum is="<<sum;
    return 0;
}