// rea decompile_all
// name: FUN_0068dd50
// address: 0x68dd50
// body: available
// range: 0x68dd50-0x68de57 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0068dd50(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined3 uVar2;
  int iVar3;
  undefined4 *in_ECX;
  int iVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_007216cc;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  in_ECX[1] = param_1;
  *in_ECX = juce::ComponentPeer::vftable;
  in_ECX[2] = param_2;
  in_ECX[3] = 0;
  in_ECX[4] = 0;
  in_ECX[5] = 0;
  in_ECX[6] = 0;
  in_ECX[7] = 0;
  in_ECX[8] = 0;
  in_ECX[9] = 0;
  uStack_7 = 0;
  uVar2 = uStack_7;
  local_8 = 1;
  uStack_7 = 0;
  DAT_00c7eb74 = DAT_00c7eb74 + 2;
  in_ECX[10] = 0;
  in_ECX[0xb] = DAT_00c7eb74;
  iVar3 = DAT_00c8a67c;
  *(undefined1 *)(in_ECX + 0xc) = 0;
  if (iVar3 == 0) {
    operator_new(0xd0);
    local_8 = 2;
    iVar3 = FUN_006cb960();
    DAT_00c8a67c = iVar3;
    uVar2 = uStack_7;
  }
  uStack_7 = uVar2;
  iVar4 = *(int *)(iVar3 + 0x50) + 1;
  if (*(int *)(iVar3 + 0x4c) < iVar4) {
    FUN_00409cf0(iVar4 / 2 + *(int *)(iVar3 + 0x50) + 9 & 0xfffffff8);
  }
  iVar4 = *(int *)(iVar3 + 0x50);
  *(int *)(iVar3 + 0x50) = iVar4 + 1;
  puVar1 = (undefined4 *)(*(int *)(iVar3 + 0x48) + iVar4 * 4);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = in_ECX;
  }
  ExceptionList = local_10;
  return;
}

