#include <iostream>
#include <cstring>

using namespace std;

int main()
{
  char input[80];
  char input2[80];

  cin.get(input, 80);
  cin.get();

  for (int i = 0; i < 80; i++) {
    if (i == 0) {
      if (input[i+1] != ' ') {
	input2[i] = input[i+1];
	input2[i+1] = input[i];
	i++;
      }
      else {
	input2[i] = input[i];
      }
    }
    else if (input[i] == ' ') {
      if (input[i+2] != ' ') {
	input2[i] = ' ';
	input2[i+1] = input[i+2];
	input2[i+2] = input[i+1];
	i += 2;
      }
      else {
	input2[i] = input[i];
      }
    }
    else if (input[i] == '\0') {
      input2[i] = '\0';
      break;
    }
    else {
      input2[i] = input[i];
    }
  }

  cout << input2 << endl;
  
}
