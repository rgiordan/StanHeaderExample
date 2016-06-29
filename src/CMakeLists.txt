cmake_minimum_required(VERSION 2.8)
cmake_policy(VERSION 2.8.0)
project(StanHeaderExample)
set(CMAKE_BUILD_TYPE Release)

set(GIT_REPO_LOC $ENV{GIT_REPO_LOC})

add_definitions(-std=c++11 -fPIC)
add_definitions(-Wno-deprecated)

include_directories(${GIT_REPO_LOC}/stan/)
include_directories(${GIT_REPO_LOC}/math/)
include_directories(${GIT_REPO_LOC}/math/lib/eigen_3.2.8/)
include_directories(${GIT_REPO_LOC}/math/lib/boost_1.60.0/)
include_directories(${GIT_REPO_LOC}/StanHeaderExample/include)

set(CC_SOURCES source1.cpp source2.cpp) # This will fail
# set(CC_SOURCES source1.cpp) # This will work
add_library(StanHeaderExample SHARED ${CC_SOURCES})
