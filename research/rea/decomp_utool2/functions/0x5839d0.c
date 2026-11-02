// rea decompile_all
// name: FUN_005839d0
// address: 0x5839d0
// body: available
// range: 0x5839d0-0x583b09 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005839d0(void)

{
  int iVar1;
  undefined4 *in_ECX;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00712e88;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_0045c990("ImgStripPushButton",DAT_00c76070 ^ (uint)&stack0xfffffffc);
  local_8 = 0;
  FUN_006e3660(&local_14);
  local_14 = local_14 + -2;
  if (local_14 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *local_14;
    *local_14 = *local_14 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(local_14);
    }
  }
  *in_ECX = ImgStripPushButton::vftable;
  in_ECX[0x1c] = ImgStripPushButton::vftable;
  in_ECX[0x38] = 0;
  in_ECX[0x39] = 0;
  in_ECX[0x3a] = 0;
  in_ECX[0x3b] = 0;
  *(undefined1 *)(in_ECX + 0x3c) = 0;
  in_ECX[0x3d] = 0;
  in_ECX[0x3e] = 0;
  in_ECX[0x3f] = 0;
  in_ECX[0x40] = 0;
  in_ECX[0x41] = 0;
  in_ECX[0x42] = 0;
  in_ECX[0x43] = 0;
  *(undefined1 *)(in_ECX + 0x44) = 1;
  local_8 = CONCAT31(local_8._1_3_,5);
  local_14 = in_ECX + 0x45;
  operator_new(0x28);
  iVar1 = FUN_00468990();
  in_ECX[0x45] = iVar1;
  if (iVar1 != 0) {
    LOCK();
    *(int *)(iVar1 + 4) = *(int *)(iVar1 + 4) + 1;
    UNLOCK();
  }
  ExceptionList = local_10;
  return;
}

