export ACE_ROOT=$(pwd)
export LD_LIBRARY_PATH=$ACE_ROOT/lib:$LD_LIBRARY_PATH
make -f GNUmakefile debug=0 static_libs=1 buildbits=64 -j 8