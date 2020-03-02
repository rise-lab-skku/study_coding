#include "rise_lab/data_structure/linked_list.h"
#include <iostream>

namespace rise_lab
{
namespace data_structure
{

LinkedList::LinkedList()
{
}
LinkedList::~LinkedList()
{
}
void LinkedList::Append(AbstractLinkedListNode *node)
{
    node->next_ = first_;
    first_ = node;
}
AbstractLinkedListNode *LinkedList::Begin()
{
    return first_;
}

} // namespace data_structure
} // namespace rise_lab

// Usage Example

class IntegerNode : public rise_lab::data_structure::AbstractLinkedListNode
{
public:
    IntegerNode(int val) : data_(val) {}
    virtual ~IntegerNode() {}
    int data_;
};

int main(int argc, char *argv[])
{
    rise_lab::data_structure::LinkedList list;
    for (unsigned int i = 0; i < 10; ++i)
    {
        list.Append(new IntegerNode(i));
    }
    rise_lab::data_structure::AbstractLinkedListNode *node = list.Begin();
    while (node != nullptr)
    {
        std::cout << ((IntegerNode *)node)->data_ << std::endl;
        node = node->next_;
    }
    return 0;
}