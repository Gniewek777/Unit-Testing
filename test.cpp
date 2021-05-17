#include <iostream>
#include "LinkedListSuggestion.h"
#include "gtest/gtest.h"

TEST(LinkedList, pushFront)
{
    LinkedList<int> list;
    list.pushFront(1);
    list.pushFront(2);
	list.pushFront(3);
    ASSERT_TRUE(list[0]==3);
    ASSERT_TRUE(list[1]== 2);
	ASSERT_TRUE(list[2] == 1);

}

TEST(LinkedList, pushBack)
{
    LinkedList<int> list;
    list.pushBack(6);
    list.pushBack(7);
    ASSERT_TRUE(list[1]== 7);
    ASSERT_TRUE(list[0]== 6);
}


TEST(LinkedList, popFront)
{
    LinkedList<int> list;
    list.pushBack(2);
    list.pushBack(4);
    ASSERT_TRUE(list.popFront()==2);
    ASSERT_TRUE(list.popFront() ==4);
    ASSERT_TRUE(list.getSize()== 0);
}

TEST(LinkedList, popBack)
{
    LinkedList<int> list;
    list.pushBack(2);
    list.pushBack(1);
    ASSERT_TRUE(list.popBack()==1);
    ASSERT_TRUE(list.popBack()==2);
    ASSERT_TRUE(list.getSize()==0);
}


TEST(LinkedList, getSize) {
	LinkedList<int> list;
	list.pushBack(4);
	list.pushBack(2);
	ASSERT_EQ(list.getSize(), 2);
}


int main(int argc, char** argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}