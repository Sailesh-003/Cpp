#include <iostream>
using namespace std;

class Arithmetic{
    private:
    int a,b;
    
    public:
    
    //Default Constructor
    Arithmetic(){
        a = 100;
        b = 10;
    }
    
    //Member functions
    int add() { return a + b; }
    int sub() { return a - b; }
    int mul() { return a * b; }
    int divi() { return a / b; }
    int mod() { return a % b; }
};

class Relational{
    private:
    int a,b;
    
    public:
    
    //Default Constructor
    Relational(){
        a = 100;
        b = 10;
    }
    
    //Member functions
    void greater();
    void lesser();
    void great_or_equal();
    void less_or_equal();
    void equal_equal();
    void not_equal();
};

void Relational::greater()
{
    if(a>b)
    cout<<"True"<<endl;
    
    else
    cout<<"false"<<endl;
}

void Relational::lesser()
{
    if(a<b)
    cout<<"True"<<endl;
    
    else
    cout<<"false"<<endl;
}

void Relational::great_or_equal()
{
    if(a>=b)
    cout<<"True"<<endl;
    
    else
    cout<<"false"<<endl;
}

void Relational::less_or_equal()
{
    if(a<=b)
    cout<<"True"<<endl;
    
    else
    cout<<"false"<<endl;
}

void Relational::equal_equal()
{
    if(a==b)
    cout<<"True"<<endl;
    
    else
    cout<<"false"<<endl;
}

void Relational::not_equal()
{
    if(a!=b)
    cout<<"True"<<endl;
    
    else
    cout<<"false"<<endl;
}

class Bitwise{
    private:
    int a,b;
    
    public:
    
    //Default Constructor
    Bitwise(){
        a = 100;
        b = 10;
    }
    
    //Member functions
    int B_and();
    int B_or();
    int B_xor();
    void B_not();
};

int Bitwise::B_and()
{
    return a&b;
}

int Bitwise::B_or()
{
    return a|b;
}

int Bitwise::B_xor()
{
    return a^b;
}

void Bitwise::B_not()
{
    cout<<~a<<","<<~b<<endl;
}

class Logical{
    private:
    int a,b;
    
    public:
    
    //Default Constructor
    Logical(){
        a = 100;
        b = 10;
    }
    
    //Member functions
    void L_and();
    void L_or();
    void L_not();
};

void Logical::L_and()
{
    if((a>b)&&(b<a))
    cout<<"True"<<endl;
    
    else
    cout<<"False"<<endl;
}

void Logical::L_or()
{
    if((a>b)||(b<a))
    cout<<"True"<<endl;
    
    else
    cout<<"False"<<endl;
    
}

void Logical::L_not()
{
    if(a!=b)
    cout<<"True"<<endl;
    
    else
    cout<<"False"<<endl;
}

class incr_decr{
    private:
    int a,b;
    
    public:
    
    //Default Constructor
    incr_decr(){
        a = 100;
        b = 10;
    }
    
    //Member functions
    void increment();
    void decrement();
};

void incr_decr::increment()
{
    cout<<++a<<","<<++b<<endl;
}


void incr_decr::decrement()
{
    cout<<--a<<","<<--b<<endl;
}

int main()
{
    {
        Arithmetic obj;
        
        cout<<"Arithmetic operators"<<endl;
        cout<<obj.add()<<endl;
        cout<<obj.sub()<<endl;
        cout<<obj.mul()<<endl;
        cout<<obj.divi()<<endl;
        cout<<obj.mod()<<endl;
    
        cout<<endl;
    }
    
    {
        Relational obj;
        
        cout<<"Relational operators"<<endl;
        obj.greater();
        obj.lesser();
        obj.great_or_equal();
        obj.less_or_equal();
        obj.equal_equal();
        obj.not_equal();
        
        cout<<endl;
    }
    
    {
        Bitwise obj;
        
        cout<<"Bitwise operators"<<endl;
        cout<<obj.B_and()<<endl;
        cout<<obj.B_or()<<endl;
        cout<<obj.B_xor()<<endl;
        obj.B_not();
        
        cout<<endl;
    }
    
    {
        Logical obj;
        
        cout<<"Logical operators"<<endl;
        obj.L_and();
        obj.L_or();
        obj.L_not();
        
        cout<<endl;
        
    }
    
    {
        incr_decr obj;
        
        cout<<"increment & Decrement operators"<<endl;
        obj.increment();
        obj.decrement();
        
        cout<<endl;
    }
}
