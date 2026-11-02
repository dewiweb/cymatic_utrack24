// rea decompile_all
// name: FUN_00690e60
// address: 0x690e60
// body: available
// range: 0x690e60-0x690ef8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00690e60(void)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  uint uVar3;
  
  iVar1 = *(int *)(in_ECX + 0x9c);
  if (iVar1 == 0) {
    return;
  }
  iVar2 = FUN_0068fb00(0);
  if (iVar2 == 0) {
    return;
  }
  uVar3 = *(uint *)(iVar2 + 0x34) & 3;
  if (uVar3 == 0) {
    if ((*(int *)(iVar2 + 4) != 0) && (*(char *)(*(int *)(iVar2 + 4) + 0xac) != '\0')) {
LAB_00690ecb:
      if (uVar3 == 0) {
        if (*(int *)(iVar2 + 4) == 0) {
          return;
        }
        if (*(char *)(*(int *)(iVar2 + 4) + 0xac) == '\0') {
          return;
        }
      }
      else if (uVar3 != 2) {
        return;
      }
      FUN_006dffc0(1);
      return;
    }
  }
  else if (uVar3 == 2) goto LAB_00690ecb;
  iVar2 = *(int *)(iVar2 + 8);
  if (((*(char *)(in_ECX + 0xae) != '\0') || (iVar2 != iVar1)) && (iVar2 != 0)) {
    FUN_006dff00(1,1,uVar3);
    FUN_006e08e0(iVar2);
  }
  return;
}

