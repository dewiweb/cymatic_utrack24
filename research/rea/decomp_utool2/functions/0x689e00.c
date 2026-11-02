// rea decompile_all
// name: FUN_00689e00
// address: 0x689e00
// body: available
// range: 0x689e00-0x689e55 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00689e00(int *param_1,int param_2)

{
  int in_ECX;
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = *(int *)(in_ECX + 0x14) + -1;
  if (-1 < iVar3) {
    puVar1 = (undefined4 *)(*(int *)(in_ECX + 0xc) + iVar3 * 4);
    do {
      if (*(int *)*puVar1 == param_2) {
        iVar3 = *(int *)(*(int *)(in_ECX + 0xc) + iVar3 * 4);
        if (iVar3 != 0) {
          iVar3 = *(int *)(iVar3 + 4);
          *param_1 = iVar3;
          piVar2 = (int *)(iVar3 + -8);
          if (piVar2 == &DAT_00bfe124) {
            return;
          }
          LOCK();
          *piVar2 = *piVar2 + 1;
          UNLOCK();
          return;
        }
        break;
      }
      puVar1 = puVar1 + -1;
      iVar3 = iVar3 + -1;
    } while (-1 < iVar3);
  }
  *param_1 = (int)&DAT_00bfe12c;
  return;
}

