#include<iostream>
using namespace std;

class Student{
    public:
    int rollNo;
    string name;
    string branch;

    Student(){
        cout<<"Constructor\n";
    }

    ~Student(){
        cout<<"Distructor\n";
    }
};

class Bank{

    string name ="default";
    int balance=0;

    public:
    // encriptred by password
    void setValue(string names,int amount ,string password){
        if(password=="123456"){
            name=names;
            balance=amount;
        }
    
    }
    void deposite(int amount){
        balance+=amount;
        cout<<amount<<" rupees deposited";
        check_balance();
    }
    void check_balance(){
        cout<<"Your balance is : "<<this->balance<<endl;
    }

    void withdrawl (int b){
        balance-=b;
        cout<<b<<" rupees withdraled.";
        this->check_balance();
    }
};

class Car{
    int mileage;
    int cost;

    public:
    Car(int m, int c){
        mileage=m;
        cost=c;
        
    }
    void increase_milage(){
        mileage+=2;
    }

    void print(){
        cout<<"mileage is : "<<mileage<<endl;
        cout<<"cost is : "<<cost<<endl;
    }
};
int main(){

    //for class Student
/*
    Student obj;
    obj.rollNo=1;
    obj.name="Shreya";
    obj.branch="CSE";
    cout<<obj.rollNo<<" ";

*/

    //for class Bank
/*
    Bank obj1;
    obj1.setValue("Shreya",6000,"123456");
    obj1.check_balance();
    obj1.withdrawl(100);
    obj1.deposite(1000);
*/

    //for class Car
/*
    Car c(30,4000000);
    c.print();
    // cout<<sizeof(c);  //8
*/

    //creating pointer
/*
    Student* s= new Student();
    s->name = "Shreya";
    (*s).rollNo=1;
    cout<<s->name<<" "<<s->rollNo;
 */

    //destructor
    Student s;

    Student* p = new Student;
    delete p;



    return 0;
}