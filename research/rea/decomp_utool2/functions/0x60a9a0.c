// rea decompile_all
// name: FUN_0060a9a0
// address: 0x60a9a0
// body: available
// range: 0x60a9a0-0x60aa68 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0060a9a0(void)

{
  int *piVar1;
  uint uVar2;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0071c42e;
  local_10 = ExceptionList;
  uVar2 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  EnterCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0xc));
  local_8 = 0;
  if ((*(int **)(in_ECX + 8) != (int *)0x0) && (*(char *)(in_ECX + 0x34) != '\0')) {
    (**(code **)(**(int **)(in_ECX + 8) + 0xc))(uVar2);
  }
  *(undefined4 *)(in_ECX + 0x30) = 0;
  *(undefined8 *)(in_ECX + 0x28) = 0;
  *(undefined1 *)(in_ECX + 0x34) = 0;
  local_8 = CONCAT31(local_8._1_3_,1);
  if ((*(int *)(in_ECX + 0x48) != 1) || (*(int *)(in_ECX + 0x44) != 1)) {
    *(undefined4 *)(in_ECX + 0x4c) = 0x40;
    FUN_00403500(0x40,*(char *)(in_ECX + 0xd8) != '\0');
    piVar1 = *(int **)(in_ECX + 0x54);
    *(int **)(in_ECX + 0x50) = piVar1;
    *piVar1 = (int)(piVar1 + 4);
    *(undefined4 *)(*(int *)(in_ECX + 0x50) + 4) = 0;
    *(undefined4 *)(in_ECX + 0x48) = 1;
    *(undefined4 *)(in_ECX + 0x44) = 1;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0xc));
  ExceptionList = local_10;
  return;
}

