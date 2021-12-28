require_extension('C');
require(insn.rvc_rd() != 0);
WRITE_RD(MMU.load_int64(RVC_SP + insn.rvc_ldsp_imm()));
