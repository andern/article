/**
 * @file    statarray.h
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
 * A dynamic array keeping track of the arithmetic mean of the numbers in it.
 */
#ifndef ARTCLE_STAT_STATARRAY_H
#define ARTCLE_STAT_STATARRAY_H
struct statarray {
        double* array;
        long unsigned int capacity;
        long unsigned int size;
        double mean;
};

/**
 * Allocate memory for a new statarray, set its capacity and return a pointer
 * to the statarray.
 *
 * @param capacity
 *        the number of elements the statarray can initially hold.
 * @return pointer to the newly allocated statarray.
 */
struct statarray* new_statarray(long unsigned int capacity);

/**
 * Free a statarray.
 *
 * @param statarray
 *        pointer to a statarray to free.
 */
void free_statarray(struct statarray* statarray);

/**
 * Add an element to the array. Allocate more memory if needed in order to add
 * elements to the array.
 *
 * @param array
 *        array to add element to.
 * @param element
 *        element to add to the array.
 */
int statadd(struct statarray* array, double element);

#endif
