// rea decompile_all
// name: FUN_004eb7e0
// address: 0x4eb7e0
// body: available
// range: 0x4eb7e0-0x4eb8f7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004eb7e0(char param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *in_ECX;
  int iVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00704fa4;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_006ea2c0(DAT_00c76070 ^ (uint)&stack0xfffffffc);
  puVar1 = in_ECX + 0x1c;
  local_8 = 0;
  *puVar1 = juce::ComponentListener::vftable;
  *in_ECX = BasePopupComponent::vftable;
  *puVar1 = BasePopupComponent::vftable;
  *(char *)(in_ECX + 0x1d) = param_1;
  in_ECX[0x1e] = 0x3f800000;
  in_ECX[0x1f] = 0;
  in_ECX[0x20] = 0;
  in_ECX[0x21] = 0;
  in_ECX[0x22] = 0;
  FUN_004eb1c0(in_ECX);
  local_8 = CONCAT31(local_8._1_3_,2);
  FUN_006e5050(in_ECX,0xffffffff);
  if (puVar1 != (undefined4 *)0x0) {
    FUN_004097d0(puVar1);
  }
  (**(code **)(in_ECX[0x23] + 0x28))(1);
  FUN_006e5050(in_ECX + 0x23,0xffffffff);
  iVar2 = DAT_00c8a5c0;
  if (param_1 != '\0') {
    iVar3 = *(int *)(DAT_00c8a5c0 + 0xc) + 1;
    if (*(int *)(DAT_00c8a5c0 + 8) < iVar3) {
      FUN_00409cf0(iVar3 / 2 + *(int *)(DAT_00c8a5c0 + 0xc) + 9 & 0xfffffff8);
    }
    iVar3 = *(int *)(iVar2 + 0xc);
    *(int *)(iVar2 + 0xc) = iVar3 + 1;
    *(undefined4 **)(*(int *)(iVar2 + 4) + iVar3 * 4) = in_ECX;
  }
  ExceptionList = local_10;
  return;
}

