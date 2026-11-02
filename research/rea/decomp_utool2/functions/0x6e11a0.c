// rea decompile_all
// name: FUN_006e11a0
// address: 0x6e11a0
// body: available
// range: 0x6e11a0-0x6e1249 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006e11a0(void)

{
  int iVar1;
  char cVar2;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_007281f1;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if ((*(byte *)(in_ECX + 0x69) & 0x10) == 0) {
    if ((*(int *)(in_ECX + 0xc) != 0) &&
       (cVar2 = FUN_006e6320(DAT_00c76070 ^ (uint)&stack0xfffffffc), cVar2 == '\0')) {
      ExceptionList = local_10;
      return;
    }
    iVar1 = *(int *)(in_ECX + 0x78);
    if ((((*(char *)(iVar1 + 0x135) != '\0') && (*(int *)(iVar1 + 0x18) != 8)) &&
        (*(double *)(iVar1 + 0x70) <= *(double *)(iVar1 + 0x88))) &&
       (*(double *)(iVar1 + 0x88) <= *(double *)(iVar1 + 0x78))) {
      FUN_0049bc60();
      local_8 = 0;
      FUN_0049b400(2);
      local_8 = 1;
      FUN_0049bd00();
    }
  }
  ExceptionList = local_10;
  return;
}

