@echo off
call "C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Auxiliary\Build\vcvars64.bat"
set "PATH=C:\Program Files\LLVM\bin;C:\Program Files\Git\usr\bin;C:\VulkanSDK\1.4.357.0\Bin;C:\Program Files\Microsoft Visual Studio\2022\Community\Common7\IDE\CommonExtensions\Microsoft\CMake\Ninja;%PATH%"
"C:\Program Files\Microsoft Visual Studio\2022\Community\Common7\IDE\CommonExtensions\Microsoft\CMake\CMake\bin\cmake.exe" -S work/selevet-source -B work/selevet-build -G Ninja -DCMAKE_C_COMPILER=clang-cl -DCMAKE_CXX_COMPILER=clang-cl -DCMAKE_BUILD_TYPE=Release -DENABLE_LTO=OFF -DBUILD_TESTING=OFF -DYUZU_TESTS=OFF -DYUZU_ROOM=OFF -DYUZU_CMD=OFF -DENABLE_UPDATE_CHECKER=OFF -DUSE_DISCORD_PRESENCE=OFF -DYUZU_USE_BUNDLED_SDL3=ON -DENABLE_WERROR=OFF -UQt6* -UCMAKE_PREFIX_PATH

