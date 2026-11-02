// rea decompile_all
// name: FUN_004be350
// address: 0x4be350
// body: available
// range: 0x4be350-0x4be3bd inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004be350(undefined4 param_1,undefined4 param_2)

{
  int in_ECX;
  int iVar1;
  undefined4 uVar2;
  int local_10;
  undefined4 local_c;
  
  if (*(char *)(in_ECX + 0x5c) == '\0') {
    uVar2 = 0;
    iVar1 = *(int *)(in_ECX + 0x58) + 0x78;
    FUN_004bdec0(iVar1,0);
    FUN_004be520(*(int *)(in_ECX + 0x58) + 0x78,iVar1,uVar2);
    iVar1 = *(int *)(in_ECX + 0x58);
    FUN_004b98a0(iVar1 + 8,iVar1 + 0x78,*(int *)(iVar1 + 0x60) + 8);
  }
  local_10 = *(int *)(in_ECX + 0x58) + 0x78;
  local_c = param_2;
  FUN_004be810(&local_10);
  return;
}

