#include <iostream>

class Base
{
private:
    int i;
public:
    Base()
    {
        std::cout<<"Base default constructor is called"<<std::endl;
    }
    Base(int i)
    {
        std::cout<<"Base parametrized constructor is called"<<std::endl;
        this->i = i;
    }
    virtual void print()
    {
        std::cout<<"Base "<<std::endl;
    }

    void setI(int i)
    {
        this->i = i;
    }
    int getI()
    {
        return (this->i);
    }
};

class A : virtual public Base
{
private:
public:
    A():Base()
    {
        std::cout<<"A default constructor is called"<<std::endl;
    }
    A(int i):Base(i)
    {
        std::cout<<"A parametrized constructor is called"<<std::endl;
    }

    void print()
    {
        std::cout<<"A"<<std::endl;
    }
};

class B : virtual public Base
{
private:
public:
    B():Base()
    {
        std::cout<<"B default constructor is called"<<std::endl;
    }
    B(int i):Base(i)
    {
        std::cout<<"B parametrized constructor is called"<<std::endl;
    }
    virtual void print()
    {
        std::cout<<"B"<<std::endl;
    }
};

class C : public A, public B
{
private:
public:
    C():A(), B()
    {
        std::cout<<"C default constructor is called"<<std::endl;
    }
    C(int i):A(), B(i)
    {
        std::cout<<"C parametrized constructor is called"<<std::endl;
    }
    void print()
    {
        std::cout<<"C"<<std::endl;
    }
};


void p(int i)
{
    std::cout<<"printing i = "<<i<<std::endl;
}
int main()
{
    
}