add_library(tv tv.cc tv.h)
target_include_directories(tv PUBLIC ${CMAKE_CURRENT_LIST_DIR})

add_executable(tv-main tv-main.cc)
target_link_libraries(tv-main PUBLIC tv)
target_link_libraries(tv PUBLIC product)
