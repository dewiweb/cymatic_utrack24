// rea decompile_all
// name: FUN_004aa3b0
// address: 0x4aa3b0
// body: available
// range: 0x4aa3b0-0x4aa4ca inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004aa3b0(undefined1 *param_1,HWND param_2)

{
  int iVar1;
  int *piVar2;
  HIMC pHVar3;
  undefined4 *in_ECX;
  int *_Memory;
  void *local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00703b40;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (*(char *)(in_ECX + 2) != '\0') {
    piVar2 = (int *)FUN_0068d0a0(DAT_00c76070 ^ (uint)&stack0xfffffffc);
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 0xc))();
      param_1 = &DAT_00bfe12c;
      local_8 = 0;
      (**(code **)(*piVar2 + 0x18))(&param_1);
      local_8 = 0xffffffff;
      _Memory = (int *)(param_1 + -8);
      if (_Memory != &DAT_00bfe124) {
        LOCK();
        iVar1 = *_Memory;
        *_Memory = *_Memory + -1;
        UNLOCK();
        if (iVar1 == 0) {
          FID_conflict__free(_Memory);
        }
      }
      local_18 = *in_ECX;
      in_ECX[1] = local_18;
      local_14 = local_18;
      (**(code **)(*piVar2 + 0xc))(&local_18);
      local_24 = (void *)0x0;
      local_20 = 0;
      local_1c = 0;
      local_8 = 1;
      (**(code **)(*piVar2 + 0x10))(&local_24);
      FID_conflict__free(local_24);
    }
    pHVar3 = ImmGetContext(param_2);
    if (pHVar3 != (HIMC)0x0) {
      ImmNotifyIME(pHVar3,0x11,0,0);
      ImmReleaseContext(param_2,pHVar3);
    }
  }
  FUN_004aa6a0();
  ExceptionList = local_10;
  return;
}

