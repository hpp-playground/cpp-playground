#include "parser.hpp"

#include <iostream>
#include <string>
#include <vector>

int main(void) {
  std::string filename = "file";
  Parser parser(filename);

  printf("%s %d", (parser.instructure)[0].c_str(), parser.fileLength);
  return 0;
}