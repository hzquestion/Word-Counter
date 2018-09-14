#include "BiTree.h"

Status InitBiTree(BiTree &T){

T = (BiTree)malloc(sizeof(BiTNode));

if(!T) return ERROR;

return OK;

}



BiTree MakeBiTree(TElemType e,BiTree L,BiTree R){

BiTree t;

t = (BiTree)malloc(sizeof(BiTNode));

if(NULL == t) return NULL;

t->data = e;

t->lchild = L;

t->rchild = R;

return t;

}



void DestoryBiTree(BiTree &T){

free(T);

}



Status BiTreeEmpty(BiTree &T){

if(NULL == T) return TRUE;

else return FALSE;

}



Status BreakBitree(BiTree &T,BiTree &L,BiTree &R){

if(NULL == T) return FALSE;

L = T->lchild;

R = T->rchild;

T->lchild = NULL;

T->rchild = NULL;

return TRUE;

}



Status ReplaceLeft(BiTree &T,BiTree <){

if(NULL == T) return FALSE;

BiTree t;

t = T->lchild;

T->lchild = LT;

LT = t;

return TRUE;

}



Status ReplaceRight(BiTree &T,BiTree &RT){

if(NULL == T) return FALSE;

BiTree t;

t = T->rchild;

T->rchild = RT;

RT = t;

return TRUE;

}

Status CutLeft(BiTree &T,BiTree <){

if(NULL == T) {

LT = NULL;

return FALSE;

}

LT = T->lchild;

T->lchild = NULL;

return TRUE;

}

Status CutRight(BiTree &T,BiTree &RT){

if(NULL == T) {

RT = NULL;

return FALSE;

}

RT = T->lchild;

T->lchild = NULL;

return TRUE;

}


Status PreTraverse(BiTree T,Status(*visit)(TElemType e)){

if(NULL == T) return OK;

if(ERROR == visit(T->data)) return ERROR;

if(ERROR == PreTraverse(T->lchild,visit))

return ERROR;

return PreTraverse(T->rchild,visit);

}
