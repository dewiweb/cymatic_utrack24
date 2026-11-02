// rea decompile_all
// name: FUN_004d4794
// address: 0x4d4794
// body: available
// range: 0x4d4794-0x4d4960 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4d4810 to 0x4de0f9 FUN_004de0f9 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x4d492e to 0x4de0ae FUN_004de0ae (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x4d4937 to 0x4de0ae FUN_004de0ae (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ushort FUN_004d4794(int param_1,uint param_2,int param_3,uint param_4)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  byte extraout_CL;
  char extraout_CL_00;
  uint extraout_ECX;
  int extraout_ECX_00;
  int iVar4;
  int extraout_ECX_01;
  bool bVar5;
  short in_FPUControlWord;
  ushort in_FPUStatusWord;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  float10 fVar6;
  float10 extraout_ST1;
  float10 extraout_ST1_00;
  float10 extraout_ST1_01;
  float10 fVar7;
  unkbyte10 in_ST6;
  unkbyte10 in_ST7;
  undefined1 local_78 [12];
  ushort uStack_6c;
  undefined4 uStack_64;
  undefined1 auStack_e [10];
  undefined4 local_4;
  
  local_4 = 0x4d479d;
  uVar2 = __fload_withFB();
  local_4 = CONCAT22((short)(uVar2 >> 0x10),in_FPUControlWord);
  uVar3 = uVar2;
  if (in_FPUControlWord != 0x27f) {
    auStack_e._6_4_ = 0x4d47b1;
    uVar2 = FUN_004de025();
    uVar3 = extraout_ECX;
  }
  bVar5 = (uVar3 & 0x7ff00000) == 0x7ff00000;
  if (bVar5) {
    if ((uVar2 & 0xfffff) == 0 && param_3 == 0) {
      auStack_e._6_4_ = 0x4d4879;
      fVar6 = (float10)__fload_withFB();
      iVar4 = extraout_ECX_01;
      fVar7 = extraout_ST1_01;
      in_ST6 = in_ST7;
    }
    else {
      auStack_e._6_4_ = 0x4d483d;
      uVar1 = __fload_withFB();
      in_FPUStatusWord = in_FPUStatusWord & 0xfdff;
      fVar7 = extraout_ST1_00;
      if (NAN((float10)1) || NAN(extraout_ST0_00)) goto LAB_004d4848;
      if ((float10)1 == extraout_ST0_00) {
        return uVar1;
      }
      iVar4 = extraout_ECX_00 + 1;
      fVar6 = extraout_ST0_00;
    }
  }
  else {
    auStack_e._6_4_ = 0x4d47cc;
    uVar3 = __fload_withFB();
    if (!bVar5) {
      if (((uVar3 & 0x7ff00000) != 0) || ((param_2 & 0xfffff) != 0 || param_1 != 0)) {
        fVar6 = extraout_ST0;
        if ((param_2 & 0x80000000) != 0) {
          auStack_e._6_4_ = 0x4d4943;
          fVar6 = (float10)FUN_004d4961();
          fVar6 = -fVar6;
          if (extraout_CL_00 == '\0') {
            uVar1 = 1;
            goto LAB_004d4815;
          }
        }
        log2(fVar6);
        auStack_e._6_4_ = 0x4d47f1;
        uVar1 = FUN_004de010();
        if (DAT_00c8a570 != 0) {
          return uVar1;
        }
        uVar1 = FUN_004de0f9();
        return uVar1;
      }
      if ((param_4 & 0x7fffffff) == 0 && param_3 == 0) {
        uVar1 = FUN_004de0ae();
        return uVar1;
      }
      auStack_e._6_4_ = 0x4d48fb;
      uVar1 = FUN_004d4961();
      if ((param_4 & 0x80000000) == 0) {
        if ((param_2._3_1_ >> 7 & extraout_CL) == 0) {
          return uVar1;
        }
        uVar1 = FUN_004de0ae();
        return uVar1;
      }
      uVar1 = 2;
      goto LAB_004d4815;
    }
    iVar4 = 0;
    fVar6 = extraout_ST0;
    fVar7 = extraout_ST1;
    in_ST6 = in_ST7;
  }
  if (((param_2 & 0x7ff00000) == 0x7ff00000) && ((param_2 & 0xfffff) != 0 || param_1 != 0)) {
LAB_004d4848:
    fVar6 = (float10)0;
    uVar1 = (ushort)NAN(fVar7) << 8 | (ushort)(fVar7 < fVar6) << 9 | (ushort)(fVar7 != fVar6) << 10
            | (ushort)(fVar7 == fVar6) << 0xe;
    if ((fVar7 == fVar6) == 0) {
      return uVar1;
    }
    return uVar1;
  }
  if (iVar4 != 0) {
    return 0;
  }
  uStack_64 = 0x4d48a7;
  uStack_6c = in_FPUStatusWord;
  auStack_e = (undefined1  [10])in_ST6;
  iVar4 = FUN_004de206((double)fVar6,(double)fVar7,local_78);
  if (iVar4 == 0) {
    return 0;
  }
  uVar1 = 1;
LAB_004d4815:
  if (DAT_00c8a570 != 0) {
    return uVar1;
  }
  auStack_e._6_4_ = 0x4d4832;
  uVar1 = FUN_004ddfb0();
  return uVar1;
}

