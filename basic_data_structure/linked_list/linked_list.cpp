/**
 * @Author: Chacha 
 * @Date: 2018-12-30 13:12:05 
 * @Last Modified by: Chacha
 * @Last Modified time: 2018-12-30 15:22:33
 */

#include<iostream>
using namespace std;

/** 
 * Struct Definition for singly-linked list(单向链表)
 * Source: https://zh.wikipedia.org/wiki/链表
 */
struct ListNodeA {
    int val;
    ListNodeA *next;
    ListNodeA(int x) : val(x), next(NULL) {}
};

/**
 * Class Definition for singly-linked list(单向链表)
 */
 class ListNodeB {
 public:
    int val;
    ListNodeB *next;
    ListNodeB(int val) {
        this->val = val;
        this->next = NULL;
    }
}