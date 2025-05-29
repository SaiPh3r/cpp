//g++ -std=c++11 virtualExamples.cpp -o a.out && ./a.out
#include <iostream>
using namespace std;


class Youtube{
    protected:
        string title;
        float rating;

    public:
        Youtube(string t, float r) {
            title = t;
            rating = r;
        }
        void virtual display()=0; // this = 0 makes this pure vrtual function .
        //pure virtual function means that if display is not defined in derived class it will throw an error
        //so is is must to make display() in derived class.
        

};

class YoutubeVid : public Youtube{
    int length;
    public:
        YoutubeVid(string t, float r, float vl): Youtube(t,r){
            length = vl;
        }
        void display(){
            cout<<"The tittle of this video is: "<<title<<endl;
            cout<<"The rating of this video is: "<<rating<<endl;
            cout<<"The length of this video is: "<<length<<"minutes"<<endl;
        }

};

class YoutubeText : public Youtube{
    int words;
    public:
        YoutubeText(string t, float r, int word):Youtube(t,r){
            words = word;
        }

        void display(){
            cout<<"The tittle of this text is: "<<title<<endl;
            cout<<"The rating of this text is: "<<rating<<endl;
            cout<<"The length of the words is: "<<words<<"words"<<endl;
            
        }

};


int main(){
    string title;
    float rating , length , words;

    title = "Django video";
    rating = 4.7;
    length = 10;
    words = 347;


    YoutubeVid DjangoVid(title,rating,length);
    // DjangoVid.display();

    YoutubeText DjangoText(title, rating, words);
    // DjangoText.display();


    Youtube* pointer[2];
    pointer[0]= &DjangoVid;
    pointer[1] = &DjangoText;

    pointer[0]->display();
    pointer[1]->display();
    




    return 0;
}