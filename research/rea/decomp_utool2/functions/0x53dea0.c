// rea decompile_all
// name: FUN_0053dea0
// address: 0x53dea0
// body: available
// range: 0x53dea0-0x53dfd3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0053dea0(int *param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_0070e2d7;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  in_ECX[3] = 0;
  in_ECX[4] = 0;
  local_8 = 0;
  *in_ECX = SongProject::vftable;
  in_ECX[6] = 0;
  in_ECX[7] = 0;
  FUN_006369b0(in_ECX + 8);
  in_ECX[9] = 1;
  in_ECX[10] = 2;
  in_ECX[0xb] = 2;
  in_ECX[0xc] = 0;
  in_ECX[0xd] = param_2;
  *(undefined8 *)(in_ECX + 0xe) = 0;
  in_ECX[0x10] = 0;
  in_ECX[0x11] = 0;
  in_ECX[0x12] = 0;
  *(undefined1 *)(in_ECX + 0x13) = 0;
  in_ECX[0x14] = 0;
  in_ECX[0x15] = 0;
  in_ECX[0x16] = 0;
  in_ECX[0x17] = 0;
  in_ECX[0x18] = &DAT_00bfe12c;
  in_ECX[0x19] = &DAT_00bfe12c;
  *(undefined8 *)(in_ECX + 0x1a) = 0;
  in_ECX[0x1c] = &DAT_00bfe12c;
  *(undefined1 *)(in_ECX + 0x1d) = 0;
  in_ECX[0x1e] = 0;
  local_8 = CONCAT31(local_8._1_3_,7);
  iVar2 = *param_1;
  piVar1 = (int *)(iVar2 + -8);
  if (piVar1 != &DAT_00bfe124) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  iVar2 = FUN_0053bdb0(iVar2,1);
  in_ECX[0x14] = iVar2;
  if (iVar2 == 0) {
    *(undefined1 *)(in_ECX + 0x1d) = 1;
  }
  ExceptionList = local_10;
  return;
}

