#include "client.h"



int main(int argc, char ** argv) // ./xxx xxx.xxx.xxx.xxx 8888
{
    if(argc != 3) return -1;

    P_CI p_ci = Client_File_Tran_Init(argv[1],atoi(argv[2]));//客户端初始化
    if(p_ci == (P_CI)-1)
    {
        printf("文件传输客户端例程初始化失败!\n");
        return -1;
    }

    if(Function_Select(p_ci) == -1)
    {
        printf("功能选择失败!\n");
        return -1;
    }

    if(Client_File_Tran_Free(p_ci) == -1)
    {
        printf("客户端退出失败！\n");
        return -1;
    }

    return 0;
}