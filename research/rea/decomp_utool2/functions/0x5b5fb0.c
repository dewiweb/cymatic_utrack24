// rea decompile_all
// name: FUN_005b5fb0
// address: 0x5b5fb0
// body: available
// range: 0x5b5fb0-0x5b60c6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005b5fb0(int param_1)

{
  undefined4 *lParam;
  int iVar1;
  BOOL BVar2;
  int in_ECX;
  int *piVar3;
  int *piVar4;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x13c));
  piVar4 = (int *)(in_ECX + 0x54);
  iVar1 = 0;
  do {
    if ((*piVar4 != 0) && (*piVar4 == param_1)) goto LAB_005b60b5;
    iVar1 = iVar1 + 1;
    piVar4 = piVar4 + 0x13;
  } while (iVar1 < 4);
  piVar3 = *(int **)(in_ECX + 0x154);
  piVar4 = piVar3 + *(int *)(in_ECX + 0x15c);
  for (; piVar3 != piVar4; piVar3 = piVar3 + 1) {
    if (param_1 == *piVar3) goto LAB_005b60b5;
  }
  *(undefined1 *)(in_ECX + 0x16c) = 0;
  iVar1 = *(int *)(in_ECX + 0x15c) + 1;
  if (*(int *)(in_ECX + 0x158) < iVar1) {
    FUN_00409cf0(iVar1 / 2 + *(int *)(in_ECX + 0x15c) + 9 & 0xfffffff8);
  }
  iVar1 = *(int *)(in_ECX + 0x15c);
  *(int *)(in_ECX + 0x15c) = iVar1 + 1;
  piVar4 = (int *)(*(int *)(in_ECX + 0x154) + iVar1 * 4);
  if (piVar4 != (int *)0x0) {
    *piVar4 = param_1;
  }
  piVar4 = (int *)(*(int *)(in_ECX + 4) + 0xc);
  LOCK();
  iVar1 = *piVar4;
  if (iVar1 == 0) {
    *piVar4 = 1;
    iVar1 = 0;
  }
  UNLOCK();
  if (iVar1 == 0) {
    lParam = *(undefined4 **)(in_ECX + 4);
    if ((DAT_00c8a658 != 0) && (*(char *)(DAT_00c8a658 + 4) == '\0')) {
      LOCK();
      lParam[1] = lParam[1] + 1;
      UNLOCK();
      BVar2 = PostMessageW(DAT_00c8a650,0x47b,0,(LPARAM)lParam);
      if (BVar2 != 0) goto LAB_005b60b5;
    }
    if (lParam != (undefined4 *)0x0) {
      piVar4 = lParam + 1;
      LOCK();
      *piVar4 = *piVar4 + 1;
      UNLOCK();
      LOCK();
      iVar1 = *piVar4;
      *piVar4 = *piVar4 + -1;
      UNLOCK();
      if (iVar1 == 1) {
        (**(code **)*lParam)(1);
      }
    }
    LOCK();
    *(undefined4 *)(*(int *)(in_ECX + 4) + 0xc) = 0;
    UNLOCK();
  }
LAB_005b60b5:
                    /* WARNING: Could not recover jumptable at 0x005b60c1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x13c));
  return;
}

