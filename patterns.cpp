#include <iostream>
using namespace std;

void pat1(int n){
    for(int i=0;i<=n;i++){
        for(int j=0;j<=n;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
void pat2(int n){
    for(int i=1;i<=n;i++){
        for(int j=0;j<i;j++){
            cout << "*";
        }
        cout<<endl;
    }
}
void pat3(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout << j;
        }
        cout<<endl;
    }
}
void pat4(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout << i;
        }
        cout<<endl;
    }
}
void pat5(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i+1;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
void pat6(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i+1;j++){
            cout<<j;
        }
        cout<<endl;
    }
}
void pat7(int n){
    for(int i=0;i<n;i++){
        //space
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }
        //star
        for(int j=0;j<2*i+1;j++){
            cout<<"*";
        }
        //space
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }
        cout<<endl;
    }
}
void pat8(int n){
    for(int i=0;i<n;i++){
        //space
        for(int j=0;j<i;j++){
            cout<<" ";
        }
        //star
        for(int j=0;j<2*n-(2*i+1);j++){
            cout<<"*";
        }
        //space
        for(int j=0;j<i;j++){
            cout<<" ";
        }
        cout<<endl;
    }

}


void pat10(int n){
    for(int i=0;i<2*n-1;i++){
        int stars = i;
        if(i>n){
            stars = 2*n-i;
        }
        for(int j=0;j<stars;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
int main(){
   pat10(5);
}