#ifndef CPUMODULE_DISASSEMBLER_H
#define CPUMODULE_DISASSEMBLER_H

#ifdef __cplusplus
extern "C" {
#endif

extern ULO cpuDisOpcode(ULO disasm_pc, STR *saddress, STR *sdata, STR *sinstruction, STR *soperands);

extern ULO cpuDisIllegal(ULO prc, ULO opc, STR *sdata, STR *sinstruction, STR *soperands);
extern ULO cpuDisAbcd(ULO prc, ULO opc, STR *sdata, STR *sinstruction, STR *soperands);
extern ULO cpuDisAdd(ULO prc, ULO opc, STR *sdata, STR *sinstruction, STR *soperands);
extern ULO cpuDisAdda(ULO prc, ULO opc, STR *sdata, STR *sinstruction, STR *soperands);
extern ULO cpuDisAddi(ULO prc, ULO opc, STR *sdata, STR *sinstruction, STR *soperands);
extern ULO cpuDisAddq(ULO prc, ULO opc, STR *sdata, STR *sinstruction, STR *soperands);
extern ULO cpuDisAddx(ULO prc, ULO opc, STR *sdata, STR *sinstruction, STR *soperands);
extern ULO cpuDisAnd(ULO prc, ULO opc, STR *sdata, STR *sinstruction, STR *soperands);
extern ULO cpuDisAndi(ULO prc, ULO opc, STR *sdata, STR *sinstruction, STR *soperands);
extern ULO cpuDisAsx(ULO prc, ULO opc, STR *sdata, STR *sinstruction, STR *soperands);
extern ULO cpuDisBcc(ULO prc, ULO opc, STR *sdata, STR *sinstruction, STR *soperands);
extern ULO cpuDisBt(ULO prc, ULO opc, STR *sdata, STR *sinstruction, STR *soperands);
extern ULO cpuDisChk(ULO prc, ULO opc, STR *sdata, STR *sinstruction, STR *soperands);
extern ULO cpuDisClr(ULO prc, ULO opc, STR *sdata, STR *sinstruction, STR *soperands);
extern ULO cpuDisCmp(ULO prc, ULO opc, STR *sdata, STR *sinstruction, STR *soperands);
extern ULO cpuDisCmpa(ULO prc, ULO opc, STR *sdata, STR *sinstruction, STR *soperands);
extern ULO cpuDisCmpi(ULO prc, ULO opc, STR *sdata, STR *sinstruction, STR *soperands);
extern ULO cpuDisCmpm(ULO prc, ULO opc, STR *sdata, STR *sinstruction, STR *soperands);
extern ULO cpuDisDBcc(ULO prc, ULO opc, STR *sdata, STR *sinstruction, STR *soperands);
extern ULO cpuDisDivs(ULO prc, ULO opc, STR *sdata, STR *sinstruction, STR *soperands);
extern ULO cpuDisDivu(ULO prc, ULO opc, STR *sdata, STR *sinstruction, STR *soperands);
extern ULO cpuDisEor(ULO prc, ULO opc, STR *sdata, STR *sinstruction, STR *soperands);
extern ULO cpuDisEori(ULO prc, ULO opc, STR *sdata, STR *sinstruction, STR *soperands);
extern ULO cpuDisExg(ULO prc, ULO opc, STR *sdata, STR *sinstruction, STR *soperands);
extern ULO cpuDisExt(ULO prc, ULO opc, STR *sdata, STR *sinstruction, STR *soperands);
extern ULO cpuDisJmp(ULO prc, ULO opc, STR *sdata, STR *sinstruction, STR *soperands);
extern ULO cpuDisJsr(ULO prc, ULO opc, STR *sdata, STR *sinstruction, STR *soperands);
extern ULO cpuDisLea(ULO prc, ULO opc, STR *sdata, STR *sinstruction, STR *soperands);
extern ULO cpuDisLink(ULO prc, ULO opc, STR *sdata, STR *sinstruction, STR *soperands);
extern ULO cpuDisLsx(ULO prc, ULO opc, STR *sdata, STR *sinstruction, STR *soperands);
extern ULO cpuDisMove(ULO prc, ULO opc, STR *sdata, STR *sinstruction, STR *soperands);
extern ULO cpuDisMoveToCcr(ULO prc, ULO opc, STR *sdata, STR *sinstruction, STR *soperands);
extern ULO cpuDisMoveToSr(ULO prc, ULO opc, STR *sdata, STR *sinstruction, STR *soperands);
extern ULO cpuDisMoveFromSr(ULO prc, ULO opc, STR *sdata, STR *sinstruction, STR *soperands);
extern ULO cpuDisMoveUsp(ULO prc, ULO opc, STR *sdata, STR *sinstruction, STR *soperands);
extern ULO cpuDisMovea(ULO prc, ULO opc, STR *sdata, STR *sinstruction, STR *soperands);
extern ULO cpuDisMovem(ULO prc, ULO opc, STR *sdata, STR *sinstruction, STR *soperands);
extern ULO cpuDisMovep(ULO prc, ULO opc, STR *sdata, STR *sinstruction, STR *soperands);
extern ULO cpuDisMoveq(ULO prc, ULO opc, STR *sdata, STR *sinstruction, STR *soperands);
extern ULO cpuDisMuls(ULO prc, ULO opc, STR *sdata, STR *sinstruction, STR *soperands);
extern ULO cpuDisMulu(ULO prc, ULO opc, STR *sdata, STR *sinstruction, STR *soperands);
extern ULO cpuDisNbcd(ULO prc, ULO opc, STR *sdata, STR *sinstruction, STR *soperands);
extern ULO cpuDisNeg(ULO prc, ULO opc, STR *sdata, STR *sinstruction, STR *soperands);
extern ULO cpuDisNegx(ULO prc, ULO opc, STR *sdata, STR *sinstruction, STR *soperands);
extern ULO cpuDisNop(ULO prc, ULO opc, STR *sdata, STR *sinstruction, STR *soperands);
extern ULO cpuDisNot(ULO prc, ULO opc, STR *sdata, STR *sinstruction, STR *soperands);
extern ULO cpuDisOr(ULO prc, ULO opc, STR *sdata, STR *sinstruction, STR *soperands);
extern ULO cpuDisOri(ULO prc, ULO opc, STR *sdata, STR *sinstruction, STR *soperands);
extern ULO cpuDisPea(ULO prc, ULO opc, STR *sdata, STR *sinstruction, STR *soperands);
extern ULO cpuDisReset(ULO prc, ULO opc, STR *sdata, STR *sinstruction, STR *soperands);
extern ULO cpuDisRox(ULO prc, ULO opc, STR *sdata, STR *sinstruction, STR *soperands);
extern ULO cpuDisRoxx(ULO prc, ULO opc, STR *sdata, STR *sinstruction, STR *soperands);
extern ULO cpuDisRte(ULO prc, ULO opc, STR *sdata, STR *sinstruction, STR *soperands);
extern ULO cpuDisRtr(ULO prc, ULO opc, STR *sdata, STR *sinstruction, STR *soperands);
extern ULO cpuDisRts(ULO prc, ULO opc, STR *sdata, STR *sinstruction, STR *soperands);
extern ULO cpuDisSbcd(ULO prc, ULO opc, STR *sdata, STR *sinstruction, STR *soperands);
extern ULO cpuDisScc(ULO prc, ULO opc, STR *sdata, STR *sinstruction, STR *soperands);
extern ULO cpuDisStop(ULO prc, ULO opc, STR *sdata, STR *sinstruction, STR *soperands);
extern ULO cpuDisSub(ULO prc, ULO opc, STR *sdata, STR *sinstruction, STR *soperands);
extern ULO cpuDisSuba(ULO prc, ULO opc, STR *sdata, STR *sinstruction, STR *soperands);
extern ULO cpuDisSubi(ULO prc, ULO opc, STR *sdata, STR *sinstruction, STR *soperands);
extern ULO cpuDisSubq(ULO prc, ULO opc, STR *sdata, STR *sinstruction, STR *soperands);
extern ULO cpuDisSubx(ULO prc, ULO opc, STR *sdata, STR *sinstruction, STR *soperands);
extern ULO cpuDisSwap(ULO prc, ULO opc, STR *sdata, STR *sinstruction, STR *soperands);
extern ULO cpuDisTas(ULO prc, ULO opc, STR *sdata, STR *sinstruction, STR *soperands);
extern ULO cpuDisTrap(ULO prc, ULO opc, STR *sdata, STR *sinstruction, STR *soperands);
extern ULO cpuDisTrapv(ULO prc, ULO opc, STR *sdata, STR *sinstruction, STR *soperands);
extern ULO cpuDisTst(ULO prc, ULO opc, STR *sdata, STR *sinstruction, STR *soperands);
extern ULO cpuDisUnlk(ULO prc, ULO opc, STR *sdata, STR *sinstruction, STR *soperands);
extern ULO cpuDisBkpt(ULO prc, ULO opc, STR *sdata, STR *sinstruction, STR *soperands);
extern ULO cpuDisBf(ULO prc, ULO opc, STR *sdata, STR *sinstruction, STR *soperands);
extern ULO cpuDisCas(ULO prc, ULO opc, STR *sdata, STR *sinstruction, STR *soperands);
extern ULO cpuDisChkl(ULO prc, ULO opc, STR *sdata, STR *sinstruction, STR *soperands);
extern ULO cpuDisChk2(ULO prc, ULO opc, STR *sdata, STR *sinstruction, STR *soperands);
extern ULO cpuDisDivl(ULO prc, ULO opc, STR *sdata, STR *sinstruction, STR *soperands);
extern ULO cpuDisExtb(ULO prc, ULO opc, STR *sdata, STR *sinstruction, STR *soperands);
extern ULO cpuDisLinkl(ULO prc, ULO opc, STR *sdata, STR *sinstruction, STR *soperands);
extern ULO cpuDisMoveFromCcr(ULO prc, ULO opc, STR *sdata, STR *sinstruction, STR *soperands);
extern ULO cpuDisMovec(ULO prc, ULO opc, STR *sdata, STR *sinstruction, STR *soperands);
extern ULO cpuDisMoves(ULO prc, ULO opc, STR *sdata, STR *sinstruction, STR *soperands);
extern ULO cpuDisMull(ULO prc, ULO opc, STR *sdata, STR *sinstruction, STR *soperands);
extern ULO cpuDisPack(ULO prc, ULO opc, STR *sdata, STR *sinstruction, STR *soperands);
extern ULO cpuDisPflush030(ULO prc, ULO opc, STR *sdata, STR *sinstruction, STR *soperands);
extern ULO cpuDisPflush040(ULO prc, ULO opc, STR *sdata, STR *sinstruction, STR *soperands);
extern ULO cpuDisPtest040(ULO prc, ULO opc, STR *sdata, STR *sinstruction, STR *soperands);
extern ULO cpuDisRtd(ULO prc, ULO opc, STR *sdata, STR *sinstruction, STR *soperands);
extern ULO cpuDisTrapcc(ULO prc, ULO opc, STR *sdata, STR *sinstruction, STR *soperands);
extern ULO cpuDisUnpk(ULO prc, ULO opc, STR *sdata, STR *sinstruction, STR *soperands);
extern ULO cpuDisCallm(ULO prc, ULO opc, STR *sdata, STR *sinstruction, STR *soperands);
extern ULO cpuDisRtm(ULO prc, ULO opc, STR *sdata, STR *sinstruction, STR *soperands);

#ifdef __cplusplus
}
#endif

#endif
