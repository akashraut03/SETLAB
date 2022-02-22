#include <iostream>
#define M 10 
using namespace std;
template <class var> 
class stack 
{
    int top ;
    var stk[M];
    public:
        stack(){top=-1;}
        void push(int ch)
        {
            if(top==M-1)
                cout<<"\n!!!!!!!!!!Overflow!!!!!!!!!";
            else
            {
                stk[++top]=ch ;
                cout<<top ;
        	}
        }
        var pop()
        {
            if(top==-1)
                cout<<"\n!!!!!!!Underflow!!!!!!";
            else
                return stk[top--] ;
        }
        void display()
        {
            cout<<"\nStack data:";
            for(int i=0;i<top;i++)
                cout<<" "<<stk[i];
        }
};
int main()
{
    stack <int> s;
    char ch ;
    int d,opt;
    cout<<"\nInteger stack" ;
    while(1)
    {
        cout<<"\n1.push\n2.pop\n3.display:";
        cout<<"\nEnter option:" ;
        cin>>opt;
        if(opt>3)
            break ; 
        switch (opt)
        {
            case 1:
                cout<<"\nEnter data:";
                cin>>d;
                s.push(d);
                break ;
            case 2:    
                cout<<"\nPopped element:"<<s.pop();
                break ;
            case 3:
                s.display();
                break ;
        }   
    }  
    cout<<"\nCharacter stack\n" ;
    stack <char>s2;
    while(1)
    {
        cout<<"\n1.push\n2.pop\n3.display:";
        cout<<"\nEnter option:" ;
        cin>>opt;
            if(opt==1)
            {
                cout<<"\nEnter data:";
                cin>>ch;
                s2.push(ch);
            }    
            if(opt==2)
                cout<<"\nPopped element:"<<s2.pop();
            if(opt==3)
                s2.display();
            if(opt>3)
                break ;    
    }
    return 0;
}


