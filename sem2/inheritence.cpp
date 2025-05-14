# include <iostream>
using namespace std;

class Employee{

    public:
        int id;
        float salary;
        Employee(int inpId){

            id = inpId;
            salary = 34;

        }

        Employee(){}


    
};

class softwareDeveloper : public Employee{
    public:
        
        softwareDeveloper(int inputID) {
            id = inputID;
        }
        int income = 4594873;

        void getId(){
            cout<<id<<endl;
        }
    

};


int main(){
    Employee Sai(1) , Parth(2);
    cout<<Sai.salary<<endl;
    cout<<Parth.salary<<endl;
    softwareDeveloper saii(3);
    cout<<saii.id<<endl;
    cout<<saii.income<<endl;
    saii.getId();


}