# src

add_executable(myapp main.cpp)

message(STATUS "CMAKE_SOURCE_DIR=" ${CMAKE_SOURCE_DIR})
message(STATUS "CMAKE_COMMAND=" ${CMAKE_COMMAND})
message(STATUS "PROJECT_BINARY_DIR=" ${PROJECT_BINARY_DIR})
add_custom_command(TARGET myapp POST_BUILD
                   COMMAND ${CMAKE_COMMAND} -E echo "HELLO FROM CMAKE!!!")
add_custom_command(TARGET myapp POST_BUILD
                   COMMAND ${CMAKE_COMMAND} -E make_directory ${PROJECT_BINARY_DIR}       
                   COMMAND ${CMAKE_COMMAND} -E copy_directory
                   ${CMAKE_SOURCE_DIR}/resources ${CMAKE_SOURCE_DIR}/install/bin/resources)
message(STATUS "right afterwards")





add_subdirectory(sound)


target_link_libraries(myapp sound glfw ${GLFW_LIBRARIES} ${IRRKLANG_LIBRARY} ${FMOD})

install(TARGETS myapp DESTINATION bin) 

