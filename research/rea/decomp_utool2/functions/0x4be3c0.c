// rea decompile_all
// name: FUN_004be3c0
// address: 0x4be3c0
// body: available
// range: 0x4be3c0-0x4be45a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004be3c0(undefined4 param_1,undefined4 param_2,char param_3)

{
  int iVar1;
  int in_ECX;
  int iVar2;
  undefined4 uVar3;
  int local_10;
  undefined4 local_c;
  
  if (*(char *)(in_ECX + 0x5c) == '\0') {
    uVar3 = 0;
    iVar2 = *(int *)(in_ECX + 0x58) + 0x78;
    FUN_004bdec0(iVar2,0);
    iVar1 = *(int *)(in_ECX + 0x58);
    if (param_3 == '\0') {
      FUN_004be520(iVar1 + 0x78,iVar2,uVar3);
    }
    else if (*(char *)(iVar1 + 0x18) != '\0') {
      if (0 < *(int *)(iVar1 + 0x2c84)) {
        FUN_004b9700();
      }
      *(char *)(iVar1 + 0x18) = '\0';
      glDisable(0xbe2);
    }
    iVar2 = *(int *)(in_ECX + 0x58);
    FUN_004b98a0(iVar2 + 8,iVar2 + 0x78,*(int *)(iVar2 + 0x60) + 8);
  }
  local_10 = *(int *)(in_ECX + 0x58) + 0x78;
  local_c = param_2;
  FUN_004beae0(&local_10);
  return;
}

