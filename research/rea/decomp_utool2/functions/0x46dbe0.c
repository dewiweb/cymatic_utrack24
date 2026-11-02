// rea decompile_all
// name: FUN_0046dbe0
// address: 0x46dbe0
// body: available
// range: 0x46dbe0-0x46dceb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0046dc70) */
/* WARNING: Removing unreachable block (ram,0x0046dc37) */
/* WARNING: Removing unreachable block (ram,0x0046dc56) */
/* WARNING: Removing unreachable block (ram,0x0046dc51) */
/* WARNING: Removing unreachable block (ram,0x0046dc5e) */

int * FUN_0046dbe0(int *param_1)

{
  int iVar1;
  int *piVar2;
  int in_ECX;
  bool bVar3;
  
  if ((0 < *(int *)(in_ECX + 0x14)) && (0 < *(int *)(in_ECX + 0x18))) {
    FUN_0044dd00(in_ECX + 0xc);
  }
  if (*(char *)(in_ECX + 0x24) != '\0') {
    iVar1 = *(int *)(in_ECX + 0x18);
    piVar2 = *(int **)(in_ECX + 8);
    *(undefined1 *)(in_ECX + 0x24) = 0;
    while (iVar1 = iVar1 + -1, -1 < iVar1) {
      if (1 < *piVar2) {
        bVar3 = false;
        goto LAB_0046dcbe;
      }
      piVar2 = piVar2 + *(int *)(in_ECX + 0x20);
    }
    *(undefined4 *)(in_ECX + 0x18) = 0;
  }
  bVar3 = *(int *)(in_ECX + 0x18) == 0;
LAB_0046dcbe:
  if (bVar3) {
    in_ECX = 0;
  }
  *param_1 = in_ECX;
  if (in_ECX != 0) {
    *(int *)(in_ECX + 4) = *(int *)(in_ECX + 4) + 1;
  }
  FID_conflict__free((void *)0x0);
  return param_1;
}

