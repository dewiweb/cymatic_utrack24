// rea decompile_all
// name: FUN_004ee588
// address: 0x4ee588
// body: available
// range: 0x4ee588-0x4ee61b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

undefined1 * FUN_004ee588(void)

{
  undefined4 *puVar1;
  undefined1 *puVar2;
  int iVar3;
  int in_ECX;
  int *unaff_ESI;
  
  puVar2 = &LAB_005e3152;
  if (unaff_ESI[0x41] != in_ECX) {
    puVar1 = (undefined4 *)unaff_ESI[0x40];
    if ((puVar1 != (undefined4 *)0x0) && (unaff_ESI[0x40] = 0, puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    unaff_ESI[0x41] = in_ECX;
    iVar3 = thunk_FUN_004c1d58();
    iVar3 = (**(code **)(*(int *)(iVar3 + 0x20) + 0x24))();
    unaff_ESI[0x39] = iVar3;
    if (unaff_ESI[0x41] != 0) {
      iVar3 = FUN_005af82d(0xb8);
      if (iVar3 != 0) {
        FUN_004df4d6(iVar3);
      }
      FUN_004ee61c();
    }
    puVar2 = (undefined1 *)(**(code **)(*unaff_ESI + 0x84))();
  }
  return puVar2;
}

