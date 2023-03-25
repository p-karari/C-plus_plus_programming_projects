#include <iostream>

using namespace std;

class Movie
{
private:
    string rating;
public:
    string title;
    string director;


    Movie(string Title , string Director , string Rating)
    {
         title = Title;
        director = Director;
        setRating(Rating);
    }

    void setRating(string Rating)
    {
        if(Rating == "PG-13" || Rating == "R" || Rating == "NR")    //setters
        {
            rating = Rating;
        }
        else{rating = "NR";}
    }

    string getRating()
    {
        return rating;      //getters
    }

};

int main()
{


    Movie movie1("Avengers" , "Joss Whedon" , "PG-15");

    cout << movie1.getRating() ;


    return 0;
}
