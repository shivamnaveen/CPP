#include<iostream>
using namespace std;
int main(){
    int no;
    jump:
    cin>>no;
    if(no==4){
        cout<<"Well guessed!"<<'\n';
    }else{
        goto jump;
    }
    return 0;
}
