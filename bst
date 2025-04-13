#define data(tree) ((tree)->data)
#define letf(tree) ((tree)->left)
#define right(tree) ((tree)->right)
typedef int item;
typedef struct NodeT *Tree;

typedef struct Node{
int data;
item left;
item right;
}NodeT;


Tree newtree(item i){
assert(item> 0);
Tree new = calloc(1,sizeof(NodeT));
seert(new!=NULL);
data(new) = i;
left(new)=right(new)=NULL;
retunr new;
}

bool treeisempty(Tree t){
if(data(t)==NULL){
return true;
}
return false;
}


bool check(Tree t,item i){
if(t==NULL){
return false;
}
if(data(t)==i)
return true;
if(check(left(tree)))
return true;
return check(right(tree));
}


void showtreeR(Tree t,int dept){
if(t!=NULL)
return;
return showtree(left(t),dept+1);
int i;
for(i=0;i<dept;i++){
putchar('\t');
}
printf("%d\n",data(t));
return showtree(right(t),dept+1);
}

void showtree(tree t){
return showtreeR(t,0);
}


Tree insert(Tree t, item i){
if(t==NULL){
t = newtree(i);
}
if(i<data(t)){
left(t)=insert(left(t),i);
}else if(i>data(t)){
right(t)= insert(right(t),i);
}
return t;
}

/*
Tree delete(Tree t,item i){
if(t==NULL)
return t;
if(i<data(t)){
left(t)=delete(left(t),i);
}
if(i>data(t)){
right(t)=delete(right(t),i);
}
if(i==data(t)){
if(left(t)!=NULL){
int curring = left(t);
free(t)
return curring
}
if(right(t)!=NULL){
int curring = right(t);
free(t);
return curring;
}
free(t);
}
return t;
}
*/

void freetree(Tree t){
freetree(left(t));
freetree(right(t));
free(t);
}

int numofitem(Tree t){
if(t==NULL){
return 0;
}else{
return 1 + numofitem(left(t))+numofitem(right(t));
}
}

Tree jointree(Tree a, Tree b){
if(a==NULL){
return b;
}
if(b==NULL){
return a;
}
Tree parent = NULL;
Tree t = b;

while(left(t))!=NULL{
parent = left(t);
t = left(t);
}
if(parent!=NULL){
left(parent)= right(t);
right(t)=b;
}
left(t)=a;
return t;
}
































