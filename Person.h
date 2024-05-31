#include <iostream>

using namespace std;

class Person {
    private:
        string Fname;
        string Lname;
        string Gender;
    public:
        //Constructor
        Person (){}
        Person(string newFname, string newLname, string newGender){
            Fname = newFname;
            Lname = newLname;
        }

        //SET METHODS
        void setFname(string newFname){
            Fname = newFname;
        }
        void setLname(string newLname){
            Lname = newLname;
        }
        void setGender(string newGender){
            Gender = newGender;
        }

        //GET METHODS
        string getFname(){
            return Fname;
        }
        string getLname(){
            return Lname;
        }
        string getGender(){
            return Gender;
        }

};

