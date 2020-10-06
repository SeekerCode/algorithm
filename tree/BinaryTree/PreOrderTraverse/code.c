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

Status PreOrderTraverse(BiTree T, Status (*Visit)(TElemType e))
{
    //采用二叉链表存储结构，Visit是对数据元素操作的应用函数
    //先序遍历二叉树的递归算法，对每个数据元素调用Visit
    //最简单的Visit函数是：
    //  Status PrintElememt(TElemType e){   //输出元素e的值
    //      printf(e);                      //实用时，加上格式串
    //      return OK;
    //  }
    //调用实例，PreOrderTraverse(T,PrintElememt)
    if (T)
    {
        if (Visit(T->data))
            if (PreOrderTraverse(T->lchild, Visit))
                if (PreOrderTraverse(T->rchild, Visit))
                    return OK;
        return ERROR;
    }
    else
        return OK;
} //PreOrderTraverse

void PreOrder(BiTree T)
{
    if(T!=NULL){
        visit(T);
        PreOrder(T->lchild);
        PreOrder(T->rchild);
    }
}