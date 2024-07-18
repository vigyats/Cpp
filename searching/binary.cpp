#include <iostream>
using namespace std;
int binary(int a[],int n,int key){//func
    int s =0;//start point
    int e =n;//end point
    int mid;//for mid
   while(s<=e){//the start should not go after end
       mid = (s+e)/2;//mid
       if(key == a[mid]){
           return mid;//if our value is in mid return it..
       }
       else if(a[mid]>key){
           e = mid-1;//if mid value is more than end point will be mid-1
       }
       else{
           s = mid+1;//else mid value is less start with mid+1 
       }
   }
   return -1;//if value is not present in the array return -1...
    
}
//main code
int main()
{
    //binary searching
    //we will need an array and its size letss gooo...
    int a[5] = {1,2,3,4,5};
    int n = sizeof(a)/sizeof(int);//we need size of array
    int key;//we need to find
    cout<<"enter the key: ";
    cin>>key;
    cout<< binary(a,n,key);//lets call this func with some parameters(arguments)
}
//remember binary search only works on sorted array if array is not sorted it wont work then use one sorting algorithm or use linear search
