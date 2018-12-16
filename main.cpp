#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <fstream>
#include <vector>


int main(int argc, char* argv[])
{
	bool printLineNumbers = false;
	std::vector<std::string> fileName;

	for (int i = 1; i < argc; ++i)
	{
		if (strcmp(argv[i], "-n") == 0)
		{
			printLineNumbers = true;
		}
		else
		{
			fileName.push_back(argv[i]);
		}
	}
	std::vector<std::string> zapisovaneUdaje;
	for (auto &p : fileName) 
	{
		std::ifstream inputFile(p);
		std::string newLine;
		while (std::getline(inputFile, newLine))
		{
			zapisovaneUdaje.push_back(newLine);
		}
	}
	std::ofstream outputFile("output.txt");
	for (auto &p : zapisovaneUdaje)
	{
		outputFile << p << "\n";
	}

	return 0;
}	

//DU 



//if (strcmp(argv[1],"-n") == 0)
//{
//	if (argc == 3)
//	{
//		std::string fileName = argv[2];
//		std::ifstream inputFile(fileName);
//		std::string newLine;
//		int j = 1;
//		while (std::getline(inputFile, newLine)) // odstrani \n
//		{
//			std::cout << j << " " << newLine << std::endl;
//			++j;
//		}
//	}
//	else if (argc > 3)
//	{
//		int j = 1;
//		for (int i = 2; i < argc; ++i)
//		{
//			std::string fileName = argv[i];
//			std::ifstream inputFile(fileName);
//			std::string newLine;
//			while (std::getline(inputFile, newLine)) // odstrani \n
//			{
//				std::cout << j << " "<< newLine << std::endl;
//				++j;
//			}
//		}
//	}
//	else //nacitaj riadok a vypis do konzoly
//	{
//		std::string newLine;
//		std::getline(std::cin, newLine);
//		std::cout << "1 "<< newLine << std::endl;
//	}
//}
//else
//{
//if (argc == 2)
//{
//	std::string fileName = argv[1];
//	std::ifstream inputFile(fileName);
//	std::string newLine;
//	while (std::getline(inputFile, newLine)) // odstrani \n
//	{
//		std::cout << newLine << std::endl;
//	}
//}
//else if(argc > 2)
//{
//	for (int i = 1; i < argc; ++i)
//	{
//		std::string fileName = argv[i];
//		std::ifstream inputFile(fileName);
//		std::string newLine;
//		while (std::getline(inputFile, newLine)) // odstrani \n
//		{
//			std::cout << newLine << std::endl;
//		}
//	}
//}
//else //nacitaj riadok a vypis do konzoly
//{ 
//	std::string newLine;
//	std::getline(std::cin, newLine);
//	std::cout << newLine << std::endl;
//}

//}




// c++ funkcie na pocitanie o trochu pomalsie 
//FILE* outputFile = fopen(filneName.data(),"r"); //nam da spravne data   apend mod pripisuje ku konci suboru   w ak neexistuje vytvori novy a ak je, tak ho premaze
		//// existuju v kazdom jazykyu tri zakladne streamy standard input standard output standard error

		//int premmenna;
		//char buffer[2500]; // potrebuje buffer
		//scanf("%d", &premmenna);
		//fscanf(outputFile, "%s", buffer); //fscanf ma navratovu hodnotu

//while(character != EOF) //fgets ma tiez navratovcu hodnotu, cykli kym v suboru neico je(fgets(buffer, 2500, outputFile) != nullptr);
		//{ //v drvivej vacsine kompilatorov je eof=-1
		//	printf("%c", character); //po biely znak
		//	character = fgetc(outputFile);
		//}	
		
		//char character;// = fgetc(outputFile);
		//while (fscanf(outputFile, "%c", &character) != EOF)  // scan f ak hladame iba cisla napr
		//{
		//	printf("%c", character);
		//}
//fclose(outputFile);