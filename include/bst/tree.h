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

struct inode* new_inode(int data);
void free_inode(struct inode* node);

struct inode* search(int data, struct inode* node);

#endif
