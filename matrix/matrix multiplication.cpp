#include <iostream>
using namespace std;
int main()
{
    cout<<"Matrix Multiplication";
    int a[3][3] , b[3][3] , c[3][3]; // three martix
    int i,j,k,sum; //for loops and initializing the sum for/as temp
    //enter the values for the first matrix
    cout<<"Enter values for the matrix 1 \n";
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            cin>>a[i][j];
        }
    }
    //enter the value for second matrix
    cout<<"\nnow for matrix 2 \n";
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            cin>>b[i][j];
        }
    }
    //for result matrix 
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            //a new loop spotted we need to perform row and column operation so we will need a new loop
            for(k=0;k<3;k++){
                 sum += a[i][k] * b[k][j];//we have perform and stored the value in the sum variable for temp pupose
            }
            c[i][j] = sum;//that is stored back to the third matrix this can also be done directly without using sum variable
            sum = 0;//making it zero so that in next itration the value is reset
            
        }
    }
    //now lets print it out 
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            cout<<c[i][j];
            cout<<"|";
        }
        cout<<"\n";
    }
    return 0;
}
