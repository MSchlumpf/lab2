#include<iostream>
using namespace std;

int main(){
int N=100;
double r=0.1;
double x=0.5;

for(r=0.1;r<4;r+=0.01){
x=0.5;

for(int i=0;i<N;i++){
x=x*r*(1-x);

if (i>19){
  cout << r <<" "<< x <<endl;}  
}
}
return 0;
}