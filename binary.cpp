#ifndef BINARYTREE_CPP
#define BINARYTREE_CPP

#include<iostream>
#include<stack>
#include<queue>
#include<string>

using namespace std;

template <typename TElemType>
struct BitNode
{
  TElemType data;
  BitNode<TElemType> *lchild,*rchild;
} ;

template <typename TElemType>
void InitBiTree(BitNode<TElemType> *&T)
{
  T=new BitNode<TElemType>;
  T->lchild=NULL;
  T->rchild=NULL;
}

template <typename TElemType>
void DestroyBiTree(BitNode<TElemType> *T)
{
  if(T!=nullptr)
  {
    DestroyBiTree(T->lchild);
    DestroyBiTree(T->rchild);
    delete T;
  }
}

bool strcmp(string a,string b)
{
  if(a==b)return true;
  else{return 0;}
}

template <typename TElemType>
void CreateBiTree_xian(BitNode<TElemType> *T)
{   
  // std::vector<std::string> nodeValue= {"1", "2", "2", "3", "#", "#", "3", "#", "1"}; //使用的时候应该更改一下
  // InitBiTree(T);
  
  // if(nodeValue.empty()||!strcmp(nodeValue.front().c_str(),"#"))
  // return nullptr;
  
  // std::queue <BitNode<string>> treeLeaf;
  // treeLeaf.push(*T);
  // int vIndex=0;
  // while (vIndex<nodeValue.size())
  // {
  //   BitNode<string> *temp=treeLeaf.front();
  //   treeLeaf.pop();
  //   if(strcmp(nodeValue[vIndex].c_str(),"#"))
  //   {
  //     *temp = new BitNode;
  //     *temp->data=nodeValue[vIndex];
  //     treeLeaf.push(&(*temp) -> left);
  //     treeLeaf.push(&(*temp) -> right);
  //   }
  //   ++ vIndex;
  // }
  // return T;  
char ch;
cin>>ch;
if(ch=='#')T=nullptr;
else
{
  T=new BitNode<TElemType>;
  T->data=ch;
  CreateBiTree_xian(T->lchild);
  CreateBiTree_xian(T->rchild);
}  

}//先序遍历建立二叉链表;                           


template <typename TElemType>
bool BiTreeEmpty(BitNode<TElemType> *T)
{
  if((*T)!=nullptr)
  {
    return true;
  }
  else
  {
    return false;
  }
}


template <typename TElemType>
int BiTreeDepth(BitNode<TElemType> *T)
{
  if(T==nullptr)return 0;
  else
  {
    int m=BiTreeDepth(T->lchild);
    int n=BiTreeDepth(T->rchild);
    if (m>n) return m+1;
    else
    {
      return n+1;
    }
  }
}
template <typename TElemType>
int NodeCount(BitNode<TElemType> *T)
{
  if(T==null) return 0;
  else return NodeCount(T->lchild)+NodeCount(T->rchild)+1;
}

template <typename TElemType>
//中序遍历二叉树的非递归算法
void InOrderTraverse(BitNode<TElemType> *T)
{
  stack<TElemType>s;
  s.clear();
  p=T;
  q=new BitNode<TElemType>;
  while (p||!s.empty())
  {
    if(p)
    {
      s.push(p);
      p=p->lchild;
    }
    else
    {
      q=s.top()
      s.pop();
      cout<<q->data;
      p=q->rchild;

    }
  }
  
}

int main()
{
  BitNode<string> *T;
  CreateBiTree_xian(T);
}

#endif 

