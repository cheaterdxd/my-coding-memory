#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct Node{
    struct Node* left;
    struct Node* right;
    int data;
}Node;
Node* newNode(int data){
    Node* node=(Node*)malloc(sizeof(Node));
    node->left=node->right=NULL;
    node->data=data;
    return node;
}

int startLen = 1;
int tail = 0;
int head = 0;
Node* nodeQueue = (Node *) malloc(sizeof(Node)*startLen);
void levelOrder(Node* temp){
	while(temp!=NULL){
		printf("%d ",temp->data);
		if(temp->left!=NULL)
		{
			nodeQueue = (Node *)realloc(nodeQueue,sizeof(Node)*(++startLen));
			nodeQueue[tail] = *(temp->left);
			tail++;
		}
		if(temp->right!=NULL)
		{
			nodeQueue = (Node *)realloc(nodeQueue,sizeof(Node)*(++startLen));
			nodeQueue[tail] = *(temp->right);
			tail++;
		}
		if(head!=tail)
		{
			temp = &nodeQueue[head];
			head++;
		}
		else temp = NULL;
	}
}

Node* insert(Node* root,int data){
    if(root==NULL)
        return newNode(data);
    else{
        Node* cur;
        if(data<=root->data){
            cur=insert(root->left,data);
            root->left=cur;                
        }
        else{
            cur=insert(root->right,data);
            root->right=cur;
        }
        
    }
    return root;
}
int main(){
    Node* root=NULL;
    int T,data;
    scanf("%d",&T);
    while(T-->0){
        scanf("%d",&data);
        root=insert(root,data);
    }
    levelOrder(root);
    return 0;
    
}
void dfs(Node* root){
  	//Write your code here
  	int startLen = 1;
  	int currentIndex = 0;
  	Node* nodeQueue = (Node *) malloc(sizeof(Node)*startLen);
  	Node* temp = root;
  	while(temp!=NULL)
	{
		printf("%d ",temp->data); 
  		if(temp->left != NULL)
		{
			if(temp->right != NULL)
			{
				nodeQueue = (Node *) realloc(nodeQueue,sizeof(Node)*(++startLen));
				nodeQueue[currentIndex] = *(temp->right);
				currentIndex++;
			}
			temp = temp->left;
		}
		else
		{
			if(temp->right == NULL) break;
			else
			{
				temp = temp->right;
			}
		}
	}
	for(int i=currentIndex-1;i>=0;i--) levelOrder(&(nodeQueue[i]));
	free(nodeQueue);
	nodeQueue = NULL;
}
