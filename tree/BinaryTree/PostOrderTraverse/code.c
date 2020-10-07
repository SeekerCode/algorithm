//-------------二叉树的顺序存储表示--------
#define MAX_TREE_SIZE 100                  //二叉树的最大节点数
typedef int TElemType;                     //---int char float double string 均可---
typedef TElemType SqBiTree[MAX_TREE_SIZE]; //0号单元存储根节点
SqBiTree bt;

//-------------二叉树的二叉链表存储表示--------
typedef struct BiNode
{
    TElemType data;
    struct BiNode *lchild, *rchild;
} BiNode, *BiTree;

void PostOrderTraverse(BiTree T)
{
    //采用二叉链表存储结构,Visit是对数据元素操作的应用函数。
    //后序遍历二叉树T的非递归算法,对每个数据元素调用函数Visit。
    
    InitStack(S);
    BiTree p = T;
    r = NULL;
    while (p || !StackEmpty(S))
    {
        if (p) //走到最左边
        {
            push(S, p);
            p = p->lchild;
        }
        else //向右
        {
            GetTop(S, p);                    //读取栈顶结点(不出栈)
            if (p->rchild && p->rchild != r) //若右子树存在且未被访问过
            {
                p = p->rchild; //转向右
                push(S, p);    //压入栈
                p = p->lchild; //再走到最左
            }
            else //否则弹出结点并访问
            {
                pop(S, p);      //将结点弹出
                visit(p->data); //访问
                r = p;          //记录最近访问过的结点
                p = NULL;       //访问完结点后重置p指针
            }
        }
    }
}

void PostOrder(BiTree T)
{
    if (T != NULL)
    {
        PostOrder(T->lchild);
        PostOrder(T->rchild);
        visit(T);
    }
}