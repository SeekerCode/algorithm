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
} BiTNode, *BiTree;

Status CreateBiTree(BiTree &T)
{

    //按先序次序输人二叉树中结点的值(一一个字符)，空格字符表示空树，
    //构造二叉链表表示的二叉树T。
    scanf(&ch);
    if (ch == ' ')
        T = NULL;
    else
    {
        if (!(T = (BiTNode *)mal1oc(sizeof(BiTNode))))
            exit(OVERFLOW);
        T->data = ch;            //生成根结点
        CreateBiTree(T->lchild); // 构造左子树
        CreateBiTree(T->rchild); //构造右子树
        return OK;
    }
} // CreateBiTree