cd "$(dirname "$0")"
mkdir -p build
cd build
export CC="$WASI_SDK_PATH/bin/clang --sysroot=$WASI_SDK_PATH/share/wasi-sysroot"
export CXX="$WASI_SDK_PATH/bin/clang++  --sysroot=$WASI_SDK_PATH/share/wasi-sysroot"
export HERMES_WS_DIR=/home/trevor/wasm2brs/hermes
cmake -DCMAKE_BUILD_TYPE=Release -DHERMESVM_ALLOW_CONCURRENT_GC=0 -DHERMES_SLOW_DEBUG=0 -DHERMES_IS_ROKU=1 -DHERMES_IS_MOBILE_BUILD=1 -DIMPORT_HERMESC:PATH=$HERMES_WS_DIR/build_host_hermesc/ImportHermesc.cmake ..