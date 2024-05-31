#include <string>
#include <iostream>
#include <list>
#include "Movie.h"


using namespace std;
//Function prototype
void displayProgDesc();//Display program Description
void Inputs(string* newtitle, string* newsynopsis, string* newrating);//Inputs for title, synopsis, rating
void InputsList(list<string>* genre, list<Person>* direc, list<Person>* actor);// Inputs for list like genre, directors and actors

//Main function
int main (){
    //Variable Declarations
    int size;

    string Title, Synopsis, Rating;
    list<string> Genre;
    list<Person> Directors;
    list<Person> Actors;

    //Function Calls
    displayProgDesc();//Program Description
    Inputs(&Title, &Synopsis, &Rating);//Accepting Information about the Movie
    InputsList(&Genre, &Directors, &Actors);//Accepting Information about the Genre
    //Constructor Calls
    Movie myMovie(Title, Synopsis, Rating, Genre, Directors, Actors);
    myMovie.printInputs(Title, Synopsis, Rating, Genre, Directors, Actors);//Printing Information about the Movie

    return 0;
}

//Program description
void displayProgDesc(){
    cout << "This program will accept Information about a Movie." << endl;
    cout << "Programmed by : Richelle de Arce" << endl;
}
// Inputs for non-list variables
void Inputs(string* newtitle, string* newsynopsis, string* newrating){
    cout << endl << "Enter the attributes of the Movie given below: " << endl;
    cout << "NOTE: SPACES ARE ALLOWED" << endl;

    cout << "Title: ";
    getline(cin, *newtitle);

    cout << "Synopsis: ";
    getline (cin, *newsynopsis);

    cout << "Rating: ";
    getline (cin, *newrating);
}
//Inputs for list variables
void InputsList(list<string>* genre, list<Person>* direc, list<Person>* actor){
    //Variable declaration
    string temp, fname, lname, gender;
    Person myPersontemp;
    int size;

    //Input GENRE
    cout << endl << "Enter the number of a Genre the movie have: ";
    cin >> size;

    for (int i = 0; i < size; i++){
        cout << "Genre: ";
        cin >> temp;
        genre->push_back(temp);
    }

    //Input DIRECTORS
    cout << endl << "Enter the number of a Directors the movie have: ";
    cin >> size; //Get size of the list
    //Loop to get the information of the directors
    for (int i = 0; i < size; i++){
        cin.ignore();//remove newline character  
        cout << i+1 << ". Director" << endl;

        cout << "First Name: ";//SET FIRSTNAME
        getline (cin, fname);
        myPersontemp.setFname(fname);

        cout << "Last Name: ";//SET LASTNAME
        getline (cin, lname);
        myPersontemp.setLname(lname);

        cout << "Gender (Male/Female): ";//SET GENDER
        cin >> gender;
        myPersontemp.setGender(gender);

        direc->push_back(myPersontemp);//Put PERSON object in the list
    }
    cin.ignore();//remove newline character

    //Input ACTORS
    cout << endl << "Enter the number of a Actors the movie have: ";
    cin >> size;
    //Loop to get the information of the actors
    for (int i = 0; i < size; i++){
        cout << i+1 << ". Actors" << endl;
        cin.ignore();//remove newline character

        cout << "First Name: ";
        getline (cin, fname);
        myPersontemp.setFname(fname);

        cout << "Last Name: ";
        getline (cin, lname);
        myPersontemp.setLname(lname);

        cout << "Gender: ";
        cin >> gender;

        myPersontemp.setGender(gender);

        actor->push_back(myPersontemp);
    }

}