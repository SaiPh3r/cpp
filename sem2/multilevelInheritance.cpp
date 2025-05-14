# include <iostream>
using namespace std;

class student{
    protected:
        int roll_no;
    public:
        void set_no(int);
        void get_no();

};
void student :: set_no(int r){
    roll_no = r;

}
void student :: get_no(){
    cout<<" "<<roll_no<<endl;
}

class exam : public student{
    protected:
        float maths;
        float physics;
    public:
        void set_marks(float,float);
        void get_marks(void);
    
};
void exam:: set_marks(float m1, float p1){
    maths = m1;
    physics = p1;


}
void exam:: get_marks(){
    cout<<"the marks obtained in maths and physics are"<<maths<<"and"<<physics<<endl;
    

}

class result : public exam{
    float percentage;
    public:
        void display(){
            get_no();
            get_marks();
            
            cout<<"your percentage is "<<(maths + physics)/2<<endl;
        }
};

int main(){
    result sai;
    sai.set_no(79);
    sai.set_marks(99,87);
    sai.get_marks();
    sai.get_no();
    sai.display();
    return 0;
}