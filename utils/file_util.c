#include "file_util.h"
#include <stdlib.h>
#include <stdio.h>
#include <cstring>
/**
 * 读取文本文件中的 整形数组
 * 第一行 存储 数组的行 和 列的数量
 * 从第二行开始为正式的数据
 */
int **readIntArrayFromFile(const char *fileName)
{
    FILE *fpRead = fopen(fileName, "r");
    if (fpRead == NULL)
    {
        return NULL;
    }

    int *firstLine = (int *)malloc(sizeof(int) * 2);
    fscanf(fpRead, "%d", &firstLine[0]);
    fscanf(fpRead, "%d", &firstLine[1]);

    int **result = (int **)malloc(sizeof(int *) * (firstLine[0] + 1));
    result[0] = firstLine;

    for (int i = 0; i < firstLine[0]; i++)
    {
        int *curLine = (int *)malloc(sizeof(int) * firstLine[1]);
        for (int j = 0; j < firstLine[1]; j++)
        {
            fscanf(fpRead, "%d", &curLine[j]);
        }
        result[i + 1] = curLine;
    }
    fclose(fpRead);
    return result;
}

void releaseIntArray(int **intArray)
{
    if (intArray == NULL)
    {
        return;
    }

    int arrayLen = intArray[0][0] + 1;
    for (int i = 0; i < arrayLen; i++)
    {
        free(intArray[i]);
        intArray[i] = NULL;
    }
    free(intArray);
    intArray = NULL;
}

int readIntFromLine(int *intList, char *cline)
{
    int len = strlen(cline);
    int nCount = 0;
    int nTemp = 0;
    int nPos = 0;
    //去空格
    while (nPos < len)
    {
        int c = cline[nPos];
        if (c >= '0' && c <= '9')
        {
            break;
        }
        nPos++;
    }
    int hasLeftNum = 0;
    while (nPos < len)
    {
        int c = cline[nPos];
        nPos++;
        if (c >= '0' && c <= '9')
        {
            nTemp = nTemp * 10 + (c - '0');
            hasLeftNum = 1;
        }
        else
        {
            intList[nCount] = nTemp;
            nTemp = 0;
            nCount++;
            hasLeftNum = 0;
            //去空格
            while (nPos < len)
            {
                int c = cline[nPos];
                if (c >= '0' && c <= '9')
                {
                    break;
                }
                nPos++;
            }
        }
    }
    if (hasLeftNum == 1)
    {
        intList[nCount] = nTemp;
        nCount++;
    }
    return nCount;
}

/**
 * 读取每一行，每一行 分割成一个数组；一行不能超过8192个字符
 * 第一行 的 第一个 数字为一共多少行， 后面的数字为 每一行多少个数字
 */
int **readIntArrayAsLineFromFile(const char *fileName)
{
    FILE *fpRead = fopen(fileName, "r");
    if (fpRead == NULL)
    {
        return NULL;
    }
    char cline[8192];
    int nline = 0;
    int **result = (int **)malloc(sizeof(int *) * 1024);
    int *firstLine = (int *)malloc(sizeof(int) * 1024);

    while (fgets(cline, sizeof(cline), fpRead) != NULL)
    {
        int *currLine = (int *)malloc(sizeof(int) * 2048);
        int numCount = readIntFromLine(currLine, cline);
        nline++;
        firstLine[nline] = numCount;
        result[nline] = currLine;
    }

    firstLine[0] = nline;
    result[0] = firstLine;

    fclose(fpRead);

    int **ret = (int **)malloc(sizeof(int *) * (nline + 1));
    int *fl = (int *)malloc(sizeof(int) * (nline + 1));
    memcpy(fl, firstLine, sizeof(int) * (nline + 1));
    free(firstLine);
    ret[0] = fl;
    for (int i = 1; i < nline + 1; i++)
    {
        int *cl = (int *)malloc(sizeof(int) * fl[i]);
        memcpy(cl, result[i], sizeof(int) * fl[i]);
        ret[i] = cl;
        free(result[i]);
    }
    free(result);
    return ret;
}

void releaseIntArrayAsLine(int **intArray)
{
    releaseIntArray(intArray);
}

void writeIntArrayToFile(const char *fileName, int **intArray)
{
    if (fileName == NULL || intArray == NULL)
    {
        return;
    }
    FILE *fpWrite = fopen(fileName, "w");

    fprintf(fpWrite, "%d %d\n", intArray[0][0], intArray[0][1]);

    for (int i = 0; i < intArray[0][0]; i++)
    {
        for (int j = 0; j < intArray[0][1]; j++)
        {
            fprintf(fpWrite, "%d ", intArray[i + 1][j]);
        }
        fprintf(fpWrite, "\n");
    }
    fclose(fpWrite);
}

void printIntArray(int **intArray)
{
    if (intArray == NULL)
    {
        return;
    }
    printf("%d %d\n", intArray[0][0], intArray[0][1]);
    for (int i = 0; i < intArray[0][0]; i++)
    {
        for (int j = 0; j < intArray[0][1]; j++)
        {
            printf("%d ", intArray[i + 1][j]);
        }
        printf("\n");
    }
}

void printIntArrayAsLine(int **intArray)
{
    if (intArray == NULL)
    {
        return;
    }

    for (int i = 0; i < intArray[0][0] + 1; i++)
    {
        printf("%d ", intArray[0][i]);
    }
    printf("\n");

    for (int i = 1; i < intArray[0][0] + 1; i++)
    {
        for (int j = 0; j < intArray[0][i]; j++)
        {
            printf("%d ", intArray[i][j]);
        }
        printf("\n");
    }
}

int **readIntMatrixFromFile(const char *fileName, int lines, int columns)
{
    FILE *fpRead = fopen(fileName, "r");
    if (fpRead == NULL)
    {
        return NULL;
    }
    int **result = (int **)malloc(sizeof(int *) * lines);
    for (int i = 0; i < lines; i++)
    {
        int *curLine = (int *)malloc(sizeof(int) * columns);
        for (int j = 0; j < columns; j++)
        {
            fscanf(fpRead, "%d", &curLine[j]);
        }
        result[i] = curLine;
    }
    fclose(fpRead);
    return result;
}

int **allocateMatrix(int lines, int columns)
{

    int **result = (int **)malloc(sizeof(int *) * lines);
    for (int i = 0; i < lines; i++)
    {
        int *curLine = (int *)malloc(sizeof(int) * columns);
        result[i] = curLine;
    }
    return result;
}

void copyIntMatrix(int **destArray, int **sourArray, int lines, int columns)
{
    for (int i = 0; i < lines; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            destArray[i][j] = sourArray[i][j];
        }
    }
}

void releaseIntMatrix(int **intMAtrix, int lines)
{
    if (intMAtrix == NULL)
    {
        return;
    }
    for (int i = 0; i < lines; i++)
    {
        free(intMAtrix[i]);
        intMAtrix[i] = NULL;
    }
    free(intMAtrix);
}

void printIntMatrix(int **intMAtrix, int lines, int columns)
{
    if (intMAtrix == NULL)
    {
        return;
    }
    for (int i = 0; i < lines; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            printf("%d ", intMAtrix[i][j]);
        }
        printf("\n");
    }
}
