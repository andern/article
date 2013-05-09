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
        struct inode root;
        struct inode n1;
        struct inode n2;
        struct inode n3;
        struct inode n4;
        struct inode n5;
        struct inode n6;
        struct inode n7;
        struct inode n8;

/*        struct inode* res; */

        root.data = 8; 

        n1.data = 3; 
        n2.data = 10;
        n3.data = 1; 
        n4.data = 6;                                                                      
        n5.data = 14;                                                                     
        n6.data = 4;
        n7.data = 7;
        n8.data = 13;

        root.left = &n1;
        root.right = &n2;
        n1.left = &n3;
        n1.right = &n4;
        n2.right = &n5;
        n4.left = &n6;
        n4.right = &n7;
        n5.left = &n8;

        search(7, &root);
        printf("-----\n");
        printf("-----\n");

        search(5, &root);

        return 0;
}
