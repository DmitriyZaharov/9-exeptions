#include <iostream>
#include <cstring>
using namespace std;


void checkEqual(const string& left, const string& right)
{
 if (left != right) throw runtime_error("!=");
}

int main()
{
    try{
      checkEqual("Hello C++", "Hello C++");
      checkEqual("Hello C++", "Bye C++");
    } catch (runtime_error& e){
      cout << e.what() << endl;
    }

    return 0;
}

