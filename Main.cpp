#include <iostream>
using namespace std;

int main() {
    double n1,n2;
    char answer;
    int continueRunning = 1;
    char op;
    while (continueRunning == 1) {
    cin>>n1>>op>>n2;
    switch(op){
        case '+':cout<<n1+n2;break;
        case '-':cout<<n1-n2;break;
        case '*':
        case 'x':
        case 'X':cout<<n1*n2;break;
        case '/':cout<<n1/n2;break;
        case '%':cout<<(n2*(n1/100));break;
    }
    cout<<endl<<"If you would like to continue, type another calculation, if you would like to end the program, type n."<<endl;
    cin>>answer;
    if (answer == 'n'){
        continueRunning = 0;
    }
    }
}
