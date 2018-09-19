# 设置编译器
set(CMAKE_C_COMPILER gcc)

# 源文件列表
set(SRC_LIST sum.c)

# 头文件目录
include_directories(${HELLO_SOURCE_DIR}/include)

# 设置生成的库文件的路径
set(LIBRARY_OUTPUT_PATH ${HELLO_SOURCE_DIR}/lib)

# 生成的库文件
add_library(sum STATIC ${SRC_LIST})
