#include <fstream>
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;
//Vowel_counter, Matt Kalinin

//string for the input stream file
const string inputFile = "Constitution_of_the_United_States.html";

int main()
/*int argc, char* argv[]*/
{
	//vowels as int variables and char vowel
	int a = 0;
	int e = 0;
	int i = 0;
	int o = 0;
	int u = 0;
	int m = 0;
	int k = 0;
	int p = 0;
	char vowel;

	cout << setw(60) << setfill('.') << '\n' << setw(45) << "Welcome to my Letter Count Program" << setw(15) << '\n' << setw(60) << '\n' << endl;

	cout << "Analyzing file 'Constitution_of_the_United_States.html'...\n" << endl;

	//Had alot of trouble trying to get this to work so I just left it in as comments
	// The executable name and at least one argument?
	/*if (argc < 2)
	{
		cout << "Error with input agrs.." << endl;
		return 1;
	}*/


	//declaring ifstream variable
	ifstream inputStream;
	/*inputStream.open(argv[1]);
	if (!inputStream)
	{
		cout << "Error with file name.." << endl;
		return 1;
	}*/

	//opens file
	inputStream.open(inputFile);

	//while loop gets character data from html file and stores into vowel and executes the following switch statements until complete
	while (inputStream.get(vowel)){
		/*switch statements for comparing vowel char data to various vowelsand their uppercase letters
		when a specific vowel matches the character in the vowel variable, it adds into its respective int variable*/
		switch (vowel) {

		case 'a':
			a++;
			break;
		case 'A':
			a++;
			break;
		case 'e':
			e++;
			break;
		case 'E':
			e++;
			break;
		case 'i':
			i++;
			break;
		case 'I':
			i++;
			break;
		case 'o':
			o++;
			break;
		case 'O':
			o++;
			break;
		case 'u':
			u++;
			break;
		case 'U':
			u++;
			break;
		case 'm':
			m++;
			break;
		case 'M':
			m++;
			break;
		case 'k':
			k++;
			break;
		case 'K':
			k++;
			break;
		case 'p':
			p++;
			break;
		case 'P':
			p++;
			break;
		
		}
	}

	//displays number of various vowels and combined vowel count
	cout << "Number of A's: " << setw(30) << a << endl;
	cout << "Number of E's: " << setw(30) << e << endl;
	cout << "Number of I's: " << setw(30) << i << endl;
	cout << "Number of O's: " << setw(30) << o << endl;
	cout << "Number of U's: " << setw(29) << u << endl;
	cout << "Number of M's: " << setw(29) << m << endl;
	cout << "Number of K's: " << setw(29) << p << endl;
	cout << "Number of P's: " << setw(28) << k << endl;
	cout << "The vowel count is: " << setw(26) << a + e + i + o + u + m + k + p << endl;

	inputStream.close();
	return 0;
}