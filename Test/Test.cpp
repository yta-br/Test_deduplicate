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
//  hash<byte*> data_hash;

  std::cout << "data hash is: " << HashRs(data) << '\n';
}
// arg1-name interface(init/put_block/get_block)
int main(int argc, char *argv[])
{
  int stat = 0;
  uint64 block_size = 15;
  uint32 blob_size = 15;
  //cout <<"input init param block_size: ";
  //cin >> block_size;
  //cout <<"input init param blob_size: ";
  //cin >> blob_size;
  stat = init(block_size, blob_size);
  while(true)
  {
    //char cmd_name[10];
    //cout << "input block command (put/get/exit): ";
    //cin >>cmd_name;
    string param_str;
    //string strblock_data;
    byte *block_data = new byte[(unsigned int)block_size];
    uint64 block_id  =1;
    //if(!strcmp(cmd_name, "put"))
    {
      //cout << "input block_id ";
      //cin >> param_str;
      //stringstream idStream(param_str);
      cout << "input block_data ";
      cin >> param_str;
      stringstream dataStream(param_str);
      if(/*(idStream >> block_id) && */(dataStream>>block_data))
        stat = put_block(block_id, block_data);
      gethash(block_data);
    }
    //else if(!strcmp(cmd_name, "get"))
    //{
    //  cout << "input block_id ";
    //  cin >> param_str;
    //  stringstream idStream(param_str);
    //  if(idStream >> block_id)
    //    stat = get_block(block_id, block_data);
    //  cout<<block_data<<endl;
    //}
    // else if(!strcmp(cmd_name, "exit"))
    //   break;
    delete[] block_data;
  }

  return stat;
}
