#include <iostream>
#include <fstream>
#include <string>

using namespace std;

// read and display the joke from a file
int readJoke(const string& filename) {
  ifstream infile;
  infile.open(filename);
  if (infile) {
    string line;
    cout << "Joke:\n";
    while (getline(infile, line)) {
      cout << line << endl;
    }
    infile.close();
    return 0; // Return 0 for success
  } else {
    cerr << "Unable to open file: " << filename << endl;
    return -1; // Return -1 for failure
  }
}

// read and display the punchline from a file
int readPunchline(const string& filename) {
  ifstream infile;
  infile.open(filename);
  if (infile) {
    cout << "Punchline:" << endl;
    // Go to the end of the file
    infile.seekg(0, ios::end);
    // Move backwards to beginning of the final char in the file
    infile.seekg(-1, ios::cur);
    char ch;
    // Backup until we find a newline
    while (infile.tellg() > 0) {
      infile.get(ch);
      if (ch == '\n') {
        break;
      }
      infile.seekg(-2, ios::cur); // Move backwards two characters
    }
    // Read the punchline
    string punchline;
    getline(infile, punchline);
    cout << punchline << endl;
    infile.close();
    return 0;
  } else {
    cerr << "Unable to open file: " << filename << endl;
    return -1;
  }
}

int main() {
  // Prompt user for filenames
  string jokeFile, punchlineFile;
  cout << "Enter the name of the file holding the joke <joke.txt>: ";
  cin >> jokeFile;
  cout << "Enter the name of the file holding the punchline <punchline.txt>: ";
  cin >> punchlineFile;

  // Display the joke
  int showJoke = readJoke(jokeFile);

  // Display the punchline
  int showPunchLine = readPunchline(punchlineFile);

  // Check if reading was successful
  if (showJoke == 0 && showPunchLine == 0) {
    return 0;
  } else {
    return -1;
  }
}