#include <iostream>
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


}
