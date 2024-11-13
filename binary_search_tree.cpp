// Binary search Tree...*

#include<stdio.h>
#include<stdlib.h>

struct node{
	int key;
	struct node *left;
	struct node *right;
};

//Create Node...*
struct node * createnode(int x)
{
	struct node *p;
	p=(struct node*)malloc(sizeof(struct node));
	p->key;
	p->right=NULL;
	p->left=NULL;
	return p;
}

//insert..*
struct node * insert(int x,struct node * root)
{
	if(root==NULL){
		return createnode(x);
	}
	else if(x>root->key){
		root->right=insert(x,root->right);
	}
	else{
		root->left=insert(x,root->left);
	}
	return root;
}


//find min..*
struct node * find_min(struct node * root)
{
	if(root==NULL){
		return NULL;
	}
	else if(root->left!=NULL){
		return find_min(root->left);
	}
	return root;
}



//deletetion...*
struct node * del(struct node * root,int x)
{
	if(root==NULL){
		return NULL;
	}
	//
	if(x > root->key){
		root->right=del(root->right,x);
	}
	else if(x < root->key){
		root->left=del(root->left,x);
	}
	else{
		
		if(root->left==NULL && root->right==NULL){
			free(root);
			return NULL;
		}
		else if(root->left==NULL || root->right==NULL){
			struct node * temp;
			if(root->left==NULL){
				temp=root->right;
			}
			else{
				temp=root->left;
				free(root);
				return temp;
			}
		}
		else{
			struct node * temp=find_min(root);
			(root->right);
			root->key=temp->key;
			root->right=del(root->right,temp->key);
		}
		
	}
	return root;
}

// In order  Travellerser...*
void inorder(struct node * root)
{
	if(root!=NULL){
		inorder(root->left);
		printf("%d",root->key);
		inorder(root->right);
		printf("%d",root->key);
	}
}

//Searching an element in Binary search tree...**
struct node * search(struct node * root,int key)
{
	struct node * temp=root;
	if(temp==NULL||temp->key==key){
		return(temp);
	}
	else{
		if(key<temp->key){
			search(temp->left,key);
		}
		else{
			search(temp->right,key);
		}
	}
}

//count number of node in the tree...**
int countnode(struct node * root)
{
	static int count=0;
	
	struct node *temp=root;
	
	if(temp!=NULL){
		count++;
		countnode(temp->left);
		countnode(temp->right);
	}
	return count;
}

//main...*
int main()
{
	struct node * root=NULL;
	
	int x , ch ;
	int pos,data;
	
	while(1){
		printf("1. insert \n");
		printf("2.delete\n");
		printf("3. find_min\n");
		printf("4.inorder\n");
		printf("5.search\n");
		printf("count\n");
		scanf("%d",&ch);
		
		switch(ch){
			
			case 1 : printf("enter the value \n");
			scanf("%d",&x);
			printf("root\n");
			insert(x,root);
			break;
			
			case 2 : find_min(root);
			break;
			
			case 3 : printf("enter the position to delete");
			scanf("%d",&pos);
			del(root,pos);
			break;
			
			case 4 : inorder(root);
			break;
			
			case 5 :printf("enter the key\n");
			scanf("%d",&data);
			search(root,data);
			
			case 6 :countnode(root);
			break;
			
	
		}
	}
}

