cmake_minimum_required(VERSION 3.2)
project(imlib)
include(/home/allen/deps/OpenCV-3.4.18/share/OpenCV/OpenCVConfig.cmake)
include_directories(include)
set(IMLIB_SRC
    main.cpp 
)

add_executable(clib ${IMLIB_SRC})

target_link_libraries(clib ${OpenCV_LIBS})


