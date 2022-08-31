#include <stdio.h>
#include <stdlib.h>
#include "./utils/file_util.h"

/**
 * ������п���ȷ���ĵ�Ԫ��һ���Ӧ�����Ѷȵ�����������ɡ�
 * @param sudoku ��һ����ά���飬��ʾ�������ݣ� 0 ��ʾû��ȷ���������ǿ�
 * @param matrix ���ݵ�ά�ȣ�����6�� 9��
 * @param row ��ʾ��������
 * @param col ��ʾ��������
 */
int fillAssuredItem(int **sudoku, int matrix, int row, int col)
{
    int fillTotal = 0; // �ܹ���д������
    int hasError = 0;
    int fillNum; //��¼����ѭ���ҵ�������
    do
    {
        fillNum = 0;
        for (int i = 0; i < matrix; i++)
        {
            for (int j = 0; j < matrix; j++)
            {
                if (sudoku[i][j] == 0)
                {
                    int checkData[20] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
                    for (int k = 0; k < matrix; k++)
                    {
                        //�����
                        checkData[sudoku[i][k]]++;
                        //�����
                        checkData[sudoku[k][j]]++;
                    }
                    //�������
                    int ar = i / row;
                    int ac = j / col;
                    for (int r = 0; r < row; r++)
                    {
                        for (int c = 0; c < col; c++)
                        {
                            checkData[sudoku[ar * row + r][ac * col + c]]++;
                        }
                    }
                    //�ҵ�Ψһ������д������
                    int rc = 0;
                    int rv = 0;
                    for (int k = 1; k < matrix + 1; k++)
                    {
                        if (checkData[k] == 0)
                        {
                            rc++;
                            rv = k;
                        }
                    }
                    if (rc == 1)
                    {
                        sudoku[i][j] = rv;
                        fillNum++;
                    }

                    if (rc == 0)
                    {
                        //�������û����ȷ�Ľ�
                        hasError++;
                    }
                }
            }
        }
        fillTotal = fillTotal + fillNum;
    } while (fillNum > 0 && hasError == 0);

    if (hasError > 0)
    {
        return 0 - hasError;
    }
    return fillTotal;
}

/**
 * ��������Ƿ��Ѿ�ȫ����ã����м����ո�
 * @param sudoku ��һ����ά���飬��ʾ�������ݣ� 0 ��ʾû��ȷ���������ǿ�
 * @param matrix ���ݵ�ά�ȣ�����6�� 9��
 * @param row ��ʾ��������
 * @param col ��ʾ��������
 */
int checkNotSureItems(int **sudoku, int matrix, int row, int col)
{
    int notSure = 0;
    for (int i = 0; i < matrix; i++)
    {
        for (int j = 0; j < matrix; j++)
        {
            if (sudoku[i][j] == 0)
            {
                notSure++;
            }
        }
    }
    return notSure;
}

/**
 * �ų�������������� �С��С������������
 * @param sudoku ��һ����ά���飬��ʾ�������ݣ� 0 ��ʾû��ȷ���������ǿ�
 * @param matrix ���ݵ�ά�ȣ�����6�� 9��
 * @param row ��ʾ��������
 * @param col ��ʾ��������
 */
int inPalaceExclusion(int **sudoku, int matrix, int row, int col)
{
    int fillTotal = 0; // �ܹ���д������
    int fillNum;       //��¼ÿ��ѭ����д������
    do
    {
        fillNum = 0;
        //�����ų�
        for (int i = 0; i < col; i++)
        {
            for (int j = 0; j < row; j++)
            {
                //�ҵ����ܻ�û��ȷ������
                int checkData[20] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
                for (int r = 0; r < row; r++)
                {
                    for (int c = 0; c < col; c++)
                    {
                        checkData[sudoku[i * row + r][j * col + c]]++;
                    }
                }
                //��ÿһ����ȱ�����֣��ڿո����������Ƿ��г�ͻ
                for (int v = 1; v < matrix + 1; v++)
                {
                    if (checkData[v] == 0)
                    {
                        int canFillSum = 0;
                        int fillRow, fillCol;
                        for (int r = 0; r < row; r++)
                        {
                            for (int c = 0; c < col; c++)
                            {
                                if (sudoku[i * row + r][j * col + c] == 0)
                                {
                                    int conflict = 0;
                                    //�����õ��к���
                                    for (int k = 0; k < matrix; k++)
                                    {
                                        if (sudoku[k][j * col + c] == v || sudoku[i * row + r][k] == v)
                                        {
                                            conflict = 1;
                                            break;
                                        }
                                    }
                                    if (conflict == 0)
                                    {
                                        canFillSum++;
                                        fillRow = i * row + r;
                                        fillCol = j * col + c;
                                    }
                                }
                            }
                        }
                        //�ҵ�Ψһ������д�ĵط�
                        if (canFillSum == 1)
                        {
                            sudoku[fillRow][fillCol] = v;
                            fillNum++;
                        }
                    }
                }
            }
        }
        // ���ų�
        for (int i = 0; i < matrix; i++)
        {
            //�ҵ����ܻ�û��ȷ������
            int checkData[20] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
            for (int j = 0; j < matrix; j++)
            {
                checkData[sudoku[i][j]]++;
            }

            for (int v = 1; v < matrix + 1; v++)
            {
                if (checkData[v] == 0)
                {
                    int canFillSum = 0;
                    int fillRow, fillCol;
                    for (int j = 0; j < matrix; j++)
                    {
                        if (sudoku[i][j] != 0)
                            continue;
                        int conflict = 0;
                        //����Ӧ��
                        for (int k = 0; k < matrix; k++)
                        {
                            if (sudoku[k][j] == v)
                            {
                                conflict = 1;
                                break;
                            }
                        }
                        if (conflict > 0)
                        {
                            continue;
                        }
                        //��鹬��
                        int ar = i / row;
                        int ac = j / col;
                        for (int r = 0; r < row; r++)
                        {
                            for (int c = 0; c < col; c++)
                            {
                                if (sudoku[ar * row + r][ac * col + c] == v)
                                {
                                    conflict = 1;
                                    break;
                                }
                            }
                            if (conflict > 0)
                            {
                                break;
                            }
                        }

                        if (conflict == 0)
                        {
                            canFillSum++;
                            fillRow = i;
                            fillCol = j;
                        }
                    }
                    //�ҵ�Ψһ������д�ĵط�
                    if (canFillSum == 1)
                    {
                        sudoku[fillRow][fillCol] = v;
                        fillNum++;
                    }
                }
            }
        }

        // ���ų�
        for (int j = 0; j < matrix; j++)
        {
            //�ҵ����ܻ�û��ȷ������
            int checkData[20] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
            for (int i = 0; i < matrix; i++)
            {
                checkData[sudoku[i][j]]++;
            }

            for (int v = 1; v < matrix + 1; v++)
            {
                if (checkData[v] == 0)
                {
                    int canFillSum = 0;
                    int fillRow, fillCol;
                    for (int i = 0; i < matrix; i++)
                    {
                        if (sudoku[i][j] != 0)
                            continue;

                        int conflict = 0;
                        //����Ӧ��
                        for (int k = 0; k < matrix; k++)
                        {
                            if (sudoku[i][k] == v)
                            {
                                conflict = 1;
                                break;
                            }
                        }
                        if (conflict > 0)
                        {
                            continue;
                        }
                        //��鹬��
                        int ar = i / row;
                        int ac = j / col;
                        for (int r = 0; r < row; r++)
                        {
                            for (int c = 0; c < col; c++)
                            {
                                if (sudoku[ar * row + r][ac * col + c] == v)
                                {
                                    conflict = 1;
                                    break;
                                }
                            }
                            if (conflict > 0)
                            {
                                break;
                            }
                        }

                        if (conflict == 0)
                        {
                            canFillSum++;
                            fillRow = i;
                            fillCol = j;
                        }
                    }
                    //�ҵ�Ψһ������д�ĵط�
                    if (canFillSum == 1)
                    {
                        sudoku[fillRow][fillCol] = v;
                        fillNum++;
                    }
                }
            }
        }

        fillTotal = fillTotal + fillNum;
    } while (fillNum > 0); //���һ��ѭ��һ��Ҳû���ҵ������Ƴ�ѭ��
    return fillTotal;
}

/**
 * ģ���˹���д������˼·������Ψһֱֵ����д��
 * ��ͨ���ų����ҵ�Ψһ������д�ĵ�Ԫ�����������
 */
int analyseSolution(int **sudoku, int matrix, int row, int col)
{
    int success = 0;
    int step = 0;
    int fillCount = 0;
    while (step < 2 || fillCount > 0)
    { // step<2 ȷ�����ַ�����ִ��һ��
        if (step % 2 == 0)
        { // ����ֻ��һ�ֿ��ܵĿո�������
            fillCount = fillAssuredItem(sudoku, matrix, row, col);
            // printIntMatrix(sudoku, matrix, matrix);
        }
        else
        { // ��ͨ���ų������ҵ�ֻ����д��һ����Ԫ�������
            fillCount = inPalaceExclusion(sudoku, matrix, row, col);
        }
        if (fillCount < 0)
        {
            break;
        }

        int notSure = checkNotSureItems(sudoku, matrix, row, col);
        if (notSure == 0)
        {
            success = 1;
            break;
        }

        step++;
    }
    return success == 1 ? step : -1;
}
/**
 * ���ݷ���������⣬����ܼ��
 */
int violenceSolution(int **sudoku, int matrix, int row, int col)
{
    // �ҵ���һ���ո�
    int findSpace = 0;
    int success = 0;
    int spaceR, spaceC;
    for (int i = 0; i < matrix; i++)
    {
        for (int j = 0; j < matrix; j++)
        {
            if (sudoku[i][j] == 0)
            {
                findSpace = 1;
                spaceR = i;
                spaceC = j;
                break;
            }
        }
        if (findSpace == 1)
        {
            break;
        }
    }
    if (findSpace == 0)
    { //û�пո���д���
        printIntMatrix(sudoku, matrix, matrix);
        return 1;
    }

    //���һ������������д���ٸ�ֵ
    int checkData[20] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    for (int k = 0; k < matrix; k++)
    {
        //�����
        checkData[sudoku[spaceR][k]]++;
        //�����
        checkData[sudoku[k][spaceC]]++;
    }
    //�������
    int ar = spaceR / row;
    int ac = spaceC / col;
    for (int r = 0; r < row; r++)
    {
        for (int c = 0; c < col; c++)
        {
            checkData[sudoku[ar * row + r][ac * col + c]]++;
        }
    }
    //�ҵ�Ψһ������д������
    int rc = 0;
    int rv[20] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

    for (int k = 1; k < matrix + 1; k++)
    {
        if (checkData[k] == 0)
        {
            rv[rc] = k;
            rc++;
        }
    }
    if (rc == 1)
    { // ֻ��һ���������д����ո�����
        sudoku[spaceR][spaceC] = rv[0];
        //������д��һ���ո�
        return violenceSolution(sudoku, matrix, row, col);
    }

    if (rc == 0)
    { // �²�����������⣬��Ҫ����
        return 0;
    }

    //����һ�ݵ�ǰ״̬
    int **copySudoku = allocateMatrix(matrix, matrix);
    copyIntMatrix(copySudoku, sudoku, matrix, matrix);
    for (int i = 0; i < rc; i++)
    {
        sudoku[spaceR][spaceC] = rv[i];
        int nRes = violenceSolution(sudoku, matrix, row, col);
        if (nRes == 1)
        {
            releaseIntMatrix(copySudoku, matrix);
            return 1;
        }
        //�ָ�����
        copyIntMatrix(sudoku, copySudoku, matrix, matrix);
    }
    releaseIntMatrix(copySudoku, matrix);
    //û���ҵ���Ч�Ľ⣬ ��Ҫ����
    return 0;
}

/**
 * ��������㷨�����ı��ļ��ж�ȡ�������󣬱��� 9*9�� 6*6�� 4*4�ȵ� matrix
 * row��col ���������Ĺ����С������ 3*3 ��2*3 ��2*2 �ȵ�
 * ����ļ�����������ⷨ��һ��ģ���˹���д������˼·������Ψһֱֵ����д��
 * ��ͨ���ų����ҵ�Ψһ������д�ĵ�Ԫ�����������
 * ��һ���㷨Ϊ���ݷ������ҵ���һ���ո񣬼�������д��ֵ�������һ��ֱ����д
 * ����ж��������д���������дһ����ѡ��С�ģ�Ȼ����������������ͻ���Ҳ����⣩
 * ������һ��ֵ�����ݣ���
 */
void sudokuSolution(const char *filename, int matrix, int row, int col)
{
    if (col * row != matrix || matrix > 16)
    {
        printf("����Ĳ�������ȷ��\n");
        return;
    }

    int **sudoku = readIntMatrixFromFile(filename, matrix, matrix);
    // violenceSolution analyseSolution
    int success = violenceSolution(sudoku, matrix, row, col);
    if (success > 0)
    {
        printf("�ɹ��ҵ���,�Ѷ�ϵ��Ϊ%d\n", success);
    }
    else
    {
        printf("û���ҵ���, ���ܳ����������ж���⡣\n");
    }
    //printIntMatrix(sudoku, matrix, matrix);
    releaseIntMatrix(sudoku, matrix);
}

/*
int main()
{
    sudokuSolution("./test/sudoku.txt", 6, 2, 3);
    system("pause"); 
    return 0;
}
*/
