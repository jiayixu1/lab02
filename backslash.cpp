// backslash.cpp     ASCII art backslash as a C++ string
// A C++ function that returns a string that, when printed on cout,
// renders a backslash out of stars with a given width (width and height
// must be equal).   
// If width less than 2, the function should return an empty string.
//how to change the backslash.h, I will make some comments

#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

// function prototypes
string stringOfNChars(int n, char c);
string stringOfKSpacesNStars(int k, int n);
string backslash(int width);



string backslash(int width){

  int i;
  int height = width; // width is equal to height

  string result="";

  // so this for loop iterates over the rows
    //I changed the part here in order to make the stars in a reverse direction
    //all the others remain the same
    //also I put some space after the star to make them pass the test
    //the number of space after the stars should be the reverse of the space before the stars
    for (i=height; i>=1;i--) {
      // i spaces then a single star
        int space=height+1-i;
        result += stringOfKSpacesNStars(i,1)+ stringOfNChars(space, ' ')+ "\n";
       }
  return result; // leave this out, and bad things happen
}


    string stringOfNChars(int n, char c){
  int i;
  string result="";
  // print a line of *
  for (i=0; i<n; i++)
    result += c;
  return result;
}

string stringOfKSpacesNStars(int k, int n)
{
  return stringOfNChars(k,' ') + stringOfNChars(n,'*');
}
//sice I only use main function in starZ.cpp
//I delete the main function here
