#include <iostream>
using namespace std;

namespace Assignment{
    int x = 100;
    int y = 10;
}

using namespace Assignment;


class Arithmetic{
    public:
    int add(int a,int b) { return a + b; }
    int sub(int a,int b) { return a - b; }
    int mul(int a,int b) { return a * b; }
    int divi(int a,int b) { return a / b; }
    int mod(int a,int b) { return a % b; }
};

class Relational{
    public:
    void greater(int ,int );
    void lesser(int ,int );
    void great_or_equal(int ,int );
    void less_or_equal(int ,int );
    void equal_equal(int ,int );
    void not_equal(int ,int );
};

void Relational::greater(int a,int b)
{
    if(a>b)
    cout<<"True"<<endl;
    
    else
    cout<<"false"<<endl;
}

void Relational::lesser(int a,int b)
{
    if(a<b)
    cout<<"True"<<endl;
    
    else
    cout<<"false"<<endl;
}

void Relational::great_or_equal(int a,int b)
{
    if(a>=b)
    cout<<"True"<<endl;
    
    else
    cout<<"false"<<endl;
}

void Relational::less_or_equal(int a,int b)
{
    if(a<=b)
    cout<<"True"<<endl;
    
    else
    cout<<"false"<<endl;
}

void Relational::equal_equal(int a,int b)
{
    if(a==b)
    cout<<"True"<<endl;
    
    else
    cout<<"false"<<endl;
}

void Relational::not_equal(int a,int b)
{
    if(a!=b)
    cout<<"True"<<endl;
    
    else
    cout<<"false"<<endl;
}

class Bitwise{
    public:
    int B_and(int ,int );
    int B_or(int ,int );
    int B_xor(int ,int );
    int B_not(int );
};

int Bitwise::B_and(int a,int b)
{
    return a&b;
}

int Bitwise::B_or(int a,int b)
{
    return a|b;
}

int Bitwise::B_xor(int a,int b)
{
    return a^b;
}

int Bitwise::B_not(int a)
{
    return ~a;
}

class Logical{
    public:
    void L_and(int ,int );
    void L_or(int ,int );
    void L_not(int ,int );
};

void Logical::L_and(int a,int b)
{
    if((a>b)&&(b<a))
    cout<<"True"<<endl;
    
    else
    cout<<"False"<<endl;
}

void Logical::L_or(int a,int b)
{
    if((a>b)||(b<a))
    cout<<"True"<<endl;
    
    else
    cout<<"False"<<endl;
    
}

void Logical::L_not(int a,int b)
{
    if(a!=b)
    cout<<"True"<<endl;
    
    else
    cout<<"False"<<endl;
}

class incr_decr{
    public:
    int increment(int );
    int decrement(int );
};

int incr_decr::increment(int a)
{
    return ++a;
}


int incr_decr::decrement(int a)
{
    return --a;
}

int main()
{
    {
        Arithmetic obj;
        
        cout<<"Arithmetic operators"<<endl;
        cout<<obj.add(x,y)<<endl;
        cout<<obj.sub(x,y)<<endl;
        cout<<obj.mul(x,y)<<endl;
        cout<<obj.divi(x,y)<<endl;
        cout<<obj.mod(x,y)<<endl;
    
        cout<<endl;
    }
    
    {
        Relational obj;
        
        cout<<"Relational operators"<<endl;
        obj.greater(x,y);
        obj.lesser(x,y);
        obj.great_or_equal(x,y);
        obj.less_or_equal(x,y);
        obj.equal_equal(x,y);
        obj.not_equal(x,y);
        
        cout<<endl;
    }
    
    {
        Bitwise obj;
        
        cout<<"Bitwise operators"<<endl;
        cout<<obj.B_and(x,y)<<endl;
        cout<<obj.B_or(x,y)<<endl;
        cout<<obj.B_xor(x,y)<<endl;
        cout<<obj.B_not(x)<<","<<obj.B_not(y)<<endl;
        
        cout<<endl;
    }
    
    {
        Logical obj;
        
        cout<<"Logical operators"<<endl;
        obj.L_and(x,y);
        obj.L_or(x,y);
        obj.L_not(x,y);
        
        cout<<endl;
        
    }
    
    {
        incr_decr obj;
        
        cout<<"increment & Decrement operators"<<endl;
        cout<<obj.increment(x)<<","<<obj.increment(y)<<endl;
        cout<<obj.decrement(x)<<","<<obj.decrement(y)<<endl;
        
        cout<<endl;
    }
}
