#include<iostream>
using namespace std;

int main(){

    system("clear");

    for(int row=1; row<=5; row++){
        for(int col=1; col<=5; col++){
            cout <<col*col<<" ";
        }
        cout <<endl;
    }
    return 0;

}