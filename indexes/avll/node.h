#ifndef NODE_H
#define NODE_H

template<typename TK, typename TV>
struct NodeAVL{
    std::pair<TK,TV> pair;
    //TK data;

    int height;
    NodeAVL* left;
    NodeAVL* right;

    //Default constructor
    NodeAVL() {}
    //Constructor con 3 parametros (Data,L,R)
    NodeAVL(std::pair<TK,TV> value, NodeAVL *left, NodeAVL *right) : pair(value), left(left), right(right), height(0) {}
    //Constructor con 4 parametros (Data,L,R,Height)
    NodeAVL(std::pair<TK,TV> value, int height, NodeAVL *left, NodeAVL *right) : pair(value), height(height), left(left), right(right) {}

    void KillSelf(){
        if(this->left != nullptr){
            this->left->KillSelf();
        }
        if(this->right != nullptr){
            this->right->KillSelf();
        }
        delete this;
    }
};
#endif