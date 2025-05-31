#ifndef _ASTCOMMON_HPP_
#define _ASTCOMMON_HPP_


#include <string>
#include <vector>
using namespace std;

enum TreeNodeType    /*语法树节点的类型*/
{
    semantic,   /*语义节点*/
    id,         /*标识符*/
    intType,    /*整形、浮点型*/
    floatType,
    intVal,     /*整数值、浮点数值*/
    floatVal,
    other,      /*其他*/
};

union TreeNodeVal   /*存储节点值：一个字符串指针、整数值或浮点数值*/
{
    string *id;
    int intVal;
    float floatVal;
};


/*节点结构*/
struct TreeNode
{
    TreeNodeType type;          /*类型*/
    const char *label;       /*标识符的文本表示*/
    int line;               /*行号*/
    TreeNodeVal val;            /*值*/
    vector<TreeNode *>children;     /*子节点*/

    TreeNode():children{},type(TreeNodeType::other),val(){}
    TreeNode(TreeNodeType type,int line, const char *label):children{},line(line),type(type), label(label) {}
    TreeNode(TreeNodeType type, int line, const char *label, int val) : children{}, line(line), type(type), label(label)
    {
        this->val.intVal = val;
    }
    TreeNode(TreeNodeType type, int line, const char *label, float val) : children{}, line(line), type(type), label(label)
    {
        this->val.floatVal = val;
    }
    TreeNode(TreeNodeType type, int line, const char *label, string *val) : children{}, line(line), type(type), label(label)
    {
        this->val.id = val;
    }
};

/*创建一个新的语义节点*/
void inline createNode(TreeNode *&theNode, const char *label, int line)
{
#ifdef C_MINUS_DEBUG
    printf("createNode: %s\n", label);
#endif // C_MINUS_DEBUG
    theNode = new TreeNode(TreeNodeType::semantic, line, label);
    return;
}

/*更新节点的行号*/
void inline updateNodeLine(TreeNode *&theNode)
{
    int minn = theNode->line;
    for (auto &i : theNode->children)
    {
        if (i == nullptr)
            continue;
        minn = min(minn, i->line);
    }
    theNode->line = minn;
}

/*创建新节点，根据值的类型*/
template <typename T>
void inline createNodeT(TreeNode *&theNode, int line, const char *label, T val, TreeNodeType type)
{
#ifdef C_MINUS_DEBUG
    printf("createNodeT: %s; val: %d, %f\n", label, val, val);
#endif // C_MINUS_DEBUG
    theNode = new TreeNode(type, line, label, val);
}

/*创建一个没有值的节点*/
void inline createNodeT(TreeNode *&theNode, int line, const char *label, TreeNodeType type)
{
#ifdef C_MINUS_DEBUG
    printf("createNodeT: %s\n", label);
#endif // C_MINUS_DEBUG
    theNode = new TreeNode(type, line, label);
}


#endif  