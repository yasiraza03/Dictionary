#include <iostream>
#include "../include/project.h"
using namespace std;

trie::trie()
{
	root = NULL;
}

bool trie::insert(node* t, char *word, int i)
{
	if(word[0] == '\0')
	{
		return false;
	}
	
	if(root == NULL)
	{
		node* temp = new node;
		temp->ch = false;
		root = temp;
		t = root;
		i = 0;
		
		insert(t, word, i);
	}
	
	if(word[i] == '\0')
	{
		t->ch = true;
		return true;
	}
	
	if(word[i] == 'a' || word[i] == 'A')
	{
		if(t->a == NULL)
		{
			node* temp = new node;
			temp->ch = false;
			t->a = temp;
		}
		insert(t->a, word, i+1);
	}
	
	else if(word[i] == 'b' || word[i] == 'B')
	{
		if(t->b == NULL)
		{
			node* temp = new node;
			temp->ch = false;
			t->b = temp;
		}
		insert(t->b, word, i+1);
	}
	
	else if(word[i] == 'c' || word[i] == 'C')
	{
		if(t->c == NULL)
		{
			node* temp = new node;
			temp->ch = false;
			t->c = temp;
		}
		insert(t->c, word, i+1);
	}
	
	else if(word[i] == 'd' || word[i] == 'D')
	{
		if(t->d == NULL)
		{
			node* temp = new node;
			temp->ch = false;
			t->d = temp;
		}
		insert(t->d, word, i+1);
	}
	
	else if(word[i] == 'e' || word[i] == 'E')
	{
		if(t->e == NULL)
		{
			node* temp = new node;
			temp->ch = false;
			t->e = temp;
		}
		insert(t->e, word, i+1);
	}
	
	else if(word[i] == 'f' || word[i] == 'F')
	{
		if(t->f == NULL)
		{
			node* temp = new node;
			temp->ch = false;
			t->f = temp;
		}
		insert(t->f, word, i+1);
	}
	
	else if(word[i] == 'g' || word[i] == 'G')
	{
		if(t->g == NULL)
		{
			node* temp = new node;
			temp->ch = false;
			t->g = temp;
		}
		insert(t->g, word, i+1);
	}
	else if(word[i] == 'h' || word[i] == 'H')
	{
		if(t->h == NULL)
		{
			node* temp = new node;
			temp->ch = false;
			t->h = temp;
		}
		insert(t->h, word, i+1);
	}
	else if(word[i] == 'i' || word[i] == 'I')
	{
		if(t->i == NULL)
		{
			node* temp = new node;
			temp->ch = false;
			t->i = temp;
		}
		insert(t->i, word, i+1);
	}
	
	else if(word[i] == 'j' || word[i] == 'J')
	{
		if(t->j == NULL)
		{
			node* temp = new node;
			temp->ch = false;
			t->j = temp;
		}
		insert(t->j, word, i+1);
	}
	
	else if(word[i] == 'k' || word[i] == 'K')
	{
		if(t->k == NULL)
		{
			node* temp = new node;
			temp->ch = false;
			t->k = temp;
		}
		insert(t->k, word, i+1);
	}
	
	else if(word[i] == 'l' || word[i] == 'L')
	{
		if(t->l == NULL)
		{
			node* temp = new node;
			temp->ch = false;
			t->l = temp;
		}
		insert(t->l, word, i+1);
	}
	
	else if(word[i] == 'm' || word[i] == 'M')
	{
		if(t->m == NULL)
		{
			node* temp = new node;
			temp->ch = false;
			t->m = temp;
		}
		insert(t->m, word, i+1);
	}
	
	else if(word[i] == 'n' || word[i] == 'N')
	{
		if(t->n == NULL)
		{
			node* temp = new node;
			temp->ch = false;
			t->n = temp;
		}
		insert(t->n, word, i+1);
	}
	
	else if(word[i] == 'o' || word[i] == 'O')
	{
		if(t->o == NULL)
		{
			node* temp = new node;
			temp->ch = false;
			t->o = temp;
		}
		insert(t->o, word, i+1);
	}
	
	else if(word[i] == 'p' || word[i] == 'P')
	{
		if(t->p == NULL)
		{
			node* temp = new node;
			temp->ch = false;
			t->p = temp;
		}
		insert(t->p, word, i+1);
	}
	
	else if(word[i] == 'q' || word[i] == 'Q')
	{
		if(t->q == NULL)
		{
			node* temp = new node;
			temp->ch = false;
			t->q = temp;
		}
		insert(t->q, word, i+1);
	}
	
	else if(word[i] == 'r' || word[i] == 'R')
	{
		if(t->r == NULL)
		{
			node* temp = new node;
			temp->ch = false;
			t->r = temp;
		}
		insert(t->r, word, i+1);
	}
	
	else if(word[i] == 's' || word[i] == 'S')
	{
		if(t->s == NULL)
		{
			node* temp = new node;
			temp->ch = false;
			t->s = temp;
		}
		insert(t->s, word, i+1);
	}
	
	else if(word[i] == 't' || word[i] == 'T')
	{
		if(t->t == NULL)
		{
			node* temp = new node;
			temp->ch = false;
			t->t = temp;
		}
		insert(t->t, word, i+1);
	}
	
	else if(word[i] == 'u' || word[i] == 'U')
	{
		if(t->u == NULL)
		{
			node* temp = new node;
			temp->ch = false;
			t->u = temp;
		}
		insert(t->u, word, i+1);
	}
	
	else if(word[i] == 'v' || word[i] == 'V')
	{
		if(t->v == NULL)
		{
			node* temp = new node;
			temp->ch = false;
			t->v = temp;
		}
		insert(t->v, word, i+1);
	}
	
	else if(word[i] == 'w' || word[i] == 'W')
	{
		if(t->w == NULL)
		{
			node* temp = new node;
			temp->ch = false;
			t->w = temp;
		}
		insert(t->w, word, i+1);
	}
	else if(word[i] == 'x' || word[i] == 'X')
	{
		if(t->x == NULL)
		{
			node* temp = new node;
			temp->ch = false;
			t->x = temp;
		}
		insert(t->x, word, i+1);
	}
	
	else if(word[i] == 'y' || word[i] == 'Y')
	{
		if(t->y == NULL)
		{
			node* temp = new node;
			temp->ch = false;
			t->y = temp;
		}
		insert(t->y, word, i+1);
	}
	
	else if(word[i] == 'z' || word[i] == 'Z')
	{
		if(t->z == NULL)
		{
			node* temp = new node;
			temp->ch = false;
			t->z = temp;
		}
		insert(t->z, word, i+1);
	}
}

bool trie::search(node* t, char *word, int i)
{
	if(word[0] == '\0')
	{
		cout << "\nNOT AVAILABLE\n";
		return false;
	}
	
	else if(root == NULL)
	{
		cout << "\nDATA NOT AVAILABLE\n";
		return false;
	}
	
	else if(word[i] == '\0')
	{
		if(t->ch == false)
		{
			cout << "\nDATA NOT AVAILABLE\n";
		}
		return t->ch;
	}

	else if(word[i] == 'a' || word[i] == 'A')
	{
		if(t->a == NULL)
		{
			cout << "\nDATA NOT AVAILABLE\n";
			return false;
		}
		else
		{
			search(t->a, word,  i+1);
		}
	}
	
	else if(word[i] == 'b' || word[i] == 'B')
	{
		if(t->b == NULL)
		{
			cout << "\nDATA NOT AVAILABLE\n";
			return false;
		}
		else
		{
			search(t->b, word,  i+1);
		}
	}
	
	else if(word[i] == 'c' || word[i] == 'C')
	{
		if(t->c == NULL)
		{
			cout << "\nDATA NOT AVAILABLE\n";
			return false;
		}
		search(t->c, word,  i+1);
	}
	
	else if(word[i] == 'd' || word[i] == 'D')
	{
		if(t->d == NULL)
		{
			cout << "\nDATA NOT AVAILABLE\n";
			return false;
		}
		search(t->d, word,  i+1);
	}
	
	else if(word[i] == 'e' || word[i] == 'E')
	{
		if(t->e == NULL)
		{
			cout << "\nDATA NOT AVAILABLE\n";
			return false;
		}
		search(t->e, word,  i+1);
	}
	
	else if(word[i] == 'f' || word[i] == 'F')
	{
		if(t->f == NULL)
		{
			cout << "\nDATA NOT AVAILABLE\n";
			return false;
		}
		search(t->f, word,  i+1);
	}
	
	else if(word[i] == 'g' || word[i] == 'G')
	{
		if(t->g == NULL)
		{
			cout << "\nDATA NOT AVAILABLE\n";
			return false;
		}
		search(t->g, word,  i+1);
	}
	
	else if(word[i] == 'h' || word[i] == 'H')
	{
		if(t->h == NULL)
		{
			cout << "\nDATA NOT AVAILABLE\n";
			return false;
		}
		search(t->h, word,  i+1);
	}
	
	else if(word[i] == 'i' || word[i] == 'I')
	{
		if(t->i == NULL)
		{
			cout << "\nDATA NOT AVAILABLE\n";
			return false;
		}
		search(t->i, word,  i+1);
	}
	
	else if(word[i] == 'j' || word[i] == 'J')
	{
		if(t->j == NULL)
		{
			cout << "\nDATA NOT AVAILABLE\n";
			return false;
		}
		search(t->j, word,  i+1);
	}
	
	else if(word[i] == 'k' || word[i] == 'K')
	{
		if(t->k == NULL)
		{
			cout << "\nDATA NOT AVAILABLE\n";
			return false;
		}
		search(t->k, word,  i+1);
	}
	
	else if(word[i] == 'l' || word[i] == 'L')
	{
		if(t->l == NULL)
		{
			cout << "\nDATA NOT AVAILABLE\n";
			return false;
		}
		search(t->l, word,  i+1);
	}
	
	else if(word[i] == 'm' || word[i] == 'M')
	{
		if(t->m == NULL)
		{
			cout << "\nDATA NOT AVAILABLE\n";
			return false;
		}
		search(t->m, word,  i+1);
	}
	
	else if(word[i] == 'n' || word[i] == 'N')
	{
		if(t->n == NULL)
		{
			cout << "\nDATA NOT AVAILABLE\n";
			return false;
		}
		search(t->n, word,  i+1);
	}
	
	else if(word[i] == 'o' || word[i] == 'O')
	{
		if(t->o == NULL)
		{
			cout << "\nDATA NOT AVAILABLE\n";
			return false;
		}
		search(t->o, word,  i+1);
	}
	
	else if(word[i] == 'p' || word[i] == 'P')
	{
		if(t->p == NULL)
		{
			cout << "\nDATA NOT AVAILABLE\n";
			return false;
		}
		search(t->p, word,  i+1);
	}
	
	else if(word[i] == 'q' || word[i] == 'Q')
	{
		if(t->q == NULL)
		{
			cout << "\nDATA NOT AVAILABLE\n";
			return false;
		}
		search(t->q, word,  i+1);
	}
	else if(word[i] == 'r' || word[i] == 'R')
	{
		if(t->r == NULL)
		{
			cout << "\nDATA NOT AVAILABLE\n";
			return false;
		}
		search(t->r, word,  i+1);
	}
	else if(word[i] == 's' || word[i] == 'S')
	{
		if(t->s == NULL)
		{
			cout << "\nDATA NOT AVAILABLE\n";
			return false;
		}
		search(t->s, word,  i+1);
	}
	
	else if(word[i] == 't' || word[i] == 'T')
	{
		if(t->t == NULL)
		{
			cout << "\nDATA NOT AVAILABLE\n";
			return false;
		}
		search(t->t, word,  i+1);
	}
	
	else if(word[i] == 'u' || word[i] == 'U')
	{
		if(t->u == NULL)
		{
			cout << "\nDATA NOT AVAILABLE\n";
			return false;
		}
		search(t->u, word,  i+1);
	}
	
	else if(word[i] == 'v' || word[i] == 'V')
	{
		if(t->v == NULL)
		{
			cout << "\nDATA NOT AVAILABLE\n";
			return false;
		}
		search(t->v, word,  i+1);
	}
	
	else if(word[i] == 'w' || word[i] == 'W')
	{
		if(t->w == NULL)
		{
			cout << "\nDATA NOT AVAILABLE\n";
			return false;
		}
		search(t->w, word,  i+1);
	}
	
	else if(word[i] == 'x' || word[i] == 'X')
	{
		if(t->x == NULL)
		{
			cout << "\nDATA NOT AVAILABLE\n";
			return false;
		}
		search(t->x, word,  i+1);
	}
	
	else if(word[i] == 'y' || word[i] == 'Y')
	{
		if(t->y == NULL)
		{
			cout << "\nDATA NOT AVAILABLE\n";
			return false;
		}
		search(t->y, word,  i+1);
	}
	
	else if(word[i] == 'z' || word[i] == 'Z')
	{
		if(t->z == NULL)
		{
			cout << "\nDATA NOT AVAILABLE\n";
			return false;
		}
		search(t->z, word,  i+1);
	}
}

void trie::delall(node* t)
{
	if(root != NULL)
	{
		if(t->a != NULL)
		{
			delall(t->a);
		}
		
		if(t->b != NULL)
		{
			delall(t->b);
		}
		
		if(t->c != NULL)
		{
			delall(t->c);
		}
		
		if(t->d != NULL)
		{
			delall(t->d);
		}
		
		if(t->e != NULL)
		{
			delall(t->e);
		}
		
		if(t->f != NULL)
		{
			delall(t->f);
		}
		
		if(t->g != NULL)
		{
			delall(t->g);
		}
		
		if(t->h != NULL)
		{
			delall(t->h);
		}
		
		if(t->i != NULL)
		{
			delall(t->i);
		}
		
		if(t->j != NULL)
		{
			delall(t->j);
		}
		
		if(t->k != NULL)
		{
			delall(t->k);
		}
		
		if(t->l != NULL)
		{
			delall(t->l);
		}
		
		if(t->m != NULL)
		{
			delall(t->m);
		}
		
		if(t->n != NULL)
		{
			delall(t->n);
		}
		
		if(t->o != NULL)
		{
			delall(t->o);
		}
		
		if(t->p != NULL)
		{
			delall(t->p);
		}
		
		if(t->q != NULL)
		{
			delall(t->q);
		}
		
		if(t->r != NULL)
		{
			delall(t->r);
		}
		
		if(t->s != NULL)
		{
			delall(t->s);
		}
		
		if(t->t != NULL)
		{
			delall(t->t);
		}
		
		if(t->u != NULL)
		{
			delall(t->u);
		}
		
		if(t->v != NULL)
		{
			delall(t->v);
		}
		
		if(t->w != NULL)
		{
			delall(t->w);
		}
		
		if(t->x != NULL)
		{
			delall(t->x);
		}
		
		if(t->y != NULL)
		{
			delall(t->y);
		}
		
		if(t->z != NULL)
		{
			delall(t->z);
		}
		
		node *temp = new node;
		temp = t;
		delete temp;
	}
}

