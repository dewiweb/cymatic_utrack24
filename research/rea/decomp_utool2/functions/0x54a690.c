// rea decompile_all
// name: FUN_0054a690
// address: 0x54a690
// body: available
// range: 0x54a690-0x54a78f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0054a690(int *param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0070faa2;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *in_ECX = 0;
  in_ECX[1] = 0;
  FUN_00636a10();
  *(undefined1 *)(in_ECX + 3) = 0;
  in_ECX[5] = 0;
  in_ECX[6] = 0;
  in_ECX[7] = 0;
  in_ECX[8] = 0;
  *(undefined1 *)(in_ECX + 9) = 0;
  in_ECX[10] = &DAT_00bfe12c;
  piVar2 = (int *)(*param_1 + -8);
  if (piVar2 != &DAT_00bfe124) {
    LOCK();
    *piVar2 = *piVar2 + 1;
    UNLOCK();
  }
  local_8._0_1_ = 3;
  local_8._1_3_ = 0;
  FUN_0045c990();
  local_8._0_1_ = 4;
  FUN_0045c990("Playlist Project Error");
  local_8._0_1_ = 5;
  iVar1 = *param_1;
  piVar2 = (int *)(iVar1 + -8);
  if (piVar2 != &DAT_00bfe124) {
    LOCK();
    *piVar2 = *piVar2 + 1;
    UNLOCK();
  }
  FUN_00549e00(iVar1);
  local_8 = CONCAT31(local_8._1_3_,2);
  FUN_005bd5a0();
  ExceptionList = local_10;
  return;
}

