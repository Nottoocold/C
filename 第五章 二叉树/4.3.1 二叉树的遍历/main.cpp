#include "function.h"

//�ݹ�ʵ��
//abdhiejcfg
void preOrder(BiTree p)
{
	if(p!=NULL)
	{
		putchar(p->data);//�ȼ���visit����
		preOrder(p->lchild);
		preOrder(p->rchild);
	}
}
//�������  hdibjeafcg
void InOrder(BiTree p)
{
	if(p!=NULL)
	{
		InOrder(p->lchild);
		putchar(p->data);
		InOrder(p->rchild);
	}
}
//hidjebfgca
void PostOrder(BiTree p)
{
	if(p!=NULL)
	{
		PostOrder(p->lchild);
		PostOrder(p->rchild);
		putchar(p->data);
	}
}
//��������ǵݹ飬�ǵݹ�ִ��Ч�ʸ��ߣ����ĸ��ʺܵ�
void InOrder2(BiTree T)
{
	SqStack S;
	InitStack(S);BiTree p=T;
	while(p||!StackEmpty(S))//�߼���||
	{
		if(p)
		{
			Push(S,p);
			p=p->lchild;
		}else{
			Pop(S,p);putchar(p->data);
			p=p->rchild;
		}
	}
}
//��α���,������ȱ���
void LevelOrder(BiTree T)
{
	LinkQueue Q;
	InitQueue(Q);
	BiTree p;
	EnQueue(Q,T);//�������
	while(!IsEmpty(Q))
	{
		DeQueue(Q,p);
		putchar(p->data);
		if(p->lchild!=NULL)
			EnQueue(Q,p->lchild);
		if(p->rchild!=NULL)
			EnQueue(Q,p->rchild);
	}
}
//������C��ѧӪ���γ�
//�������Ľ�������ν�������ǰ�����򡢺������������ǵݹ��������α���
int main()
{
	BiTree pnew;
	int i,j,pos;
	char data;
	BiTree tree=NULL;//����
	ptag_t phead=NULL,ptail=NULL,listpnew,pcur;//�ṹ��ָ��,phead���Ƕ���ͷ��ptail���Ƕ���β,
	//abcdefghij
	while(scanf("%c",&data)!=EOF)
	{
		if(data=='\n')
		{
			break;
		}
		pnew=(BiTree)calloc(1,sizeof(BiTNode));//calloc����ռ䲢�Կռ���г�ʼ������ֵΪ0
		pnew->data=data;//���ݷŽ�ȥ
		listpnew=(tag_t*)calloc(1,sizeof(tag_t));//�����н������ռ䣬������������ǲ���ͷ�ڵ��
		listpnew->BiNode_p=pnew;
		if(NULL==tree)
		{
			tree=pnew;//���ĸ�
			phead=listpnew;//����ͷ
			ptail=listpnew;//����β
			pcur=listpnew;
			continue;
		}else{
			ptail->pnext=listpnew;//�½���������ͨ��β�巨
			ptail=listpnew;//ptailָ�����β��
		}//pcurʼ��ָ��Ҫ����Ľ���λ��
		if(NULL==pcur->BiNode_p->lchild)//��ΰ��½�������
		{
			pcur->BiNode_p->lchild=pnew;//���½��ŵ�Ҫ����������
		}else if(NULL==pcur->BiNode_p->rchild)
		{
			pcur->BiNode_p->rchild=pnew;//���½��ŵ�Ҫ��������ұ�
			pcur=pcur->pnext;//���Ҷ����˽���pcurָ����е���һ��
		}
	}

	printf("--------ǰ�����----------\n");
	preOrder(tree);
	printf("\n--------�������------------\n");
	InOrder(tree);
	printf("\n--------�������------------\n");
	PostOrder(tree);
	printf("\n--------��������ǵݹ�------\n");//��Ҫ�Ե�
	InOrder2(tree); 
	printf("\n--------��α���-----------\n");
	LevelOrder(tree);
	printf("\n");
	system("pause");
} 