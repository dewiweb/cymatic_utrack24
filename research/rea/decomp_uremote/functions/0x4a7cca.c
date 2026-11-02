// rea decompile_all
// name: FUN_004a7cca
// address: 0x4a7cca
// body: available
// range: 0x4a7cca-0x4a7d97 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

int * FUN_004a7cca(int *param_1,undefined4 param_2,int param_3)

{
  LPCRITICAL_SECTION lpCriticalSection;
  char cVar1;
  int *piVar2;
  int in_ECX;
  int iVar3;
  undefined4 local_14;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(in_ECX + 0x1c);
  EnterCriticalSection(lpCriticalSection);
  local_14 = 0;
  if (0 < *(int *)(in_ECX + 0xc)) {
    do {
      piVar2 = (int *)FUN_00500e65();
      iVar3 = *piVar2;
      FUN_00474d0f();
      if (*(int *)(iVar3 + 0x10) == param_3) {
        cVar1 = FUN_0049f5f6();
        if (cVar1 != '\0') goto LAB_004a7d30;
      }
      local_14 = local_14 + 1;
    } while (local_14 < *(int *)(in_ECX + 0xc));
  }
  iVar3 = 0;
LAB_004a7d30:
  if (iVar3 == 0) {
    LOCK();
    *(int *)(in_ECX + 0x18) = *(int *)(in_ECX + 0x18) + 1;
    UNLOCK();
    iVar3 = FUN_004a8ac3();
    FUN_004a8d9a(param_3);
    *param_1 = iVar3;
    if (iVar3 != 0) {
      LOCK();
      *(int *)(iVar3 + 4) = *(int *)(iVar3 + 4) + 1;
      UNLOCK();
    }
    LeaveCriticalSection(lpCriticalSection);
  }
  else {
    LOCK();
    *(int *)(in_ECX + 0x14) = *(int *)(in_ECX + 0x14) + 1;
    UNLOCK();
    *param_1 = iVar3;
    LOCK();
    *(int *)(iVar3 + 4) = *(int *)(iVar3 + 4) + 1;
    UNLOCK();
    LeaveCriticalSection(lpCriticalSection);
  }
  return param_1;
}

