#include <iostream>
#include <cstring>

using namespace std;

int main()
{
  char input[80];
  char input2[80];

  cin.get(input, 80);
  cin.get();

  int count = 0;
  
  for (int i = 0; i < strlen(input); i++) {
    if ((input[i] >= 65 && input[i] <= 90) || (input[i] >= 97 && input[i] <= 122)) {
      input2[count] = input[i];
      count++;
    }
    if (input[i] == '\0') {
      input2[count] = input[i];
      break;
    }
  }

  cout << input2 << endl;
  
}
