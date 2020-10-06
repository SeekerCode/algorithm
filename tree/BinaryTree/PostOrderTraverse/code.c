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