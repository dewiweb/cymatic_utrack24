// rea decompile_all
// name: FUN_006e0a30
// address: 0x6e0a30
// body: available
// range: 0x6e0a30-0x6e0b18 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006e0a30(int param_1)

{
  int iVar1;
  uint uVar2;
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x9c) == param_1) {
    return;
  }
  if ((param_1 != 0) && (*(int *)(param_1 + 4) != 0)) {
    FUN_006e0a30(0);
  }
  if (*(int *)(in_ECX + 0x9c) != 0) {
    FUN_00690370(0);
  }
  *(int *)(in_ECX + 0x9c) = param_1;
  if (param_1 != 0) {
    FUN_00690370(in_ECX);
  }
  *(undefined1 *)(in_ECX + 0xad) = 1;
  FUN_00690b20();
  iVar1 = *(int *)(in_ECX + 0x9c);
  if (iVar1 == 0) {
    return;
  }
  if ((*(char *)(in_ECX + 0xac) == '\0') && (*(char *)(in_ECX + 0xae) != '\0')) {
    return;
  }
  uVar2 = *(uint *)(iVar1 + 0x34) & 3;
  if (uVar2 == 0) {
    if ((*(int *)(iVar1 + 4) == 0) || (*(char *)(*(int *)(iVar1 + 4) + 0xac) == '\0'))
    goto LAB_006e0ad3;
  }
  else if (uVar2 != 2) goto LAB_006e0ad3;
  FUN_006dffc0(1);
LAB_006e0ad3:
  uVar2 = *(uint *)(*(int *)(in_ECX + 0x9c) + 0x34) & 3;
  if (uVar2 == 0) {
    iVar1 = *(int *)(*(int *)(in_ECX + 0x9c) + 4);
    if (iVar1 != 0) {
      if (*(char *)(iVar1 + 0xac) != '\0') {
        return;
      }
      FUN_006dffc0(2);
      return;
    }
  }
  else if (uVar2 == 2) {
    return;
  }
  FUN_006dffc0(2);
  return;
}

