int insertInArray(int list[], int index, int* numItems, int arrayCapacity, int newVal)
{
    if(*numItems == arrayCapacity)
    {
        return -1;
    }
    int newArray[*numItems + 1] = {}; 
    
    for(int i = 0; i < *numItems; i++)
    {
        if (i < index)  // All the elements before the one that must be inserted
        {
           newArray[i] = list[i];
        }
  
        if (i == index)  // The right place to insert the new element
        {
            newArray[i] = newVal;
        }
 
        if (i > index)  // Now all the remaining elements
        {
            newArray[i] = list[i-1];
        }
    }
    (*numItems)++;
    list = newArray;

    return 0;
}