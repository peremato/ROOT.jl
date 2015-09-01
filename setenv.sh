DIR=$( cd "$( dirname "${BASH_SOURCE[0]}" )" && pwd )
export JULIA_LIB=`ls $MY_JULIA_HOME/usr/lib/libjulia* | head -n1`
export JULIAREPL_LIB=`ls $DIR/librepl* | head -n1`
export DYLD_LIBRARY_PATH=$MY_JULIA_HOME/usr/lib/julia/:$DYLD_LIBRARY_PATH
export PATH=$DIR:$PATH