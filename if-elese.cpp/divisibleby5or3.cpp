#include<iostream>
using namespace std;
int main(){ 
cout<<"enter a number";
int n;
cin>>n;
if(n%5==0 || n%3==0){
    cout<<"the number is divisible by 3 or 5";

}
else{
    cout<<"the number is not divisible by 3 or 5";
}
}