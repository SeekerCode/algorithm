
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

Status InOrderTraverse(BiTree T, Status (*Visit)(TElemTypee))
{
    //采用二叉链表存储结构,Visit是对数据元素操作的应用函数。
    //中序遍历二叉树T的非递归算法,对每个数据元素调用函数Visit。

    InitStack(S);
    Push(S, T); // 根指针进栈

    while (!StackEmpty(S)) //判栈空
    {

        while (GetTop(S, p) && p)
            Push(S, p->lchild); //向左走到尽头
        Pop(S, p);              // 空指针退栈

        if (!StackEmpty(S)) //访问结点，向右一步
        {

            Pop(S, p);
            if (!Visit(p->data))
                return ERROR;
            Push(S, p->rchild);
        } //if
    }     //while
}

Status InOrderTraverse(BiTree T，Status (*Visit)(TElemType e))
{
    //采用二叉链表存储结构,Visit是对数据元素操作的应用函数。
    //中序遍历二叉树T的非递归算法,对每个数据元素调用函数Visit。

    InitStack(S);
    p = T;
    while (p || !StackEmpty(S))
    {

        if (p)
        {
            Push(S, p);
            p = p->lchild;
        } //根指针进栈，遍历左子树
        else
        { //根指针退栈，访问根结点，遍历右子树

            Pop(S, p);
            if (!Visit(p->data))
                return ERROR;
            p = p->rchild;

        } // else
    }     // While
    return OK;
} // InOrderTraverse

void InOrder(BiTree T)
{
    if (T != NULL)
    {
        PreOrder(T->lchild);
        visit(T);
        PreOrder(T->rchild);
    }
}