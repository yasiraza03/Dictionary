#ifndef PROJECT_H
#define PROJECT_H

struct node
{
	bool ch;
	node* a = NULL; node* b = NULL;
	node* c = NULL; node* d = NULL; 
	node* e = NULL; node* f = NULL;
	node* g = NULL; node* h = NULL;
	node* i = NULL; node* j = NULL;
	node* k = NULL; node* l = NULL;
	node* m = NULL; node* n = NULL; 
	node* o = NULL; node* p = NULL;
	node* q = NULL; node* r = NULL;
	node* s = NULL; node* t = NULL; 
	node* u = NULL; node* v = NULL; 
	node* w = NULL; node* x = NULL;
	node* y = NULL; node* z = NULL;
};

class trie
{
	public:
		
		node* root;
		
		trie();
		bool insert(node* t, char word[], int i);
		bool search(node* t, char word[], int i);
		void delall(node* t);
		
		~trie()
		{
			delall(root);
		}
};

#endif
