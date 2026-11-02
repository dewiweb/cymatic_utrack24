// rea decompile_all
// name: FUN_100fd174
// address: 0x100fd174
// body: available
// range: 0x100fd174-0x100fd17c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint __thiscall FUN_100fd174(void *this,uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint extraout_EAX;
  undefined1 in_ZF;
  ushort in_FPUControlWord;
  undefined4 unaff_retaddr;
  
  __fload_withFB(this,(int)&param_1);
  if ((bool)in_ZF) {
    if (((param_2 & 0xfffff) != 0) || (param_1 != 0)) {
      uVar2 = FUN_1010679c();
      goto LAB_100fd1fb;
    }
    uVar2 = 0;
    uVar1 = param_2 & 0x80000000;
joined_r0x100fd1ec:
    if (uVar1 == 0) {
LAB_100fd19e:
      if (DAT_1016a178 != 0) {
        return uVar2;
      }
      uVar2 = __math_exit(&DAT_10163710,5,unaff_retaddr,param_1,param_2);
      return uVar2;
    }
  }
  else {
    uVar2 = param_2;
    if (in_FPUControlWord != 0x27f) {
      uVar2 = FUN_10106785();
    }
    if ((uVar2 & 0x80000000) == 0) goto LAB_100fd19e;
    if (((uVar2 & 0x7ff00000) == 0) && (uVar1 = param_1, (uVar2 & 0xfffff) == 0))
    goto joined_r0x100fd1ec;
  }
  uVar2 = 1;
LAB_100fd1fb:
  if (DAT_1016a178 != 0) {
    return uVar2;
  }
  __startOneArgErrorHandling(&DAT_10163710,5,in_FPUControlWord,unaff_retaddr,param_1,param_2);
  return extraout_EAX;
}

