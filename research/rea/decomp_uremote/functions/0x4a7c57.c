// rea decompile_all
// name: FUN_004a7c57
// address: 0x4a7c57
// body: available
// range: 0x4a7c57-0x4a7c79 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004a7c57(void)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  int *in_EAX;
  int *unaff_ESI;
  
  iVar2 = *in_EAX;
  if (*unaff_ESI != iVar2) {
    if (iVar2 != 0) {
      *(int *)(iVar2 + 4) = *(int *)(iVar2 + 4) + 1;
    }
    puVar3 = (undefined4 *)*unaff_ESI;
    *unaff_ESI = iVar2;
    if (puVar3 != (undefined4 *)0x0) {
      piVar1 = puVar3 + 1;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        (**(code **)*puVar3)(1);
      }
    }
  }
  return;
}

