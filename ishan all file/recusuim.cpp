// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int getFib(int n)
{
    if(n==0)
    return 0 ;
    if(n==1)
    return 1;
    cout<<n<<endl;
    int ans =getFib(n-1)+getFib(n-2);
    return ans;
}

int main() {
    int n;
    cout<<"number"<<endl;
    cin>>n;
    cout<<"fabonico series"<<endl;
    getFib(n-1)+getFib(n-2);
 
}
