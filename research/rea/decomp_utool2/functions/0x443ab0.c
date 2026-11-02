// rea decompile_all
// name: FUN_00443ab0
// address: 0x443ab0
// body: available
// range: 0x443ab0-0x443b6c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00443ab0(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  int *piVar3;
  int in_ECX;
  int iVar4;
  
  piVar2 = *(int **)(in_ECX + 0x2c);
  piVar3 = piVar2;
  do {
    if (piVar3 == piVar2 + *(int *)(in_ECX + 0x34)) {
LAB_00443adb:
      iVar4 = *(int *)(in_ECX + 0x34) + 1;
      if (*(int *)(in_ECX + 0x30) < iVar4) {
        FUN_00409cf0(iVar4 / 2 + *(int *)(in_ECX + 0x34) + 9 & 0xfffffff8);
      }
      iVar4 = *(int *)(in_ECX + 0x34);
      *(int *)(in_ECX + 0x34) = iVar4 + 1;
      piVar2 = (int *)(*(int *)(in_ECX + 0x2c) + iVar4 * 4);
      if (piVar2 != (int *)0x0) {
        *piVar2 = param_1;
      }
      iVar4 = *(int *)(in_ECX + 0x40) + 1;
      if (*(int *)(in_ECX + 0x3c) < iVar4) {
        FUN_00409cf0(iVar4 / 2 + *(int *)(in_ECX + 0x40) + 9 & 0xfffffff8);
      }
      iVar4 = *(int *)(in_ECX + 0x40);
      *(int *)(in_ECX + 0x40) = iVar4 + 1;
      puVar1 = (undefined4 *)(*(int *)(in_ECX + 0x38) + iVar4 * 4);
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = param_2;
      }
      return;
    }
    if (param_1 == *piVar3) {
      iVar4 = (int)piVar3 - (int)piVar2 >> 2;
      if (-1 < iVar4) {
        FUN_0040f650(iVar4,param_2);
        return;
      }
      goto LAB_00443adb;
    }
    piVar3 = piVar3 + 1;
  } while( true );
}

