// rea decompile_all
// name: FUN_005b0820
// address: 0x5b0820
// body: available
// range: 0x5b0820-0x5b085e inclusive
// range: 0x5b08b4-0x5b0a81 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x5b085a to 0x5bc639 FUN_005bc639 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x5b0930 to 0x5ba249 FUN_005ba249 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x5b0a4f to 0x5ba1fe FUN_005ba1fe (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x5b0a58 to 0x5ba1fe FUN_005ba1fe (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_005b0820(int param_1,uint param_2,int param_3,uint param_4)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  byte extraout_CL;
  char extraout_CL_00;
  uint extraout_ECX;
  int extraout_ECX_00;
  int iVar4;
  int extraout_ECX_01;
  bool bVar5;
  ushort in_FPUControlWord;
  float10 extraout_ST0;
  float10 fVar6;
  float10 extraout_ST1;
  float10 extraout_ST1_00;
  float10 extraout_ST1_01;
  float10 fVar7;
  unkbyte10 in_ST7;
  undefined1 local_78 [20];
  undefined4 uStack_64;
  undefined1 auStack_e [6];
  undefined4 local_8;
  undefined4 local_4;
  
  if (DAT_0095dce0 != 0) {
    local_4 = MXCSR;
    bVar5 = (MXCSR & 0x1f80) == 0x1f80;
    if (bVar5) {
      _auStack_e = CONCAT26(in_FPUControlWord,auStack_e);
    }
    if (bVar5 && (in_FPUControlWord & 0x7f) == 0x7f) {
      uVar1 = FUN_005bc639();
      return uVar1;
    }
  }
  local_4 = 0x5b08bd;
  uVar2 = __fload_withFB();
  local_4 = CONCAT22((short)(uVar2 >> 0x10),in_FPUControlWord);
  uVar3 = uVar2;
  if (in_FPUControlWord != 0x27f) {
    _auStack_e = CONCAT46(0x5b08d1,auStack_e);
    uVar2 = FUN_005ba175();
    uVar3 = extraout_ECX;
  }
  bVar5 = (uVar3 & 0x7ff00000) == 0x7ff00000;
  if (bVar5) {
    if ((uVar2 & 0xfffff) == 0 && param_3 == 0) {
      _auStack_e = CONCAT46(0x5b099a,auStack_e);
      fVar6 = (float10)__fload_withFB();
      iVar4 = extraout_ECX_01;
      fVar7 = extraout_ST1_01;
      goto LAB_005b099a;
    }
    _auStack_e = CONCAT46(0x5b095d,auStack_e);
    fVar6 = (float10)__fload_withFB();
    if ((param_4 & 0x80000) == 0) {
      iVar4 = extraout_ECX_00 + 1;
      fVar7 = extraout_ST1_00;
      goto LAB_005b099a;
    }
LAB_005b0967:
    uVar1 = 1;
  }
  else {
    _auStack_e = CONCAT46(0x5b08ec,auStack_e);
    uVar3 = __fload_withFB();
    if (!bVar5) {
      if (((uVar3 & 0x7ff00000) != 0) || ((param_2 & 0xfffff) != 0 || param_1 != 0)) {
        fVar6 = extraout_ST0;
        if ((param_2 & 0x80000000) != 0) {
          _auStack_e = CONCAT46(0x5b0a64,auStack_e);
          fVar6 = (float10)FUN_005b0a82();
          fVar6 = -fVar6;
          if (extraout_CL_00 == '\0') {
            uVar1 = 1;
            goto LAB_005b0935;
          }
        }
        log2(fVar6);
        _auStack_e = CONCAT46(0x5b0911,auStack_e);
        uVar1 = FUN_005ba160();
        if (DAT_0095ca40 != 0) {
          return uVar1;
        }
        uVar1 = FUN_005ba249();
        return uVar1;
      }
      if ((param_4 & 0x7fffffff) == 0 && param_3 == 0) {
        uVar1 = FUN_005ba1fe();
        return uVar1;
      }
      _auStack_e = CONCAT46(0x5b0a1c,auStack_e);
      uVar1 = FUN_005b0a82();
      if ((param_4 & 0x80000000) == 0) {
        if ((param_2._3_1_ >> 7 & extraout_CL) == 0) {
          return uVar1;
        }
        uVar1 = FUN_005ba1fe();
        return uVar1;
      }
      uVar1 = 2;
      goto LAB_005b0935;
    }
    iVar4 = 0;
    fVar6 = extraout_ST0;
    fVar7 = extraout_ST1;
LAB_005b099a:
    if (((param_2 & 0x7ff00000) == 0x7ff00000) && ((param_2 & 0xfffff) != 0 || param_1 != 0)) {
      if ((param_2 & 0x80000) != 0) goto LAB_005b0967;
    }
    else if (iVar4 == 0) {
      uStack_64 = 0x5b09c8;
      _auStack_e = in_ST7;
      iVar4 = FUN_005bd1e6((double)fVar6,(double)fVar7,local_78);
      if (iVar4 == 0) {
        return 0;
      }
      uVar1 = 1;
      goto LAB_005b0935;
    }
    uVar1 = 7;
  }
LAB_005b0935:
  if (DAT_0095ca40 != 0) {
    return uVar1;
  }
  _auStack_e = CONCAT46(0x5b0952,auStack_e);
  uVar1 = FUN_005ba100();
  return uVar1;
}

