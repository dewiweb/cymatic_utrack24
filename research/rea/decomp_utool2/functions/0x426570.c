// rea decompile_all
// name: FUN_00426570
// address: 0x426570
// body: available
// range: 0x426570-0x426600 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4265ab to 0x4bed05 FUN_004bed05 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00426570(void)

{
  void **ppvVar1;
  uint uVar2;
  int *in_ECX;
  uint in_EDX;
  int iVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_006fd660;
  local_10 = ExceptionList;
  uVar2 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  if ((int)in_EDX < 0) {
    in_EDX = 0;
    iVar3 = 0;
  }
  else {
    if (0x3fffffff < in_EDX) {
      ExceptionList = &local_10;
                    /* WARNING: Subroutine does not return */
      FUN_004bed05();
    }
    iVar3 = 0;
    ppvVar1 = &local_10;
    while ((ExceptionList = ppvVar1, 0 < (int)in_EDX &&
           (iVar3 = FUN_004bff9e(in_EDX * 4,&DAT_00c89800,uVar2), iVar3 == 0))) {
      in_EDX = (int)in_EDX / 2;
      ppvVar1 = ExceptionList;
    }
  }
  *in_ECX = iVar3;
  in_ECX[1] = in_EDX;
  ExceptionList = local_10;
  return;
}

