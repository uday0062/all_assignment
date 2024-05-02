#include <bits/stdc++.h>
using namespace std;

int main()
{
    float ans;
    cout<<"___CALCULATOR___"<<endl;
    while(true){
        float a,b;
        char oper;
        cout<<"Select the operration you want to perform"<<endl<<"+ - / * "<<endl;
        cin>>oper;
        if( oper!='*' || oper!='/' || oper!='-' || oper!='+'){
            cout<<"please enter a valid operator"<<endl;
            continue;
        }
        cout<<"Enter first number=";
        cin>>a;
        cout<<"Enter second number=";
        cin>>b;
        if(oper=='+'){
            ans=a+b;
        }
        if(oper=='-'){
            ans=a-b;
        }

        if(oper=='/'){
            try{
            if(b==0){
                throw invalid_argument("Error occurred: cannot divide by 0");
            }
            else{
                ans=a/b;
            }  
            }
            catch(const invalid_argument& c){
                cout<<c.what()<<endl;
                continue;
            }
            
        }
        if(oper=='*'){
            ans=a*b;
        }
        cout<<"Answer="<<ans<<endl;
    }
    return 0;
}
