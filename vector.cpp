
class Human{
protected:
    string name;
    int age;
public:
    Human(){
        name = "";
        age = 0;
    }
    Human(string name, int age) {
        this->name = name;
        this->age = age;
    }

    string getName() {
        return name;
    }

    void setName(string name) {
        this-> name = name;
    }

    void setAge(int age) {
        this-> age = age;
    }

    int getAge(){
        return age;
    }

    void print(){
        cout<<"Name: "<<name<<" Age: "<<age<<endl;
    }
};
class Employee : public Human{
public:
    int salary ;
    Employee(){
        salary = 1200;
    }

};