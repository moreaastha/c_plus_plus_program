#include<iostream>
using namespace std;

     int area(int radius){

         int ans;
         ans = 3.14*radius*radius;
         return ans;

     }

   void increment(int a){
         a++;
        
     }

 int main(){

     int a=5;

     increment(a);

      cout<<a;


 }
