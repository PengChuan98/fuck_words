// 文件的主要功能为控制文件的读写
// 1、读取文件夹下面所有符合条件的filename
// 2、获取单个文件的具体内容，并且转化成我要的数据结构
// 3、根据具体的数据格式写入文件(这里应该有好几种可能性)
//
char* GetDirNames(char* dirname);
words* LoadWordsFromFile(char* filename);
bool WriteWordsToFile(words* ws);
