/*
 * OtherTypes.cpp
 *
 *  Created on: 26 May 2019
 *      Author: Dave
 */

#include<iostream>

using namespace std;

int main()
{
	bool bValue = true;

	cout << "My bool value is : " << bValue << endl;

	char myChar = 55;	// The number 55 represents the ASCII value 55 which is the number 7 in the ASCII table

	char anotherChar = '7'; // This is the literal number 7 as it is defined between single quotes.

	cout << "My ASCII char value is : " << myChar << endl;
	cout << "My literal char value is : " << anotherChar << endl;

	cout << "The size of a char is : " << sizeof(char) << " byte " << endl;


	// A wChar is bigger than a char and so you can store more in a wChar
	wchar_t wChar = 't';	// This is essentially doing the opposite to that above in that it is
							// returning the ASCII value given the literal character as opposed
							// to printing of the literal character like with the 7 above.

	wchar_t anotherWchar = 7;	// Again this is opposite to above in the it will print off
								// the literal value of 7 even though it is not in single quotes.

	cout << "My wchar_t is : " << wChar << endl;

	cout << "Another wchar_t is : " << anotherWchar << endl;

	cout << "The size of a wchar_t is : " << sizeof(wchar_t) << " bytes" << endl;

	return 0;
}


