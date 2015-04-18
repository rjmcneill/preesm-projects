## THIS IS A GENERATED FILE -- DO NOT EDIT
.configuro: .libraries,e66 linker.cmd \
  package/cfg/build_pe66.oe66 \

linker.cmd: package/cfg/build_pe66.xdl
	$(SED) 's"^\"\(package/cfg/build_pe66cfg.cmd\)\"$""\"C:/Users/Robert/Development/Ubuntu Dev/workspace/crossCoreTensorMultiplicationByAdditionMemOptManualWorkAround/Code6678/Debug/configPkg/\1\""' package/cfg/build_pe66.xdl > $@
