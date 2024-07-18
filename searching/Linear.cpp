#include <iostream>
using namespace std;
int main()
{
    //linear searching
    //we need an array? yes
    int a[5]={1,2,3,4,5};//sample array
    //you can also take user inserted value
    int n = sizeof(a)/sizeof(int);//to find the length of array
    int i,key;//i for loop and key for key :)
    cout<<"enter key to find out: ";
    cin>>key;
    for(i=0;i<n;i++){
        if(a[i]==key){
            cout<<"the key "<<key<<" is present in "<<i<<" index of array"<<endl;
            /*array indexing starts from 0 if you want to start from 1 just replace i+1 with i
            but it will only change change for understanding actual indexing always starts from array[0] {0th index}*/
        }
    }

}
