/**
 * @file    tree.h
 * @author  Andreas Halle <andern@gmail.com>
 * @version 0.1.0
 *
 * @section LICENSE
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Lesser General Public License for more details.
 * 
 * You should have received a copy of the GNU Lesser General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 * @section DESCRIPTION
 *
 * Implementation of a binary search tree (BST).
 */
#ifndef ARTCLE_BST_TREE_H
#define ARTCLE_BST_TREE_H
struct inode {
    int data;
    struct inode* left;
    struct inode* right;
};

/**
 * Allocate memory for a node, set its data element and return a pointer
 * to the node.
 *
 * @param  data
 *         data element the new node will have.
 * @return pointer to the newly allocated node.
 */
struct inode* new_inode(int data);

/**
 * Free a node and all its children recursively.
 *
 * @param node
 *        pointer to node to free.
 */
void free_inode(struct inode* node);

/**
 * Search the subtree of the given node for the given data element.
 *
 * @param  data
 *         data element to look for.
 * @param  node
 *         pointer node to start search from.
 * @return pointer to node that has result. Return null if data is not found.
 *         
 */
struct inode* search(int data, struct inode* node);

/**
 * Insert a given data element into the subtree of the given node.
 *
 * @param  data
 *         data element to insert.
 * @param  node
 *         insert data element in the subtree of this node. 
 * @return 1 on successful insertion. Otherwise 0.
 */
int insert(int data, struct inode* node);
#endif
