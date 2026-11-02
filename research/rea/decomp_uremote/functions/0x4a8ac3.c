// rea decompile_all
// name: FUN_004a8ac3
// address: 0x4a8ac3
// body: available
// range: 0x4a8ac3-0x4a8b76 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_004a8ac3(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int in_EAX;
  int *piVar4;
  int iVar5;
  int local_c;
  int local_8;
  
  piVar4 = (int *)(in_EAX + 0x18);
  piVar1 = (int *)(in_EAX + 0x14);
  if (*(int *)(in_EAX + 0xc) * 0x10 < *piVar4 + *piVar1) {
    if (*piVar1 < *piVar4 * 2) {
      FUN_004a7d98(0x20);
    }
    LOCK();
    *piVar1 = 0;
    UNLOCK();
    LOCK();
    *piVar4 = 0;
    UNLOCK();
  }
  local_c = 0;
  iVar5 = *(int *)(in_EAX + 0xc) + -2;
  local_8 = 0x7fffffff;
  if (-1 < iVar5) {
    do {
      piVar4 = (int *)FUN_00500e65();
      iVar3 = *piVar4;
      FUN_00474d0f();
      if (*(int *)(iVar3 + 0x14) <= local_8) {
        piVar4 = (int *)(iVar3 + 4);
        LOCK();
        iVar2 = *piVar4;
        *piVar4 = *piVar4;
        UNLOCK();
        if (iVar2 == 1) {
          local_8 = *(int *)(iVar3 + 0x14);
          local_c = iVar3;
        }
      }
      iVar5 = iVar5 + -1;
    } while (-1 < iVar5);
    if (local_c != 0) {
      return local_c;
    }
  }
  FUN_004a7d98(0x20);
  piVar4 = (int *)FUN_004a8e28();
  iVar5 = *piVar4;
  FUN_00474d0f();
  return iVar5;
}

