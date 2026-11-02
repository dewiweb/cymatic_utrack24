// rea decompile_all
// name: FUN_00645cf0
// address: 0x645cf0
// body: available
// range: 0x645cf0-0x645e7f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x645dca to 0x656590 FUN_00656590 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4
FUN_00645cf0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            int *param_5,int *param_6,undefined4 param_7)

{
  uint uVar1;
  int iVar2;
  undefined4 in_ECX;
  int in_EDX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00720149;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar2 = __setjmp3(param_2,3,___CxxLongjmpUnwind_4,0xffffffff,&DAT_00c68dc0,
                    DAT_00c76070 ^ (uint)&stack0xfffffffc);
  if (iVar2 != 0) {
    ExceptionList = local_10;
    return 0;
  }
  if (in_EDX != 0) {
    *(undefined4 *)(in_EDX + 0x14) = in_ECX;
    *(code **)(in_EDX + 0x10) = FUN_00645eb0;
    if (*(int *)(in_EDX + 0xc) != 0) {
      *(undefined4 *)(in_EDX + 0xc) = 0;
      FUN_006563b0();
    }
    *(undefined4 *)(in_EDX + 0x130) = 0;
  }
  FUN_00655840();
  FUN_00655de0(param_3,param_4,param_5,param_6,param_7);
  if ((*param_5 == 0x10) && (in_EDX != 0)) {
    uVar1 = *(uint *)(in_EDX + 0x2c);
    if ((uVar1 & 0x40) == 0) {
      *(uint *)(in_EDX + 0x30) = *(uint *)(in_EDX + 0x30) | 0x400;
      *(uint *)(in_EDX + 0x2c) = uVar1 | 0x4000;
    }
    else {
      if ((uVar1 & 0x400000) == 0) goto LAB_00645dca;
      FUN_006563b0();
    }
  }
  if ((*param_6 == 3) && (in_EDX != 0)) {
    uVar1 = *(uint *)(in_EDX + 0x2c);
    if ((uVar1 & 0x40) == 0) {
      *(uint *)(in_EDX + 0x30) = *(uint *)(in_EDX + 0x30) | 0x2001000;
      *(uint *)(in_EDX + 0x2c) = uVar1 | 0x4000;
    }
    else {
      if ((uVar1 & 0x400000) == 0) goto LAB_00645dca;
      FUN_006563b0();
    }
  }
  if ((*param_5 < 8) && (in_EDX != 0)) {
    uVar1 = *(uint *)(in_EDX + 0x2c);
    if ((uVar1 & 0x40) == 0) {
      *(uint *)(in_EDX + 0x30) = *(uint *)(in_EDX + 0x30) | 0x2001000;
      *(uint *)(in_EDX + 0x2c) = uVar1 | 0x4000;
    }
    else {
      if ((uVar1 & 0x400000) == 0) {
LAB_00645dca:
                    /* WARNING: Subroutine does not return */
        FUN_00656590();
      }
      FUN_006563b0();
    }
  }
  if ((*param_6 == 0) || (*param_6 == 4)) {
    FUN_00654ca0();
  }
  ExceptionList = local_10;
  return 1;
}

