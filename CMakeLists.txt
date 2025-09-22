cmake_minimum_required(VERSION 3.10)

project(gd_headers)
add_library(gd_headers INTERFACE)
target_include_directories(gd_headers INTERFACE
  ${CMAKE_CURRENT_SOURCE_DIR}/cocos-headers/cocos2dx
  ${CMAKE_CURRENT_SOURCE_DIR}/cocos-headers/cocos2dx/include
  ${CMAKE_CURRENT_SOURCE_DIR}/cocos-headers/cocos2dx/platform/android
  ${CMAKE_CURRENT_SOURCE_DIR}/cocos-headers/cocos2dx/kazmath/include
  
  ${CMAKE_CURRENT_SOURCE_DIR}/gd-headers/
)
