#ifndef SEPERATECHAINING_H
#define SEPERATECHAINING_H

struct nodes
{
	char* val;
	char* mea;
	char* ant;
	char* syn;
	nodes *next = NULL;
};

int hashfunc(char* val, int n);
		
class sepchain
{
	protected:
		struct nodes *head;
		struct nodes *tail;

	public:
		sepchain();
		void enter(char* val, char* mea, char* ant, char* syn);
		void del(char* val);
		void search(char* val);
		
		~sepchain()
		{
			if(head != NULL)
			{
				nodes *curr = new nodes;
				curr = head;
				
				while(curr->next != NULL)
				{
					nodes *prev = new nodes;
					prev = curr;
					curr = curr->next;
					delete prev;
				}
				
				delete curr;
			}
		}
};

#endif
