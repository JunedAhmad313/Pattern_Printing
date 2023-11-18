#include<iostream>
using namespace std;

int main(){

    system("clear");
    
    int n=4;

    for(int i =1; i<=2*n; i++){

        for(int j=1; j<=2*n; j++){

            if(i<=n && (j<=n-i+1 || j >= n+i)){

               cout<<"*"<<" ";
            }else{
               cout<<"  "; 
            } 
        }
        
      for(int j=1; j<=2*n; j++){

        if(i > n && (j<=i-n || j >= 2*n -i +n+1)){

               cout<<"*"<<" ";
            } else{
               cout<<"  "; 
            }
         }
    
        cout <<endl;

         }

        
    return 0;
    
        
}
