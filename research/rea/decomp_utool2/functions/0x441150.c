// rea decompile_all
// name: FUN_00441150
// address: 0x441150
// body: available
// range: 0x441150-0x441209 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00441150(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5,
                 int param_6)

{
  undefined4 uVar1;
  int *piVar2;
  undefined4 *puVar3;
  int in_ECX;
  int iVar4;
  int iVar5;
  undefined4 local_24 [2];
  undefined4 local_1c [2];
  undefined4 local_14;
  int local_10;
  undefined4 local_c;
  int local_8;
  
  iVar5 = 0;
  if (0 < param_6) {
    do {
      iVar4 = *(int *)(in_ECX + 0x80) * param_1;
      piVar2 = *(int **)(in_ECX + 0x68);
      if (*(char *)(in_ECX + 0x88) == '\0') {
        local_10 = ((((int)(*(int *)(in_ECX + 0x10) + (*(int *)(in_ECX + 0x10) >> 0x1f & 7U)) >> 3)
                     * iVar5 + iVar4) - piVar2[2]) + *piVar2 + *(int *)(in_ECX + 0x70);
        local_14 = *(undefined4 *)(in_ECX + 0x20);
        FUN_004431a0(local_24,param_3);
        puVar3 = local_24;
      }
      else {
        local_8 = ((((int)(*(int *)(in_ECX + 0x10) + (*(int *)(in_ECX + 0x10) >> 0x1f & 7U)) >> 3) *
                    iVar5 + iVar4) - piVar2[2]) + *piVar2 + *(int *)(in_ECX + 0x70);
        local_c = *(undefined4 *)(in_ECX + 0x20);
        FUN_00442e80(local_1c,param_3);
        puVar3 = local_1c;
      }
      uVar1 = puVar3[1];
      *(undefined4 *)(param_5 + iVar5 * 8) = *puVar3;
      *(undefined4 *)(param_5 + 4 + iVar5 * 8) = uVar1;
      iVar5 = iVar5 + 1;
    } while (iVar5 < param_6);
  }
  return;
}

