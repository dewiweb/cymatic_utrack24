// rea decompile_all
// name: FUN_005cb700
// address: 0x5cb700
// body: available
// range: 0x5cb700-0x5cb7bb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005cb700(void)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  int in_ECX;
  int *piVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0071af4f;
  local_10 = ExceptionList;
  uVar2 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *(undefined4 *)(in_ECX + 0x1f0) = 0;
  *(undefined4 *)(in_ECX + 500) = 0;
  *(undefined4 *)(in_ECX + 0x1f8) = 0;
  *(undefined4 *)(in_ECX + 0x1fc) = 0;
  if (0 < *(int *)(in_ECX + 0x18)) {
    piVar4 = (int *)(*(int *)(in_ECX + 8) + 0xc);
    LOCK();
    iVar3 = *piVar4;
    if (iVar3 == 0) {
      *piVar4 = 1;
      iVar3 = 0;
    }
    UNLOCK();
    if ((iVar3 == 0) && (cVar1 = FUN_0063e270(uVar2), cVar1 == '\0')) {
      LOCK();
      *(undefined4 *)(*(int *)(in_ECX + 8) + 0xc) = 0;
      UNLOCK();
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x1c0));
  local_8 = 0;
  iVar3 = *(int *)(in_ECX + 0xa4);
  while (iVar3 = iVar3 + -1, -1 < iVar3) {
    (**(code **)(**(int **)(*(int *)(in_ECX + 0x9c) + iVar3 * 4) + 0xc))();
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x1c0));
  ExceptionList = local_10;
  return;
}

