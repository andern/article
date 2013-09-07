/**
 * @file    stat.c
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
 * Source code for executable for testing and benchmarking the stat package.
 */
#include <stdio.h>

#include "stat/statarray.h"

int main(void)
{
        struct statarray* arr = new_statarray(10);
        int i;
        for (i = 1; i <= 100; i++)
        {
                statadd(arr, i*10);
                printf("%f\n", arr->mean);
        }

        return 0;
}
