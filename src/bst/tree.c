/**
 * @file    tree.c
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
 * See header file for details.
 */
#include <stdio.h>
#include <stdlib.h>

#include "bst/tree.h"
struct inode* new_inode(int data)
{
        struct inode* n = (struct inode*) calloc(1, sizeof(struct inode));
        if (n == NULL) return NULL;
        n->data = data;
        return n;
}

void free_inode(struct inode* node)
{
        if (node == NULL) return;
        free_inode(node->left);
        free_inode(node->right);
        free(node);
}

static struct inode** rsearch(int data, struct inode** node)
{
        if ((*node) != NULL) printf("%d\n", (*node)->data);
        if ((*node) == NULL || (*node)->data == data) return node;
        if (data < (*node)->data) return rsearch(data, &(*node)->left);
        return rsearch(data, &(*node)->right);
}

struct inode* search(int data, struct inode* root)
{
        struct inode** res = rsearch(data, &root);
        return *res;
}

int insert(int data, struct inode* root)
{
        struct inode** res = rsearch(data, &root);
        printf("Before first if\n");
        if (*res != NULL) return 0;
        printf("Passed first if\n");

        *res = new_inode(data);
        if (*res == NULL) return 0;
        return 1;
}
