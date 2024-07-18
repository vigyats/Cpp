#include <iostream>
using namespace std;
int main()
{
    //add sum?
    int a[5] = {1,2,3,4,5}; //sample array
    cout<<"enter a value: ";
    int sum;
    cin>>sum;
    for(int i=0;i<4;i++){
        for(int j=i+1;j<5;j++){
            if(a[i]+a[j]==sum){
                cout<<a[i];
                cout<<a[j]<<endl;
            }
        }
    }

    return 0;
}
