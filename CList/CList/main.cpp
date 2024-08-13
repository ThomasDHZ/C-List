#include <iostream>
extern "C"
{
#include "CList.h"
}

int main()
{
    int asdf = 1;
    int fdas = 5;
    int asdf2 = 9;
    int fdas2 = 13;
    int asdf3 = 17;
    int fdas3 = 25;
    List test1 = { .Data = (void*)asdf, .ElementSize = 2, .ItemCount = 3, .Capacity = 4 };
    List test2 = { .Data = (void*)fdas, .ElementSize = 6, .ItemCount = 7, .Capacity = 8 };
    List test3 = { .Data = (void*)asdf2, .ElementSize = 10, .ItemCount = 11, .Capacity = 12 };
    List test4 = { .Data = (void*)fdas2, .ElementSize = 14, .ItemCount = 15, .Capacity = 16 };
    List test5 = { .Data = (void*)fdas3, .ElementSize = 17, .ItemCount = 18, .Capacity = 19 };

    List list;
    List_StartUp(&list, sizeof(List));
    List_Add(&list, &test1);
    List_Add(&list, &test2);
    List_Add(&list, &test3);
    List_Add(&list, &test4);
    List_Add(&list, &test5);

    List index0 = *(List*)List_Get(&list, 0);
    List index1 = *(List*)List_Get(&list, 1);
    List index2 = *(List*)List_Get(&list, 2);
    List index3 = *(List*)List_Get(&list, 3);
    List index4 = *(List*)List_Get(&list, 4);

    std::cout << "Before remove Index 2" << std::endl;
    std::cout << "index0: " << index0.Capacity << " " << index0.Data << " " << index0.ElementSize << " " << index0.ItemCount << std::endl;
    std::cout << "index1: " << index1.Capacity << " " << index1.Data << " " << index1.ElementSize << " " << index1.ItemCount << std::endl;
    std::cout << "index2: " << index2.Capacity << " " << index2.Data << " " << index2.ElementSize << " " << index2.ItemCount << std::endl;
    std::cout << "index3: " << index3.Capacity << " " << index3.Data << " " << index3.ElementSize << " " << index3.ItemCount << std::endl;
    std::cout << "index4: " << index4.Capacity << " " << index4.Data << " " << index4.ElementSize << " " << index4.ItemCount << std::endl << std::endl;

    List_Remove(&list, 2);

    index0 = *(List*)List_Get(&list, 0);
    index1 = *(List*)List_Get(&list, 1);
    index2 = *(List*)List_Get(&list, 2);
    index3 = *(List*)List_Get(&list, 3);
    index4 = *(List*)List_Get(&list, 4);

    std::cout << "After remove Index 2" << std::endl;
    std::cout << "index0: " << index0.Capacity << " " << index0.Data << " " << index0.ElementSize << " " << index0.ItemCount << std::endl;
    std::cout << "index1: " << index1.Capacity << " " << index1.Data << " " << index1.ElementSize << " " << index1.ItemCount << std::endl;
    std::cout << "index2: " << index2.Capacity << " " << index2.Data << " " << index2.ElementSize << " " << index2.ItemCount << std::endl;
    std::cout << "index3: " << index3.Capacity << " " << index3.Data << " " << index3.ElementSize << " " << index3.ItemCount << std::endl;
    std::cout << "index4: " << index4.Capacity << " " << index4.Data << " " << index4.ElementSize << " " << index4.ItemCount << std::endl;

    getchar();
    List_FreeMemory(&list);
    return 0;
}