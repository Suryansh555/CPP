/* Written by Danny Wray, for UoB COMS10002, November 2014 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

// Each ListNode of the linked list contains a phone number and a pointer
typedef struct ListNode {
	char number[20];
	struct ListNode* next;
} ListNode;

// Each TreeNode contains a name, left and right pointer, and a pointer to a ListNode
typedef struct TreeNode {
	char name[20];
	struct TreeNode* left;
	struct TreeNode* right;
	ListNode* listnode;
} TreeNode;

// Declare the root of the tree as a global variable
TreeNode* root = NULL;

// Create a new leaf by allocating memory and setting each of its values 
TreeNode* createleaf(char name[], char number[]) {
	
	TreeNode* new_leaf;
	
	// Allocate the block of memory and copy in the string data
	new_leaf = calloc(1, sizeof(TreeNode));
	strcpy(new_leaf->name, name);
	
	// Create a ListNode and reassign values to new_leaf to avoid segmentation fault
	ListNode* new_node = calloc(1, sizeof(ListNode));
	new_node->next = NULL;
	strcpy(new_node->number, number);
	new_leaf->listnode=new_node;
	
	// Set the left and right pointers to NULL
	new_leaf->left = NULL;
	new_leaf->right = NULL;
	
	return new_leaf;
}

// Check to see if the name has been inputted already
int isnewname(char name[]) {
	
	// Start at the root of the tree
	TreeNode* current_leaf = root;
	
	// Search the tree for the name passed as a parameter
	while (current_leaf != NULL) {
		if (strcmp(name, current_leaf->name) == 0) {
			return 0;
		}
		if (strcmp(name, current_leaf->name) < 0) {
			current_leaf = current_leaf->left;
		} else {
			current_leaf = current_leaf->right;
		}
	}
	// If the name isn't there, return 1 as it IS a new name
	return 1;
}

// Insert a number onto the end of the linked list inside the TreeNode
void insertlistnode(ListNode* ptr, char number[]) {
	
	// Find the last node in the linked list
	while (ptr->next != NULL){
		ptr = ptr->next;
	}
	
	// Allocate memory for a new node and set its data
	ptr->next = (ListNode*)calloc(1, sizeof(ListNode));
	ptr = ptr->next;
	strcpy(ptr->number, number);
	ptr->next = NULL;
}

// If the name has been entered before, add a new number to its leaf's linked list
void insertnewnumber(char name[], char number[]) {
	
	// Start at the root of the tree
	TreeNode* current_leaf = root;
	
	while (current_leaf != NULL) {
		
		// When you find the name, run insertlistnode() on its node
		if (strcmp(name, current_leaf->name) == 0) {
			ListNode* new_node = current_leaf->listnode;
			insertlistnode(new_node, number);
			return;
		}
		
		// Keep looking through the tree to find the name
		if (strcmp(name, current_leaf->name) < 0) {
			current_leaf = current_leaf->left;
		} else {
			current_leaf = current_leaf->right;
		}
	}
	return;
}

// Add a new TreeNode to the tree
void insertleaf(TreeNode* new_leaf){
	
	TreeNode* current_leaf;
	
	// If the tree is empty, set the new leaf as the root
	if (root == NULL) {
		root = new_leaf;
		return;
	}
	
	current_leaf = root;
	
	// Sort through the tree by name to find the right position for the leaf
	while (current_leaf != NULL) {
		if (strcmp(new_leaf->name, current_leaf->name) < 0){
			if (current_leaf->left == NULL){
				current_leaf->left = new_leaf;
				return;
			}
			current_leaf = current_leaf->left;
		} else {
			if (current_leaf->right == NULL){
				current_leaf->right = new_leaf;
				return;
			}
			current_leaf = current_leaf->right;
		}
	}
}

// Find the relevant leaf, and print all the numbers within its linked list
int printnumbers(char name[], int j) {
	
	// Start at the root of the tree
	TreeNode* current_leaf = root;
	
	while (current_leaf != NULL) {
		// When you find the relevant name, print all the numbers in its linked list
		if (strcmp(name, current_leaf->name) == 0) {
			ListNode* new_node = current_leaf->listnode;
			while (new_node != NULL) {
				printf("%s\n", new_node->number);
				new_node = new_node->next;
			}
			return 0;
		}
		
		// Otherwise, keep traversing the tree
		if (strcmp(name, current_leaf->name) < 0) {
			current_leaf = current_leaf->left;
		} else {
			current_leaf = current_leaf->right;
		}
	} 
	// If the name isn't in the list, return 1 as an error message
	j = 1;
	return j;
}

// Free the memory used by the the Linked List
void freeListNode(ListNode* node){
	ListNode* temp;
	
	while (node != NULL){
		temp = node;
		node = node->next;
		free(temp);
	}
}
	
void freeTree(TreeNode* node){
	
	// If the node does not exist, simply return
	if (node == NULL){
		return;
	}
	
	// Free the memory of the tree recursively
	freeTree(node->left);
	freeTree(node->right);
	
	// Free the linked list inside the node, then the node itself
	freeListNode(node->listnode);
	free(node);
}
	


int main() {
	
	// Declare the strings, ints for iteration and errors, and a pointer to a TreeNode
	char name[20], number[20];
	int i = 0, j = 0;
	TreeNode* new_leaf;
	
	// Continue to read names and numbers until a full stop is entered
	scanf(" %s", name);
	while (strcmp(name, ".") != 0) {
		scanf("%s", number);
		// Make the name allcaps to ignore case
		for (i = 0; i <= 20; i++) {
			name[i] = toupper(name[i]);
		} 
		// If the name has been entered already, add a new number to its linked list
		if (isnewname(name) == 1){
			new_leaf = createleaf(name, number);
			insertleaf(new_leaf);
		} else {
			insertnewnumber(name, number);
		}
		scanf("%s", name);
	}
	
	// Continue to read names and output numbers until a full stop is entered
	scanf("%s", name);
	while (strcmp(name, ".") != 0) {
		for (i = 0; i <= 20; i++) {
			name[i] = toupper(name[i]);
		}
		// If the name is not found, output an error message
		j = printnumbers(name, j);
		if (j == 1){
			printf("NOT FOUND\n");
			j--;
		}
		scanf("%s", name);
	}
	// Free the memory before returning, starting at the root
	freeTree(root);
	return 0;
}