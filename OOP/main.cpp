#include <iostream>
using namespace std;

class Student{
    private :
    float height = 5.8;

    public : 
    string name = "Dev";
    int age = 20;

    // Student(){
    //     cout << "Constructor called" << endl;
    // };

    Student(int h){
        cout << "Constructor called" << endl;
        cout << &height << endl;
        this -> height = h;
        cout << this << endl;
        cout << h << " " << height;
    };

    float getHeight() {
        return height;
    }

    float setHeight(int h){
        height = h;
        return h;
    }

    ~Student(){
        cout << "Destructor called" << endl;
    };

};

int main(){
    // static object allocation.
    Student coder(7.0);
    cout << coder.name << endl;
    cout << coder.age << endl;

    // Getter Function Used to Get Private class Acces. 
    cout << coder.getHeight() << endl;

    // Setter function Used to Set Private Class value.
    coder.setHeight(6.0);
    cout << coder.getHeight() << endl;
    
    // dynamic object allocation.
    Student *codor = new Student(7.0);
    

    cout << codor->name << " " << codor->age << " " << codor->getHeight() << " " << " " << endl;

    cout << (*codor).name << " " << (*codor).age << " " << (*codor).getHeight() << " " << " " << endl;

    delete codor;

    return 0;
}