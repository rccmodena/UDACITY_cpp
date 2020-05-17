/*Goal: practice using stringstream
/*Goal: practice getting string inputs and
 **converting them to numeric variables using
 **stringstream.
 **
 **Prompt the user for the length of a room.
 **Then prompt for the width of the room.
 **Print out the area of the room.
 */

 #include <iostream>
 #include <string>
 #include <sstream>

 int main ()
 {
   std::string sWidth, sLength;
   float width = 0;
   float length = 0;
   float area = 0;

   std::cout << "Enter the length of the room: \n";
   std::getline (std::cin,sLength);
   std::stringstream(sLength) >> length;
   std::cout << "Enter the length of the room: \n";
   std::getline (std::cin,sWidth);
   std::stringstream(sWidth) >> width;
   area = width * length;
   std::cout << "The area of the room is: " << area;
   return 0;
 }
