#ifndef RISE_LAB_DATA_STRUCTURE_LINKED_LIST_H_
#define RISE_LAB_DATA_STRUCTURE_LINKED_LIST_H_

// #include <memory>

namespace rise_lab
{
namespace data_structure
{

class AbstractLinkedListNode
{
public:
    AbstractLinkedListNode *next_;
};

class LinkedList
{
public:
    LinkedList();
    virtual ~LinkedList();
    void Append(AbstractLinkedListNode *node);
    AbstractLinkedListNode *Begin();

    ///\todo
    // void Insert(AbstractLinkedListNode *destination, AbstractLinkedListNode *new_node);
    // void Remove(AbstractLinkedListNode *destination, AbstractLinkedListNode *new_node);
    // AbstractLinkedListNode* Find(void* data);

private:
    AbstractLinkedListNode *first_;
};

} // namespace data_structure
} // namespace rise_lab
#endif // DATA_STRUCTURE_LINKED_LIST_H_
