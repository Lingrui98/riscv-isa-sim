require_extension('C');
require(insn.rvc_rd() != 0);
WRITE_RD(sext32(RVC_RS1 + insn.rvc_imm()));
