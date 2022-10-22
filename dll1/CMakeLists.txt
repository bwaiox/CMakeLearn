set(DLL_SRCS
    dllmain.cpp
)
# 生成IDE工程时建立对应文件组
source_group("dllcpps" FILES ${DLL_SRCS})

add_library(dll1 ${DLL_SRCS})
