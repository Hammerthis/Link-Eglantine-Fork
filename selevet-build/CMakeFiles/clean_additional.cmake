# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Release")
  file(REMOVE_RECURSE
  "_deps\\quazip-qt6-build\\quazip\\CMakeFiles\\QuaZip_autogen.dir\\AutogenUsed.txt"
  "_deps\\quazip-qt6-build\\quazip\\CMakeFiles\\QuaZip_autogen.dir\\ParseCache.txt"
  "_deps\\quazip-qt6-build\\quazip\\QuaZip_autogen"
  "src\\qt_common\\CMakeFiles\\qt_common_autogen.dir\\AutogenUsed.txt"
  "src\\qt_common\\CMakeFiles\\qt_common_autogen.dir\\ParseCache.txt"
  "src\\qt_common\\qt_common_autogen"
  "src\\yuzu\\CMakeFiles\\yuzu_autogen.dir\\AutogenUsed.txt"
  "src\\yuzu\\CMakeFiles\\yuzu_autogen.dir\\ParseCache.txt"
  "src\\yuzu\\yuzu_autogen"
  )
endif()
