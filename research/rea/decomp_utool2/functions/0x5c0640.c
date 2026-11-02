// rea decompile_all
// name: FUN_005c0640
// address: 0x5c0640
// body: available
// range: 0x5c0640-0x5c073a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005c0640(int param_1,undefined8 param_2)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  int in_ECX;
  uint uVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_0071a51a;
  local_10 = ExceptionList;
  uVar4 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 0;
  if ((param_1 != *(int *)(in_ECX + 0x4c)) || (*(int *)(in_ECX + 0x48) != 2)) {
    uVar5 = param_1 + 3U & 0xfffffffc;
    uVar3 = (uint)ExceptionList >> 8;
    iVar1 = uVar5 * 8 + 0x30;
    *(int *)(in_ECX + 0x50) = iVar1;
    FUN_00403500(iVar1,CONCAT31((int3)uVar3,*(char *)(in_ECX + 0xdc) != '\0'));
    piVar2 = *(int **)(in_ECX + 0x58);
    *(int **)(in_ECX + 0x54) = piVar2;
    *piVar2 = (int)(piVar2 + 4);
    *(int **)(*(int *)(in_ECX + 0x54) + 4) = piVar2 + 4 + uVar5;
    *(undefined4 *)(*(int *)(in_ECX + 0x54) + 8) = 0;
    *(int *)(in_ECX + 0x4c) = param_1;
    *(undefined4 *)(in_ECX + 0x48) = 2;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x30));
  local_8 = 1;
  iVar1 = *(int *)(in_ECX + 0xc);
  *(undefined8 *)(in_ECX + 0xe0) = param_2;
  *(int *)(in_ECX + 0xe8) = param_1;
  while (iVar1 = iVar1 + -1, -1 < iVar1) {
    (**(code **)(**(int **)(*(int *)(in_ECX + 4) + iVar1 * 4) + 4))(param_1,param_2,uVar4);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x30));
  ExceptionList = local_10;
  return;
}

