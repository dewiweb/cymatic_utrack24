// rea decompile_all
// name: FUN_006ca640
// address: 0x6ca640
// body: available
// range: 0x6ca640-0x6ca6b3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006ca640(int param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  int *piVar3;
  
  if (param_2 != (undefined4 *)0x0) {
    iVar2 = *(int *)(in_ECX + 0x14) + -1;
    if (-1 < iVar2) {
      piVar3 = (int *)(*(int *)(in_ECX + 0xc) + iVar2 * 4);
      do {
        iVar1 = *piVar3;
        if (*(int *)(iVar1 + 0x2c) == param_1) {
          iVar2 = *(int *)(iVar1 + 0x38) + 1;
          if (*(int *)(iVar1 + 0x34) < iVar2) {
            FUN_00409cf0(iVar2 / 2 + 8 + iVar2 & 0xfffffff8);
          }
          iVar2 = *(int *)(iVar1 + 0x38);
          *(int *)(iVar1 + 0x38) = iVar2 + 1;
          *(undefined4 **)(*(int *)(iVar1 + 0x30) + iVar2 * 4) = param_2;
          return;
        }
        piVar3 = piVar3 + -1;
        iVar2 = iVar2 + -1;
      } while (-1 < iVar2);
    }
    (**(code **)*param_2)(1);
  }
  return;
}

