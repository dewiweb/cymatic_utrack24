// rea decompile_all
// name: FUN_00429210
// address: 0x429210
// body: available
// range: 0x429210-0x429286 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool FUN_00429210(void)

{
  int iVar1;
  int in_ECX;
  int iVar2;
  undefined1 local_c [4];
  int local_8;
  
  if (*(int *)(in_ECX + 0x20) < 1) {
    iVar2 = 0;
  }
  else {
    if (*(char *)(in_ECX + 0x38) == '\0') {
      local_8 = 0;
      iVar2 = (**(code **)(**(int **)(in_ECX + 0xc) + 0x18))(*(int **)(in_ECX + 0xc),&local_8);
      if (-1 < iVar2) {
        iVar2 = *(int *)(in_ECX + 0x78) - local_8;
        goto LAB_0042924d;
      }
    }
    iVar2 = *(int *)(in_ECX + 0x78);
  }
LAB_0042924d:
  iVar1 = (**(code **)(**(int **)(in_ECX + 0x90) + 0xc))(*(int **)(in_ECX + 0x90),iVar2,local_c);
  if (-1 < iVar1) {
    (**(code **)(**(int **)(in_ECX + 0x90) + 0x10))(*(int **)(in_ECX + 0x90),iVar2,2);
  }
  iVar2 = (**(code **)(**(int **)(in_ECX + 0xc) + 0x28))(*(int **)(in_ECX + 0xc));
  return -1 < iVar2;
}

