 #include<iostream>
 using namespace std;
 int main()
 {
    float a,b,c;
    char op;
    int choice;
    while(1)
    {
        cout<<"Enter : 1 to start calculator  &\n        0 to end the calculations "<<endl;
        cin>>choice;
        if(choice==0)
        break;
        cout<<"Enter 2 values and the operation to be performed b/w them (in format eg. 'a+b') "<<endl;
        cin>>a>>op>>b;
        switch(op)
        {
            case '+':
                c=a+b;
                cout<<a<<"+"<<b<<"="<<c<<endl;
                break;
            case '-':
                c=a-b;
                cout<<a<<"-"<<b<<"="<<c<<endl;
                break;
            case '*':
                c=a*b;
                cout<<a<<"*"<<b<<"="<<c<<endl;
                break;
            case '/':
                c=a/b;
                cout<<a<<"/"<<b<<"="<<c<<endl;
                break;
            default:
                cout<<"Invalid Choice"<<endl;
                break;
        }
    }
    return 0;
 }