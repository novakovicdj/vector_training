#include <iostream>
#include <thread>
#include <vector>

using namespace std;

int main() {
  vector<int> vec;
  int cmd;
  int val;

  while (true) {
    cout << "Enter your command ( 0 - 4 ):" << endl;  // Menu for commands
    cout << "0 - exit" << endl << "1 - push_back()" << endl;
    cout << "2 - pop_back()" << endl
         << "3 - size()" << endl
         << "4 - clear()" << endl
         << "cmd: ";
    cin >> cmd;
    this_thread::sleep_for(500ms);
    switch (cmd) {
      case 0:  // exit program
        return 0;
      case 1:  // push_back() command
        cout << "Enter numeric value: ";
        cin >> val;
        vec.push_back(val);
        cout << "\tAdded " << val << " to the back of the vector" << endl;
        break;
      case 2:  // pop_back() command
        val = vec.back();
        vec.pop_back();
        cout << "\tRemoved " << val << " from the back of the vector" << endl;
        break;
      case 3:  // size() command
        cout << "\tSize of vector is " << vec.size() << " element(s)" << endl;
        break;
      case 4:  // clear() command
        vec.clear();
        cout << "\tVector is cleared" << endl;
        break;

      default:  // Unknown command
        cout << "\tUnknown command" << endl;
        break;
    }
    cout << endl;
    this_thread::sleep_for(500ms);  // to slow down menu a little bit
  }

  return 0;
}