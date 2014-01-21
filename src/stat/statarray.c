/**
 * @file    statarray.c
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
 * See header file for description.
 */
#include <stdlib.h>

#include "stat/statarray.h"

struct statarray* new_statarray(long unsigned int capacity)
{
        double* arr = (double*) malloc(capacity * sizeof(double));
        struct statarray* sarr = malloc(1 * sizeof(struct statarray));
        sarr->array = arr;
        sarr->capacity = capacity;
        sarr->size = 0;
        sarr->mean = 0.0f;
        return sarr;
}

void free_statarray(struct statarray* statarray)
{
        free(statarray->array);
        free(statarray);
}

int statadd(struct statarray* array, double element)
{
        if (array->size >= array->capacity)
        {
                long unsigned int newcap = (array->capacity * 3) / 2 + 1;
                double *newarray = (double *) realloc(array->array,
                                newcap * sizeof(double));

                if (newarray == NULL) {
                        return -1;
                }
                array->array = newarray;
                array->capacity = newcap;
        }
        array->array[array->size++] = element;

        /* Update the arithmetic mean */
        array->mean += (element - array->mean) / (double) array->size;
        return 0;
}
