// rea decompile_all
// name: FUN_006390d0
// address: 0x6390d0
// body: available
// range: 0x6390d0-0x6391b5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 FUN_006390d0(void)

{
  undefined1 uVar1;
  char cVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  DWORD DVar6;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0071f137;
  local_10 = ExceptionList;
  uVar3 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (*(int *)(in_ECX + 0x90) == 0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    puVar4 = operator_new(8);
    local_8 = 0;
    *puVar4 = *(undefined4 *)(in_ECX + 0x90);
    uVar1 = FUN_00611760(0xffffffff);
    *(undefined1 *)(puVar4 + 1) = uVar1;
  }
  local_8 = 1;
  if ((puVar4 != (undefined4 *)0x0) && (*(char *)(puVar4 + 1) == '\0')) {
    uVar1 = 0;
    goto LAB_0063918c;
  }
  if (**(char **)(in_ECX + 0x70) == '\0') {
LAB_00639181:
    uVar1 = 1;
  }
  else {
    puVar5 = (undefined4 *)FUN_00458890(uVar3);
    DVar6 = GetFileAttributesW((LPCWSTR)*puVar5);
    if (DVar6 == 0xffffffff) goto LAB_00639181;
    cVar2 = FUN_006385b0();
    if (cVar2 != '\0') goto LAB_00639181;
    cVar2 = FUN_00638b10();
    if (cVar2 != '\0') goto LAB_00639181;
    uVar1 = 0;
  }
  *(undefined1 *)(in_ECX + 0x94) = uVar1;
LAB_0063918c:
  if (puVar4 != (undefined4 *)0x0) {
    FUN_00611700();
    FUN_004bfe14(puVar4,8);
  }
  ExceptionList = local_10;
  return uVar1;
}

