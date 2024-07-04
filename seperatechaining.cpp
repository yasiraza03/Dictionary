#include <iostream>
#include "../include/seperatechaining.h"
using namespace std;

sepchain::sepchain()
{
	head = NULL;
	tail = NULL;
}

int hashfunc(char* val, int size)
{
	int index = 0, i, t, n = 0;
	
	for(i = 0; ; i++)
	{
		if(val[i] >= 'A' && val[i] <= 'Z')
		{
			t = (val[i] + 32) * (i+1);
		}
		
		else if(val[i] >= 'a' && val[i] <= 'z')
		{
			t = val[i] * (i+1);
		}
		
		else if(val[i] == '\0')
		{
			break;
		}
		n = (n + t) % size;
	}
	
	index = n % size;
	return index;
}

void sepchain::enter(char* v, char* m, char* ant, char* syn)
{
	nodes* temp = new nodes;
	temp->val = v;
	temp->mea = m;
	temp->ant = ant;
	temp->syn = syn;
	
	temp->next = NULL;
	
	if(head == NULL)
	{
		head = temp;
		tail = temp;
	}
	
	else 
	{
		tail->next = temp;
		tail = temp;
	}
}

void sepchain::search(char* v)
{
	if(head == NULL)
	{
		cout << "\nPARTICULAR INDEX IS EMPTY\n";
	}
	
	else 
	{
		bool b = true;
		nodes* temp = new nodes;
		temp = head;
		while(temp->next != NULL)
		{
			b = true;
			for(int i = 0; ; i++)
			{
				
				if(temp->val[i] >= 'a' && temp->val[i] <= 'z')
				{
					if(temp->val[i] != v[i] && temp->val[i] != (v[i] + 32))
					{
						b = false;
					}
				}
				
				else if(temp->val[i] >= 'A' && temp->val[i] <= 'Z')
				{
					if(temp->val[i] != v[i] && temp->val[i] != (v[i] - 32))
					{
						b = false;
					}
				}
				
				else
				{
					if(temp->val[i] != v[i])
					{
						b = false;
					}
				}
				
				if(temp->val[i] == '\0')
				{
					break;
				}
			}
			
			if(b)
			{
				break;
			}
			temp = temp->next;
		}
		
		b = true;
		for(int i = 0; ; i++)
		{
			if(temp->val[i] >= 'a' && temp->val[i] <= 'z')
			{
				if(temp->val[i] != v[i] && temp->val[i] != (v[i] + 32))
				{
					b = false;
				}
			}
			
			else if(temp->val[i] >= 'A' && temp->val[i] <= 'Z')
			{
				if(temp->val[i] != v[i] && temp->val[i] != (v[i] - 32))
				{
					b = false;
				}
			}
			
			else
			{
				if(temp->val[i] != v[i])
				{
					b = false;
				}
			}
			
			if(temp->val[i] == '\0')
			{
				break;
			}
		}
			
		if(b)
		{
			cout << "\nWORD    : " << temp->val ;
			cout << "\nMEANING : " << temp->mea ;
			cout << "\nANTONYM : " << temp->ant ;
			cout << "\nSYNONYM : " << temp->syn ;
			
			cout << endl;
		}
		
		else
		{
			cout << "\nNot Available\n";
		}
		
	}
}

void sepchain::del(char* val)
{
	nodes* prev = new nodes;
	nodes* curr = new nodes;
	
	if(head == NULL)
	{
		cout << "\nNot Available\n";
		delete curr;
		delete prev;
		return;
	}
	
	else 
	{
		curr = head;
		prev = head;
		
		if(curr->val == val && curr->next == NULL)
		{
			head = NULL;
			tail = NULL;
			curr = NULL;
		}
		
		else if(curr->val == val && curr->next != NULL)
		{
			curr = curr->next;
			head = curr;
			curr = NULL;
		}
		
		else
		{
			while(curr->val != val && curr->next != NULL)
			{
				prev = curr;
				curr = curr->next;
			}
			
			if(curr->val == val && curr->next != NULL)
			{
				prev->next = curr->next;
				prev = NULL;
			}
			
			else if(curr->val == val && curr->next == NULL)
			{
				prev->next = NULL;
				tail = prev;
				prev = NULL;
			}
			
			else
			{
				prev = NULL;
				curr = NULL;
				cout << "\nNot Available\n";
			}
		}
		
		delete curr;
		delete prev;
	}
}
