// rea decompile_all
// name: FUN_00645c00
// address: 0x645c00
// body: available
// range: 0x645c00-0x645cef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x645c82 to 0x656590 FUN_00656590 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00645c00(undefined4 param_1)

{
  uint uVar1;
  int iVar2;
  int in_ECX;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 uVar3;
  int in_EDX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0072012e;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar2 = __setjmp3(param_1,3,___CxxLongjmpUnwind_4,0xffffffff,&DAT_00c68d9c,
                    DAT_00c76070 ^ (uint)&stack0xfffffffc);
  if (iVar2 != 0) {
    ExceptionList = local_10;
    return 0;
  }
  if (in_ECX != 0) {
    uVar3 = extraout_ECX;
    if ((in_EDX != 0) && ((*(uint *)(in_EDX + 8) & 0x10) != 0)) {
      uVar1 = *(uint *)(in_ECX + 0x2c);
      if ((uVar1 & 0x40) == 0) {
        *(uint *)(in_ECX + 0x30) = *(uint *)(in_ECX + 0x30) | 0x2001000;
        *(uint *)(in_ECX + 0x2c) = uVar1 | 0x4000;
      }
      else {
        if ((uVar1 & 0x400000) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00656590();
        }
        FUN_006563b0();
        uVar3 = extraout_ECX_00;
      }
    }
    if (in_ECX != 0) {
      FUN_0064b4a0(uVar3);
      if ((*(uint *)(in_ECX + 0x30) & 0x8000) != 0) {
        *(uint *)(in_ECX + 0x30) = *(uint *)(in_ECX + 0x30) | 0x1000000;
      }
    }
  }
  FUN_00655410();
  FUN_006550c0();
  ExceptionList = local_10;
  return 1;
}

