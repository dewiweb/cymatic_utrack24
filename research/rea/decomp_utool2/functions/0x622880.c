// rea decompile_all
// name: FUN_00622880
// address: 0x622880
// body: available
// range: 0x622880-0x622914 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00622880(undefined4 *param_1)

{
  int *piVar1;
  char *pcVar2;
  int iVar3;
  undefined4 *puVar4;
  int in_ECX;
  uint uVar5;
  undefined4 *puVar6;
  
  piVar1 = *(int **)(in_ECX + 8);
  if (piVar1 == (int *)0x0) {
    puVar6 = (undefined4 *)(in_ECX + 0x14);
  }
  else {
    if (*(uint *)(in_ECX + 0x1c) < (uint)piVar1[1]) {
      *(undefined1 *)(*(uint *)(in_ECX + 0x1c) + *piVar1) = 0;
    }
    puVar6 = *(undefined4 **)(in_ECX + 8);
  }
  pcVar2 = (char *)*puVar6;
  iVar3 = *(int *)(in_ECX + 0x1c);
  if ((pcVar2 != (char *)0x0) && (*pcVar2 != '\0')) {
    uVar5 = iVar3 + 4U & 0xfffffffc;
    puVar4 = (undefined4 *)FUN_004bfe22(uVar5 + 0xb);
    puVar4[1] = uVar5;
    puVar6 = puVar4 + 2;
    *puVar4 = 0;
    FUN_004c2c30(puVar6,pcVar2,iVar3);
    *(undefined1 *)((int)puVar6 + iVar3) = 0;
    *param_1 = puVar6;
    return;
  }
  *param_1 = &DAT_00bfe12c;
  return;
}

