// rea decompile_all
// name: FUN_0059ca90
// address: 0x59ca90
// body: available
// range: 0x59ca90-0x59cb20 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0059ca90(void)

{
  int *piVar1;
  uint uVar2;
  undefined4 *puVar3;
  DWORD DVar4;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00715b25;
  local_10 = ExceptionList;
  uVar2 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  EnterCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0xc));
  local_8 = 0;
  piVar1 = (int *)(in_ECX + 0x78);
  *piVar1 = *piVar1 + -1;
  if ((*piVar1 == 0) && (*(char *)(in_ECX + 0x7c) != '\0')) {
    FUN_0059c7b0(uVar2);
    if (**(char **)(in_ECX + 0x60) != '\0') {
      puVar3 = (undefined4 *)FUN_00458890();
      DVar4 = GetFileAttributesW((LPCWSTR)*puVar3);
      if ((DVar4 & 0x10) == 0) {
        FUN_00635980();
      }
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0xc));
  ExceptionList = local_10;
  return;
}

