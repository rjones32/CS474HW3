//
// Created by Ryan on 11/17/2015.
//

#ifndef CS474HW3_PAINTING_H
#define CS474HW3_PAINTING_H

#include <string>
using namespace std;
class painting {
protected:
    painting(int newId,string newTitle,string newArtist,char* images);
    ~painting();

    void setId(int newId);
    int getId();

    void setTitle(string newTitle);
    string getTitle();

    void setName(string newName);
    string getName();
    void setImage(char* newImage);
    char* getImage();

    void display();

private:
    int id;
    string title;
    string artistName;
    char* image;
};


#endif //CS474HW3_PAINTING_H
