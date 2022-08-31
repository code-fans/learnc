#ifndef _FILE_UTIL_
#define _FILE_UTIL_
/**
 * 读取文本文件中的 整形数组
 * 第一行 存储 数组的行 和 列的数量
 * 从第二行开始为正式的数据
 */
int **readIntArrayFromFile(const char *fileName);

void releaseIntArray(int **intArray);

void writeIntArrayToFile(const char *fileName, int **intArray);

void printIntArray(int **intArray);

/**
 * 读取每一行，每一行 分割成一个数组;一行不能超过8192个字符
 * 第一行 的 第一个 数字为一共多少行， 后面的数字为 每一行多少个数字
 */
int **readIntArrayAsLineFromFile(const char *fileName);

void releaseIntArrayAsLine(int **intArray);

void printIntArrayAsLine(int **intArray, int writeInfo);

int **readIntMatrixFromFile(const char *fileName, int lines, int columns);

void printIntMatrix(int **intArray, int lines, int columns);

int **allocateMatrix(int lines, int columns);

void copyIntMatrix(int **destArray, int **sourArray, int lines, int columns);

void releaseIntMatrix(int **intMAtrix, int lines);

#endif // _FILE_UTI_
