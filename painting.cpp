//
// Created by Ryan on 11/17/2015.
//

#include <c++/iostream>
#include "painting.h"

painting::painting(int newId, string newTitle, string newArtist,char* newImage) {
    id = newId;
    title = newTitle;
    artistName = newArtist;
    image = newImage;
}

void painting::display() {
    cout<<"ID:"<<id<<endl;
    cout<<"Artist:"<<artistName<<endl;
    cout<<"Title:"<<title<<endl;
}

int painting::getId() { return id; }
void painting::setId(int newId) { id = newId; }

string painting::getName() { return artistName;}
void painting::setName(string newName) {artistName = newName;}

string painting::getTitle() {return title; }
void painting::setTitle(string newTitle) {title = newTitle; }
char* painting::getImage() {return image; }
void painting::setImage(char *newImage) { image = newImage; }
