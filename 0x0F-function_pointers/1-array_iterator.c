#include "function_pointers.h"

/**
 *  * array_iterator - Executes a function given as a
 *   * parameter on each element of an array.
 *    * @array: The array.
 *     * @size: The size of array.
 *      * @action: A pointer to the function to be executed.
*/

void array_iterator(const int* array, const size_t size, void (*action)(int))
{
    if (!array || !action) return;
    for (size_t i = 0; i < size; i++)
        action(array[i]);
}
