#include <iostream>
#include "Song.h"

Song::Song(std::string newTitle, std::string newArtist)
  : title(newTitle), artist(newArtist) {}

Song::~Song() {
  std::cout << "Gooodbye " << title << "\n";
}

std::string Song::getTitle() {
  return title;
}

std::string Song::getArtist() {
  return artist;
}