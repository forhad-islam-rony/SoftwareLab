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


class ShapeFactory {
private:
    ShapeFactory() {}

public:
    static ShapeFactory& getInstance() {
        static ShapeFactory instance;
        return instance;
    }

    Shape* getShape(const std::string& shapeType) {
        if (shapeType.empty()) {
            return nullptr;
        }
        if (shapeType == "RECTANGLE") {
            return new Rectangle();
        } else if (shapeType == "SQUARE") {
            return new Square();
        }
        return nullptr;
    }

    ShapeFactory(const ShapeFactory&) = delete;
    ShapeFactory& operator=(const ShapeFactory&) = delete;
};


int main(){

}