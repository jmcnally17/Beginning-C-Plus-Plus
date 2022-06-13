#include <iostream>
#include "Song.h"

int main() {
  Song enterSandman("Enter Sandman", "Metallica");
  std::cout << enterSandman.getTitle() << "\n";
  std::cout << enterSandman.getArtist() << "\n";
}