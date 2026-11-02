// rea decompile_all
// name: FUN_006ea660
// address: 0x6ea660
// body: available
// range: 0x6ea660-0x6ea737 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006ea660(void)

{
  char cVar1;
  int iVar2;
  int in_ECX;
  undefined1 local_14 [4];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00728eb8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  cVar1 = FUN_006e6420(DAT_00c76070 ^ (uint)&stack0xfffffffc);
  if (cVar1 == '\0') {
    if (((*(int *)(in_ECX + 0x70) != 0) && (*(char *)(in_ECX + 0x75) != '\0')) &&
       (*(char *)(in_ECX + 0x74) == '\0')) {
      *(undefined1 *)(in_ECX + 0x74) = 1;
      FUN_0045c990("about:blank");
      local_8 = 0;
      FUN_004b5e60(local_14,0,0);
      FUN_00637c10();
    }
  }
  else {
    if (*(int *)(*(int *)(in_ECX + 0x70) + 0x78) == 0) {
      iVar2 = FUN_006d1d80();
      if (iVar2 != 0) {
        FUN_004b5cc0();
        FUN_006ea610();
        ExceptionList = local_10;
        return;
      }
    }
    if (*(char *)(in_ECX + 0x74) != '\0') {
      FUN_006ea770();
      ExceptionList = local_10;
      return;
    }
  }
  ExceptionList = local_10;
  return;
}

