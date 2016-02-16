// Test_dedublicate.cpp : main project file.

#include <iostream>
#include "deduplicate.h"

using namespace std;


//  block_size � ������ ������������� ����� ������ � ������
//  blob_size � ������ ��������� blob � ���������� ������
//  ����� ������������ ��������� ��������������� ����������.
//  ������������ ��������: 0 � ������ ������, ����� �������� �� 0 � ������ �������
int init(uint64 block_size, uint32 blob_size)
{
  int stat = 0;
  cout<<"block_size = " << block_size << "; blob_size = " << blob_size << endl;
  return stat;
}
//  block_id � ���������� ������������� �����
//  block_data ������ ���� �������� block_size, ������ �����
//  ����� �������� ���� �� ��������.
//  ������������ ��������: 0 � ������ ������, ����� �������� �� 0 � ������ �������.
int put_block(uint64 block_id, const byte* block_data)
{
  int stat = 0;
  cout<<"block_id = " << block_id << "; block_data = " << block_data << endl;
  return stat;
}

//  block_id � ���������� ������������� �����
//  block_data � ��������� �� ��������� ����� � ������ �������� block_size
//  ����� ��������� block_data ������� ����� block_id
int get_block(uint64 block_id, byte* block_data)
{
  int stat = 0;
  strcpy((char*)block_data, "123456789");
  return stat;
}

