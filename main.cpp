#include <iostream>
#include <fstream>
#include <conio.h>
#include <string>
#include "include/seperatechaining.h" // header file
#include "include/project.h" // header file
using namespace std;

void working()
{
	system("color 20");
	cout<<endl<<endl<<endl<<endl<<"\t\t\t\t\tDICTIONARY   (DS PROJECT)";
	cout<<endl<<endl<<endl<<endl<<"\t\t\t\tPRESENTED BY :            (SEC : 3K)";
	cout<<endl<<"\n\t\t\t\t\t1. YASIR RAZA\t\t (21K-4869)";
	cout<<endl<<"\t\t\t\t\t2. MURTAZA AHMED         (21K-3440)";
	cout<<endl<<"\t\t\t\t\t3. FARZEEN KHAN          (21K-4915)";
	cout << "\n\n";
	getch();
	system("cls");
	
	ifstream inp; // file object
	inp.open("dictionary.txt", ios::in); // write in file
	
	int i, j, n = 0;
	string nl;
	
	trie t; // obj of class trie from header file
	
	while(!inp.eof())
	{
		getline(inp, nl, '\n');
		n++;
	}
	
	n = n/5;
	char **w = new char*[n]; // word memory allocation
	char **m = new char*[n]; // meaning memory allocation
	char **ant = new char*[n]; // antonyms memory allocation
	char **syn = new char*[n]; // synonyms memory allocation
	
	for(i = 0; i < n; i++)
	{
		w[i] = new char[20];
		m[i] = new char[100];
		ant[i] = new char[50];
		syn[i] = new char[50];
	}
	
	inp.close(); // close file
	
	sepchain s[n]; // obj of sepchain class from header file
	bool ch;
	
	inp.open("dictionary.txt", ios::in); // read from file
	
	// fetch word info
	for(i = 0 ; i < n; i++)
	{
		getline(inp, nl, '\n');
		
		for(j = 0; ; j++)
		{
			w[i][j] = nl[j];
			
			if(nl[j] == '\0')
			{
				break;
			}
		}
		
		getline(inp, nl, '\n');
		
		for(j = 0; ; j++)
		{
			m[i][j] = nl[j];
			
			if(nl[j] == '\0')
			{
				break;
			}
		}
		
		getline(inp, nl, '\n');
		
		for(j = 0; ; j++)
		{
			ant[i][j] = nl[j];
			
			if(nl[j] == '\0')
			{
				break;
			}
		}
		
		getline(inp, nl, '\n');
		
		for(j = 0; ; j++)
		{
			syn[i][j] = nl[j];
			
			if(nl[j] == '\0')
			{
				break;
			}
		}
		
		getline(inp, nl, '\n');
		ch = t.insert(t.root, w[i], 0);
		
		if(ch)
		{
			s[hashfunc(w[i], n)].enter(w[i], m[i], ant[i], syn[i]);
		}
	}
	
	inp.close();// close file
	
	char w2[15];
	j = 1;
	
	cout << "\n\n\t\t\t\t\t\t\tSEARCHING\n";
	
	// output word info
	do
	{
		cout << "\nENTER WORD: ";
		cin >> w2;
		cout << "------------------------";
		
		ch = t.search(t.root, w2, 0);
		if(ch)
		{
			int h = hashfunc(w2, n);
			s[h].search(w2);
		}
		
		fflush(stdin); // flush file stream contents
		
		cout << "\n CONTINUE? \tPRESS '1'\n EXIT?\t  \tPRESS '0'\n\n  ";
		cin >> j;
		fflush(stdin); // flush file stream contents
		system("cls");
	}
	
	while(j == 1);
	
	// delete allocated array memory
		delete[] w;
		delete[] m;
		delete[] ant;
		delete[] syn;
}

int main() 
{
	working();
}
