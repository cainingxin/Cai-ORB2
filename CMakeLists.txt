cmake_minimum_required(VERSION 3.10)
project(Mag_Img_Fusion)
set(CMAKE_CXX_STANDARD 11)

find_package(Eigen3 3.1.0 REQUIRED)

include_directories(
    ${EIGEN3_INCLUDE_DIR}
    ${PROJECT_SOURCE_DIR}/include
)

add_library(${PROJECT_NAME} SHARED
src/Calculate.cpp
src/Coversion.cpp
src/LoadData.cpp
src/MI_EKF_Fusion.cpp
)


add_executable(MI_EKF_Fusion src/MI_EKF_Fusion.cpp)

target_link_libraries(MI_EKF_Fusion ${PROJECT_NAME})