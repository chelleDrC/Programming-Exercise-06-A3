#include <iostream>
#include <list>
#include "Person.h"

using namespace std;

class Movie: public Person { //Inherited from Person.h
    private: 
        string Title;
        string Synopsis;
        string Rating;
        list<string> Genre;
        list<Person> Directors;
        list<Person> Actors;
    public:

        //Constructor
        Movie(string newTitle, string newSynopsis, string newRating, 
        list<string> newGenre, list<Person> newDirectors, list<Person> newActors) {
        Title = newTitle;
        Synopsis = newSynopsis;
        Rating = newRating;
        Genre = newGenre;
        Directors = newDirectors;
        Actors = newActors;
    }

        //SET METHODS
        void setTitle(string newTitle){
            Title = newTitle;
        }
        void setSynopsis(string newSynopsis){
            Synopsis = newSynopsis;
        }
        void setRating(string newRating){
            Rating = newRating;
        }
        void setGenre(list<string> newGenre){
            Genre = newGenre;
        }
        void setDirectors(list<Person> newDirectors){
            Directors = newDirectors;
        }
        void setActors(list<Person> newActors){
            Actors = newActors;
        }

        //GET METHODS
        string getTitle(){
            return Title;
        }
        string getSynopsis(){
            return Synopsis;
        }
        string getRating(){
            return Rating;
        }
        list<string> getGenre(){
            return Genre;
        }
        list<Person> getDirectors(){
            return Directors;
        }
        //Method for Printing the Inputs
        void printInputs(string Title, string Synopsis, string Rating, list<string> Genre, list<Person> Directors, list<Person> Actors){
            int i = 0;//count
            
            cout << endl << "Enter the attributes of the Movie given below: " << endl;
            cout << "Title: " << Title << endl;
            cout << "Synopsis: " << Synopsis << endl;
            cout << "Rating: " << Rating << endl;
            cout << endl << "Genre: " << endl;
            for (string g : Genre) {
                i++; //Increment the index
                cout << i << ". " << g << endl;
            }
            cout << endl; i = 0; //Reset the index
            cout << "Directors: " << endl;
            for (Person d : Directors) {
                i++; //Increment the index
                cout << i << ". " << d.getFname() << " " << d.getLname() << ", Gender: " << d.getGender() << endl;
            }
            cout << endl; i = 0; //Reset the index
            cout << "Actors: " << endl;
            for (Person a : Actors) {
                i++; //Increment the index
                cout << i << ". " << a.getFname() << " " << a.getLname() << ", Gender: " << a.getGender() << endl;
            }
        }
};