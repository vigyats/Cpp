#include <iostream>
using namespace std;
//to initialize matrix 2-D array
int main()
{
    int matrix[3][3]; //a matrix
    //now we need a for loop to take the input but since we are in 2d array we will take 2 loop nested ij
    //in maths we have  a[11],a[12].....a[ij] just like that here we need one i loop and one j loop
    
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<"enter values for matrix["<<i+1<<j+1<<"]: "; // i+1 and j+1 for better indexing :)
            cin>>matrix[i][j]; //you can initialize i and j above
        }
    }
//your matrix is ready now lets see how it looks
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<matrix[i][j]; //writing again is sooooo boring just copy paste from up and make it cout<< instead of cin
            cout<<"|";
        }
        cout<<"\n"; //now your matrix looks good
    }
    return 0;
}
