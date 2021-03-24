: ${DUKTAPE?"Need to set DUKTAPE to the downloaded duktape directory, such as ~/duktape-2.6.0"}
rm -rf duktape
DIR=$(pwd)
cd $DUKTAPE
python2 tools/configure.py \
    --source-directory src-input \
    --output-directory "$DIR/duktape" \
    --config-metadata config \
    --option-file "$DIR/duktape.yaml" \
    --rom-support

cp extras/console/duk_console.c "$DIR/duktape"
cp extras/console/duk_console.h "$DIR/duktape"
