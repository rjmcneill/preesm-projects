## THIS IS A GENERATED FILE -- DO NOT EDIT
.configuro: .libraries,e66 linker.cmd \
  package/cfg/modelPreesm_pe66.oe66 \

linker.cmd: package/cfg/modelPreesm_pe66.xdl
	$(SED) 's"^\"\(package/cfg/modelPreesm_pe66cfg.cmd\)\"$""\"C:/Users/Robert/Development/Ubuntu Dev/workspace/crossCoreMultiplicationUsingAdditionMemOpt1/Code6678/Release/configPkg/\1\""' package/cfg/modelPreesm_pe66.xdl > $@
