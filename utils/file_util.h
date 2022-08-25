#ifndef _FILE_UTIL_
#define _FILE_UTIL_
/**
 * ��ȡ�ı��ļ��е� ��������
 * ��һ�� �洢 ������� �� �е�����
 * �ӵڶ��п�ʼΪ��ʽ������
 */
int **readIntArrayFromFile(const char *fileName);

void writeIntArrayToFile(const char *fileName, int **intArray);

void printIntArray(int **intArray);

void releaseIntArray(int **intArray);

int **readIntMatrixFromFile(const char *fileName, int lines, int columns);

void printIntMatrix(int **intArray, int lines, int columns);

int **allocateMatrix(int lines, int columns);

void copyIntMatrix(int **destArray, int **sourArray, int lines, int columns);

void releaseIntMatrix(int **intMAtrix, int lines);
#endif // _FILE_UTI_