#include <iostream>
#include <string>
#include <sstream>
//#include <functional>

#include "..\deduplicate\deduplicate.h"
using namespace std;

unsigned int HashRs(const byte* data)
{
  static const unsigned int b = 378551;
  unsigned int a = 63689;
  unsigned int hash = 0;

  for(; *data; data++)
  {
    hash = hash * a + *data;
    a *= b;
  }
  return hash;
}


void gethash(byte* data)
{
  std::cout << "data hash is: " << HashRs(data) << '\n';
}
// arg1-name interface(init/put_block/get_block)
int main(int argc, char *argv[])
{
  int stat = 0;
  uint64 block_size = 15;
  uint32 blob_size = 15;
  stat = init(block_size, blob_size);
  while(true)
  {
    string param_str;
    byte *block_data = new byte[(unsigned int)block_size];
    uint64 block_id  =1;
    cout << "input block_data ";
    cin >> param_str;
    stringstream dataStream(param_str);
    if(ataStream>>block_data)
      stat = put_block(block_id, block_data);
    gethash(block_data);
    delete[] block_data;
  }
  return stat;
}
