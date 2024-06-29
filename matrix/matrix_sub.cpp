#include <iostream>
using namespace std;
//matrix operations {-}
int main()
{
    //same as sum just use - operation
    int a[3][3],b[3][3],substraction[3][3]; //we will need 3 matrix so that we initialize 2 and 1 will be for substraction
    //to take values from user for first matrix
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<"enter values for matrix a["<<i+1<<j+1<<"]: ";
            cin>>a[i][j]; 
        }
    }
    cout<<"\n";
    //to take values from user for second matrix
     for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<"enter values for matrix a["<<i+1<<j+1<<"]: ";
            cin>>b[i][j]; 
        }
    }
    cout<<"\n\n substraction of matrix a and b is \n";
    //substraction and display
     for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            substraction[i][j] = a[i][j] - b[i][j];
            cout<<substraction[i][j];
            cout<<"|";
        }
        cout<<"\n";
    }
    //you can also write the code to display matrix a - matrix b with the same logic
    return 0;
}