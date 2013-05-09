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
        /*struct inode* res;*/

        insert(3, root);
        insert(10, root);
        insert(1, root);
        insert(6, root);
        insert(14, root);
        insert(4, root);
        insert(7, root);
        insert(13, root);

/*        res = search(7, root);
        printf("%d\n", res->data); */
        
        free_inode(root);
        return 0;
}
