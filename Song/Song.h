#include <string>

class Song {
  std::string title;
  std::string artist;

public:
  Song(std::string newTitle, std::string newArtist);
  ~Song();
  std::string getTitle();
  std::string getArtist();
};