#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	// Integer
	auto readyPapers = 1, allPapers = 178;

	printf("The ready papers are %d from %d.\n", readyPapers, allPapers);

	printf("The papers number =  %0*d \n", 2, allPapers);
	printf("The papers number =  %0*d \n", 3, allPapers);     
	printf("The papers number =  %0*d \n", 4, allPapers);     
	printf("The papers number =  %0*d \n", 5, allPapers);

	// Float
	float perecentReadyPages = ((float) readyPapers / (float) allPapers) * 100;
	printf("The percentege of ready papers from all papers is =  %.2f \n", perecentReadyPages);

	cout << "\n";
	float PI = 3.14159265; 
	printf("Precision specification of %.*f\n", 1, PI);
	printf("Precision specification of %.*f\n", 2, PI);
    printf("Precision specification of %.*f\n", 3, PI);
    printf("Precision specification of %.*f\n", 4, PI);
 
	// String & Chars
	char name[] = "Abdullah Al-Shehri";
	char dream[] = "Be Great Software Engineer!";

	printf("Dear %s, How are you?\n\n", name);     
	printf("You Will Be a ( %s )\n\n", dream);

	char c = 'S';
	printf("Setting the width of c :%*c \n", 1, c);
	printf("Setting the width of c :%*c \n", 2, c);
    printf("Setting the width of c :%*c \n", 3, c);
    printf("Setting the width of c :%*c \n", 4, c);
    printf("Setting the width of c :%*c \n", 5, c);



	// Setw() Manipulator
	cout << "Name" << setw(20) << "|" << setw(30) << "Abdullah Bander Al-Sheheri" << "|" << endl;
	cout << "Name" << setw(20) << "|" << setw(30) << "Mazen Bander Al-Sheheri" << "|" << endl;
	cout << "Name" << setw(20) << "|" << setw(30) << "Mohammed Bander Al-Sheheri" << "|" << endl;
}
