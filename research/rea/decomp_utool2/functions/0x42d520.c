// rea decompile_all
// name: FUN_0042d520
// address: 0x42d520
// body: available
// range: 0x42d520-0x42d5a5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0042d520(void)

{
  int iVar1;
  int *piVar2;
  int in_ECX;
  int iVar3;
  undefined1 local_c [4];
  undefined1 local_8 [4];
  
  if (*(char *)(in_ECX + 0x48) == '\0') {
    if (DAT_00c8a8f0 == (HANDLE)0x0) {
      Sleep(5);
    }
    else {
      WaitForSingleObject(DAT_00c8a8f0,5);
    }
    iVar3 = 0;
    if (0 < *(int *)(in_ECX + 0x88)) {
      do {
        iVar1 = *(int *)(*(int *)(in_ECX + 0x80) + iVar3 * 4);
        piVar2 = *(int **)(iVar1 + 0x30);
        if (piVar2 != (int *)0x0) {
          (**(code **)(*piVar2 + 0x10))(piVar2,local_8,iVar1 + 0x34);
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < *(int *)(in_ECX + 0x88));
    }
    iVar3 = 0;
    if (0 < *(int *)(in_ECX + 0x7c)) {
      do {
        iVar1 = *(int *)(*(int *)(in_ECX + 0x74) + iVar3 * 4);
        piVar2 = *(int **)(iVar1 + 0x40);
        if (piVar2 != (int *)0x0) {
          (**(code **)(*piVar2 + 0x10))(piVar2,local_c,iVar1);
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < *(int *)(in_ECX + 0x7c));
    }
  }
  return;
}

