// rea decompile_all
// name: FUN_004c554d
// address: 0x4c554d
// body: available
// range: 0x4c554d-0x4c560d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

void FUN_004c554d(void)

{
  void **ppvVar1;
  void *pvVar2;
  char cVar3;
  int iVar4;
  int *piVar5;
  void **unaff_EBX;
  void *local_24;
  void *local_20;
  void *local_1c;
  int local_18;
  int local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x14;
  local_24 = (void *)0x0;
  local_20 = (void *)0x0;
  local_1c = (void *)0x0;
  local_8 = 0;
  if (&local_24 != unaff_EBX) {
    local_24 = *unaff_EBX;
    *unaff_EBX = (void *)0x0;
  }
  ppvVar1 = unaff_EBX + 1;
  if (&local_20 != ppvVar1) {
    local_20 = *ppvVar1;
    *ppvVar1 = (void *)0x0;
  }
  ppvVar1 = unaff_EBX + 2;
  if (&local_1c != ppvVar1) {
    local_1c = *ppvVar1;
    *ppvVar1 = (void *)0x0;
  }
  pvVar2 = local_1c;
  FUN_004c4e62();
  FUN_004c5537(unaff_EBX);
  if (pvVar2 == *ppvVar1) {
    local_18 = (int)pvVar2 + -1;
    if (-1 < local_18) {
      local_14 = local_18 * 0x38;
      do {
        cVar3 = FUN_004c54fc();
        if (cVar3 == '\0') goto LAB_004c55df;
        local_18 = local_18 + -1;
        local_14 = local_14 + -0x38;
      } while (-1 < local_18);
    }
  }
  else {
LAB_004c55df:
    iVar4 = FUN_004ed4d9();
    while (iVar4 = iVar4 + -1, -1 < iVar4) {
      piVar5 = (int *)FUN_004ed4e7();
      if (piVar5 != (int *)0x0) {
        (**(code **)(*piVar5 + 0x50))();
      }
    }
  }
  local_8 = 0xffffffff;
  _free(local_24);
  return;
}

