#include<bits/stdc++.h>
using namespace std;

class Shape{
    public:
    virtual void draw()=0;
};
class Rectangle : public Shape{
    public:
    void draw() override{
     cout<<"Inside rectangle :: draw() method."<<endl;
    }
};

class Square : public Shape{
    public:
    void draw() override{
        cout<<"Inside square::draw() method."<<endl;
    }
};


int main(){

}