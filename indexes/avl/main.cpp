#include <iostream>
#include "avl.h"
using namespace std;

struct Trans{
    string name;
    string apellido;
    int amount;

    friend ostream& operator<<(ostream& os, const Trans& t){
        os<<t.name<< "--" << t.apellido << " : "<<t.amount<<endl;
        return os;
    }
};

int main(int argc, char const *argv[])
{
    Trans* t = new Trans;
    AVLTree<string, Trans*> *avl = new AVLTree<string, Trans*>;

    avl->insert("rose",t);
    avl->insert("pepe",t);
    avl->insert("juan",t);
    avl->insert("rodrigo",t);
    avl->insert("ana",t);


    avl->printBT();

    avl->remove("ana",t);

    avl->printBT();



    return 0;

}
