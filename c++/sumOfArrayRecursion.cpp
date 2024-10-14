#include<iostream>
using namespace std;
int getSum(int *arr , int  size){
    if(size == 0){
        return 0;
    }
    if(size == 1 ){

        return arr[0];
    }
    else{
        return (getSum(arr+1,size-1) + *(arr));
    }
}
int main(){
   int arr[5]={2,4,5,6,7};
   int size = 5;
   int sum = getSum(arr,size);
   cout<<"The Sum of the array is "<< "  " << sum  <<endl;
   return 0;
}
