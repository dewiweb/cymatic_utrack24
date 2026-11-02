// rea decompile_all
// name: FUN_006902e0
// address: 0x6902e0
// body: available
// range: 0x6902e0-0x690362 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_006902e0(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int in_ECX;
  uint uVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_007218c7;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar1 = *(int *)(in_ECX + 4);
  iVar3 = *(int *)(in_ECX + 8);
  uVar4 = (uint)(*(char *)(iVar1 + 0xae) != '\0');
  uVar2 = uVar4 - 1;
  if (*(char *)(iVar1 + 0xb0) != '\0') {
    uVar2 = uVar4;
  }
  for (; iVar3 != 0; iVar3 = *(int *)(iVar3 + 8)) {
    uVar2 = uVar2 + 1;
  }
  local_8 = 0;
  iVar3 = *(int *)(iVar1 + 0xa8);
  if (iVar3 < 0) {
    iVar3 = FUN_006e9580(DAT_00c76070 ^ (uint)&stack0xfffffffc);
    iVar3 = (**(code **)(*(int *)(iVar3 + 0x14) + 0xc))(iVar1);
  }
  ExceptionList = local_10;
  return iVar3 * uVar2;
}

