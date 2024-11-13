// In order  Travellerser...*

void inorder(struct node * root)
{
	if(root!=NULL){
		inorder(root->left);
		print("%d",root->key);
		inorder(root->right);
		print("%d",root->key);
	}
}
int main(){
	int root,key,NULL;
}
