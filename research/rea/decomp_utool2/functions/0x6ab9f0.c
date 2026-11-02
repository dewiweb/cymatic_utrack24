// rea decompile_all
// name: FUN_006ab9f0
// address: 0x6ab9f0
// body: available
// range: 0x6ab9f0-0x6abae7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_006ab9f0(int param_1)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int in_ECX;
  int iVar5;
  int iVar6;
  
  if ((*(uint *)(param_1 + 0x10) >> 2 & 1) != 0) {
    return 0;
  }
  if ((*(uint *)(param_1 + 0x10) >> 1 & 1) != 0) {
    return 0;
  }
  if ((*(char *)(in_ECX + 0x9c) == '\0') && ((*(byte *)(in_ECX + 0x178) & 2) == 0)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if ((*(char *)(in_ECX + 0x9d) == '\0') && ((*(byte *)(in_ECX + 0x278) & 2) == 0)) {
    bVar2 = false;
    if (!bVar1) {
      return 0;
    }
  }
  else {
    bVar2 = true;
  }
  iVar3 = FUN_006abaf0();
  iVar4 = FUN_006abaf0();
  iVar6 = *(int *)(in_ECX + 0x7c);
  iVar5 = *(int *)(in_ECX + 0x80);
  if ((iVar3 == 0) || (iVar4 == 0)) {
LAB_006aba90:
    if (bVar2) {
      if (((iVar3 != 0) || ((*(byte *)(param_1 + 0x10) & 1) != 0)) || (!bVar1)) {
        if (iVar3 != 0) {
          iVar4 = iVar3;
        }
        iVar6 = iVar6 - iVar4;
        goto LAB_006ababb;
      }
    }
    else {
LAB_006abab1:
      if (!bVar1) goto LAB_006ababb;
    }
    if (iVar4 == 0) goto LAB_006ababb;
  }
  else {
    if (!bVar2) goto LAB_006abab1;
    if (!bVar1) goto LAB_006aba90;
    iVar6 = iVar6 - iVar3;
  }
  iVar5 = iVar5 - iVar4;
LAB_006ababb:
  if ((iVar6 == *(int *)(in_ECX + 0x7c)) && (iVar5 == *(int *)(in_ECX + 0x80))) {
    return 0;
  }
  FUN_006ac370(iVar6,iVar5);
  return 1;
}

