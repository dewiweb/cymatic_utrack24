// rea decompile_all
// name: FUN_0047eb9f
// address: 0x47eb9f
// body: available
// range: 0x47eb9f-0x47ec26 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

void FUN_0047eb9f(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int in_ECX;
  
  uVar3 = FUN_00467ee3();
  EnterCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x28));
  iVar1 = *(int *)(in_ECX + 0x24);
  while (iVar1 = iVar1 + -1, -1 < iVar1) {
    iVar2 = *(int *)(*(int *)(in_ECX + 0x1c) + iVar1 * 4);
    iVar4 = FUN_0047e358();
    if (iVar4 < 2) {
      iVar2 = *(int *)(iVar2 + 0x10);
      if (((uint)(*(int *)(in_ECX + 0x18) + iVar2) < uVar3) || (uVar3 < iVar2 - 1000U)) {
        FUN_004a66d3();
      }
    }
    else {
      *(uint *)(iVar2 + 0x10) = uVar3;
    }
  }
  if (*(int *)(in_ECX + 0x24) == 0) {
    FUN_00474839();
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x28));
  return;
}

