#include <iostream>

using namespace std;

void portListen() {
  int n;
  n = 0; // Staying true to ANSI C restrictions, even though this is C++ (welp)

  if (!n) {
    // Deliberate infinite loop
    // Ctrl+C is going to happen



  }


}

int main(int argc, char const *argv[]) {

  std::cout << "Network Messaging Client" << std::endl;

  portListen();

  return 0;
}
