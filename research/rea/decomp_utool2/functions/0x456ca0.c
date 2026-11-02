// rea decompile_all
// name: FUN_00456ca0
// address: 0x456ca0
// body: available
// range: 0x456ca0-0x456d4a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00456ca0(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  int *in_ECX;
  int *local_8;
  
  local_8 = in_ECX;
  iVar2 = FUN_0061d870();
  iVar3 = FUN_0061d810();
  iVar4 = FUN_0061d7a0();
  piVar5 = (int *)(iVar4 + (iVar2 * 0x40 + iVar3) * 0x20 & 0xffff);
  pcVar1 = *(code **)(*in_ECX + 0x1c);
  if (pcVar1 == FUN_00620620) {
    local_8 = piVar5;
    (**(code **)(*in_ECX + 0x10))(&local_8,2);
  }
  else {
    (*pcVar1)(piVar5);
  }
  iVar2 = FUN_0062edc0();
  iVar3 = FUN_0062ed60();
  iVar4 = FUN_0062ecc0();
  uVar6 = iVar4 + (iVar2 * 0x10 + -0x3bf + iVar3) * 0x20;
  pcVar1 = *(code **)(*in_ECX + 0x1c);
  if (pcVar1 == FUN_00620620) {
    local_8 = (int *)(uVar6 & 0xffff);
    (**(code **)(*in_ECX + 0x10))(&local_8,2);
    return;
  }
  (*pcVar1)(uVar6);
  return;
}

