// rea decompile_all
// name: FUN_004c3028
// address: 0x4c3028
// body: available
// range: 0x4c3028-0x4c30fa inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* WARNING: Removing unreachable block (ram,0x004c30eb) */

undefined1 * FUN_004c3028(undefined4 param_1)

{
  char cVar1;
  undefined1 *puVar2;
  int *piVar3;
  int iVar4;
  int *in_ECX;
  
  puVar2 = &LAB_005ded8b;
  if (in_ECX[3] != 0) {
    piVar3 = (int *)(**(code **)(*in_ECX + 0x50))();
    if (piVar3 != (int *)0x0) {
      if ((char)param_1 == '\0') {
        iVar4 = (**(code **)(*piVar3 + 8))();
      }
      else {
        iVar4 = (**(code **)(*piVar3 + 4))();
      }
      if (piVar3 != (int *)0x0) {
        (**(code **)*piVar3)(1);
      }
      if (iVar4 != 0) {
        cVar1 = FUN_004c14d9();
        if (cVar1 != '\0') {
          FUN_004f5fb6();
          FUN_004c2140();
          cVar1 = FUN_004f5fce(0);
          if ((cVar1 != '\0') || (cVar1 = FUN_004c14d9(), cVar1 != '\0')) {
            puVar2 = (undefined1 *)FUN_00474d0f();
            return puVar2;
          }
          FUN_00474d0f();
        }
        puVar2 = (undefined1 *)FUN_004c2f1f(1,1);
        return puVar2;
      }
    }
    puVar2 = (undefined1 *)FUN_004c3028(param_1);
  }
  return puVar2;
}

