// rea decompile_all
// name: FUN_00430310
// address: 0x430310
// body: available
// range: 0x430310-0x430428 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00430310(void)

{
  int *piVar1;
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar2;
  uint uVar3;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006fe038;
  local_10 = ExceptionList;
  uVar3 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  piVar1 = (int *)(*(int *)(in_ECX + 0x48) + -8);
  if (piVar1 != &DAT_00bfe124) {
    LOCK();
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 0) {
      FID_conflict__free(piVar1);
    }
  }
  *(undefined1 **)(in_ECX + 0x48) = &DAT_00bfe12c;
  FUN_0063eab0(uVar3);
  piVar1 = *(int **)(in_ECX + 0x6f0);
  lpCriticalSection = (LPCRITICAL_SECTION)(in_ECX + 0x6f4);
  EnterCriticalSection(lpCriticalSection);
  *(undefined4 *)(in_ECX + 0x6f0) = 0;
  LeaveCriticalSection(lpCriticalSection);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0xc))();
  }
  if ((*(int *)(in_ECX + 0x24) != 0) && (*(char *)(in_ECX + 0x734) != '\0')) {
    EnterCriticalSection(lpCriticalSection);
    local_8 = 0;
    *(undefined2 *)(in_ECX + 0x734) = 0;
    *(undefined1 *)(in_ECX + 0x73a) = 0;
    if (*(int *)(in_ECX + 0x24) != 0) {
      Sleep(0x14);
      (**(code **)(**(int **)(in_ECX + 0x24) + 0x20))();
      Sleep(10);
      if ((*(int *)(in_ECX + 0x24) != 0) && (*(char *)(in_ECX + 0x736) != '\0')) {
        *(undefined1 *)(in_ECX + 0x736) = 0;
        (**(code **)(**(int **)(in_ECX + 0x24) + 0x50))();
      }
    }
    Sleep(10);
    LeaveCriticalSection(lpCriticalSection);
  }
  ExceptionList = local_10;
  return;
}

