/**
 * @file    bst.c
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
 * Source code for executable for testing and benchmarking the BST.
 */
#include <stdio.h>

#include "bst/tree.h"

int main(void)
{
        struct inode* root = new_inode(8);
        struct inode* n3 = new_inode(3);
        struct inode* n10 = new_inode(10);
        struct inode* n1 = new_inode(1);
        struct inode* n6 = new_inode(6);
        struct inode* n14 = new_inode(14);
        struct inode* n4 = new_inode(4);
        struct inode* n7 = new_inode(7);
        struct inode* n13 = new_inode(13);

        struct inode* res;

        root->left = n3;
        root->right = n10;

        n3->left = n1;
        n3->right = n6;

        n6->left = n4;
        n6->right = n7;

        n10->right = n14;
        
        n14->left = n13;

        insert(5, root);

        res = search(5, root);
        printf("-\n");
        printf("%d\n", res->data);
        return 0;
}
