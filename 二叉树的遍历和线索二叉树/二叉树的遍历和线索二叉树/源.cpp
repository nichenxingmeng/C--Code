void Preorder(BiTree T){
	if(T!=NULL){
		visit(T);
		Preorder(T->lchild);
		Preorder(T->rchild);
	}
}

void InOrder(BiTree T){
	if(T!=NULL){
		InOrder(T->lchild);
		visit(T);
		InOrder(T->rchild);
	}
}

void PostOrder(BiTree T){
	if(T!=NULL){
		PostOrder(T->lchild);
		PostOrder(T->rchild);
		visit(T);
	}
}

void InOrder2(BiTree T){
InitStack(S); BiTree p=T;
	while(p||!IsEmpty(S)){
		if(p){
			Push(S,p);
			p=p->lchild;
		}
		else{
			Pop(S,p);visit(p);
			p=p->rchild;
		}
	}
}

void PreOrder2(BiTree T){
InitStack(S); BiTree p = T;
	while(p||!IsEmpty(S)){
		if(p){
			visit(p);Push(S,p);
			p=p->lchild;
		}
		else{
			Pop(S,p);
			p=p->rchild;
		}
	}
}

void LevelOrder(BiTree T){
	InitQueue(Q);
	BiTree p;
	EnQueue(Q,T);
	while(!IsEmpty(Q)){
		DeQueue(Q,p);
		visit(p);
		if(p->lchild!=NULL)
			EnQueue(Q,p->lchild);
		if(p->rchild!=NULL)
			EnQueue(Q,p->rchild);
	}
}

typedef struct ThreadNode{
	ElemType data;
	struct ThreadNode *lchild,*rchild;
	int ltag,rtag;
}ThreadNode,*ThreadTree;