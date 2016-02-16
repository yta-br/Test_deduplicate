// Test_dedublicate.cpp : main project file.

#include <iostream>
#include "deduplicate.h"

using namespace std;


//  block_size — размер передаваемого блока данных в байтах
//  blob_size — размер хранимого blob в количестве блоков
//  Метод осуществляет установку соответствующих параметров.
//  Возвращаемые значения: 0 в случае успеха, число отличное от 0 в случае неудачи
int init(uint64 block_size, uint32 blob_size)
{
  int stat = 0;
  cout<<"block_size = " << block_size << "; blob_size = " << blob_size << endl;
  return stat;
}
//  block_id — уникальный идентификатор блока
//  block_data —набор байт размером block_size, данные блока
//  Метод помещает блок на хранение.
//  Возвращаемые значения: 0 в случае успеха, число отличное от 0 в случае неудачи.
int put_block(uint64 block_id, const byte* block_data)
{
  int stat = 0;
  cout<<"block_id = " << block_id << "; block_data = " << block_data << endl;
  return stat;
}

//  block_id — уникальный идентификатор блока
//  block_data — указатель на свободное место в памяти размером block_size
//  Метод заполняет block_data данными блока block_id
int get_block(uint64 block_id, byte* block_data)
{
  int stat = 0;
  strcpy((char*)block_data, "123456789");
  return stat;
}

