// *对输入的行和字符进行计数。在计算机中，一行是以一个回车符\n作为行结束标记的，
// 这样在程序中可以通过搜索\n对行进行计数。在UNIX操作系统中，一般有ctrl+d作为文件结束标记，其字符码为-1.
// 当输入ctrl+d时表示文件输入结束，停止计数。在C语言中，以EOF（End Of File）作为文件结束标志
// **输出格式要求："chars=%d, lines=%d\n"

#include <stdio.h>
 
int main (void)
{
    int lines = 0;
    int chars = 0;
    char ch;
    
    while ((ch = getchar ()) != EOF)
    {
        chars ++;
        
        if (ch == '\n')
        {
            lines ++;
        }
    }
    
    printf ("chars=%d, lines=%d\n", chars, lines);
    
    return 0;
}