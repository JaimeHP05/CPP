add_library(basket basket.cc basket.h)
target_include_directories(basket PUBLIC ${CMAKE_CURRENT_LIST_DIR})

add_executable(basket-main basket-main.cc)
target_link_libraries(basket-main PUBLIC basket)
target_link_libraries(basket PUBLIC product)
