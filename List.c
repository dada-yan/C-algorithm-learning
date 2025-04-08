#include<stdio.h>
#include<stdbool.h>
typedef struct NodeT *List;

typedef struct Node{
int data;
struct Node *next;
}NodeT;

List newNode(int n){
  List v = malloc(sizeof(NodeT));
  assert(v!=NULL);
  v->data = n;
  v->next =NULL;
  return v;
}

bool check1(List n , int v){
  if(n==NULL){
    return false;
  }
    if(n->data ==v){
      return true;
    }
     return check(n->next, v);
}

bool check1(List n, int v){
   while(n->NULL!=NULL){
     if(n->data == v)
       return true;
     n = n->next;
   }
  return false;
}

List headinsert(List n, int v){
  if(check(n,v))
    return n;
  List h = newNode(v);
  h->next = n;
  return h;
}

List tailinsert(List n, int v){
/*
  if(check(n,v))
    return n;
  List curring = n;
  while(n->next!=NULL){
    n=n->next;
  }
  List a = newNode(v);
  n->next =a;
  return curring;
}


void tailinsert(List n, int m){
  if(n==NULL)
    return;
  while(n->next!=NULL){
    n =n->next;
  }
  n->next =newNode(m);
}

void tailinsert2(List n, int v){
 if(n==NULL)
   return;
  if(n->next == NULL){
    n->next = newNode(v);
  }
  tailinsert2(n->next,v);
}

List deletenode(List n, int b){
  if(n==NULL)
    return n;
  if(n->data == b){
    List curring = n->next;
    free(n);
    return curring;
  }
    n->next=deletenode(n->next,b);
  return n;
}

List deletenode(List n, int b){
  if(n==NULL){
    return n;
  }
  list head = n;
  while(n->next!=NULL){
    if(n->next->data == b){
      List curring = n->next;
      if(n->next->next!=NULL){
        free(n->next);
        n->next = curring->next;
        return head;
      }
      free(curring);
      return head;
    }
    n=n->next;
  }
  return head;
}


void freeList(List n){
  if(n==NULL){
    return;
  }
  freeList(n->next);
  free(n);
}

void freelist1(List n){
  if(n==NULL){
    return;
  }
  while(n!=NULL){
    List m = n->next;
    free(n);
    n=m;
  }
}
void printlist(List n){
  while(n!=NULL){
    printf("%d-\n",n->data);
    n=n->next;
  }
}
bool checkcycle(List n){
  List fast;
  List slow;
  while(fast!=NULL&&fast->next!=NULL){
    slow =slow->next;
    fast= fast->next->next;
    if(fast == slow){
      return true;
    }
  }
  return false;
}

int half-data (List n){
  if(checkcycle(List n))
    return 1;
  List fast;
  List slow;
  while(fast!=NULL){
    fast=fast->next->next;
    slow=slow->next;
  }
  printf("%d\n",slow->data);
  return slow->data;
}

  List door_cycle(List n){
   List fast;
    List slow;
    List head = fast;
    int n =0;
    while(fast!=NULL){
      fast==fast->next->next;
      slow=slow->next;
      if(fast == slow){
        n=1;
        break;
      }
    }
    slow = head;
    if(n){
      while(fast!=NULL){
        fast=fast->next
          slow=slow->next;
        if(fast=slow){
          return slow;
        }
      }
    }
    return NULL;
  }


List reverse(List n){
  if(n==NULL){
    return n;
  }
  List temp;
  List pass;
    pass =NULL;
  while(n!=NULL){
  temp = n->next;
    n->next = pass;
    pass =n;
    n=temp;
  }
  return pass;
}










