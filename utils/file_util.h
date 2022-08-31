#ifndef _FILE_UTIL_
#define _FILE_UTIL_
/**
 * ��ȡ�ı��ļ��е� ��������
 * ��һ�� �洢 ������� �� �е�����
 * �ӵڶ��п�ʼΪ��ʽ������
 */
int **readIntArrayFromFile(const char *fileName);

void releaseIntArray(int **intArray);

void writeIntArrayToFile(const char *fileName, int **intArray);

void printIntArray(int **intArray);

/**
 * ��ȡÿһ�У�ÿһ�� �ָ��һ������;һ�в��ܳ���8192���ַ�
 * ��һ�� �� ��һ�� ����Ϊһ�������У� ���������Ϊ ÿһ�ж��ٸ�����
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
