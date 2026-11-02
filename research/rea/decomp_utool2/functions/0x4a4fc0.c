// rea decompile_all
// name: FUN_004a4fc0
// address: 0x4a4fc0
// body: available
// range: 0x4a4fc0-0x4a50a2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004a4fc0(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00703783;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_006ea2c0(DAT_00c76070 ^ (uint)&stack0xfffffffc);
  local_8 = 0;
  *in_ECX = juce::DropShadower::ShadowWindow::vftable;
  if (param_1 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = FUN_0040de70(param_1);
  }
  in_ECX[0x1c] = iVar1;
  if (iVar1 != 0) {
    LOCK();
    *(int *)(iVar1 + 4) = *(int *)(iVar1 + 4) + 1;
    UNLOCK();
  }
  local_8 = CONCAT31(local_8._1_3_,1);
  in_ECX[0x1d] = *param_2;
  in_ECX[0x1e] = param_2[1];
  in_ECX[0x1f] = param_2[2];
  in_ECX[0x20] = param_2[3];
  FUN_006e9e70(1);
  *(byte *)(in_ECX + 0x1a) = *(byte *)(in_ECX + 0x1a) & 0xef | 8;
  if ((*(byte *)(param_1 + 0x68) & 1) == 0) {
    if (*(int *)(param_1 + 0xc) != 0) {
      FUN_006e5050(in_ECX,0xffffffff);
    }
  }
  else {
    FUN_006e9790(in_ECX[4],in_ECX[5],1,1);
    FUN_006e9aa0(0x406,0);
  }
  ExceptionList = local_10;
  return;
}

