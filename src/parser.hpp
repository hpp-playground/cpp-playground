#include <string>
#include <vector>

class Parser {
 public:
  int fileLength;
  std::vector<std::string> instructure;

  Parser(std::string filename) {
    this->fileLength = 10;
    this->instructure.push_back(filename);
  }
};