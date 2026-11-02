// rea decompile_all
// name: FUN_0047588a
// address: 0x47588a
// body: available
// range: 0x47588a-0x475902 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

undefined1 * FUN_0047588a(void)

{
  undefined1 *puVar1;
  int *piVar2;
  int in_ECX;
  int *in_EDX;
  undefined1 local_3c [24];
  int local_24;
  int local_20;
  int *local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x2c;
  puVar1 = &LAB_005d8535;
  local_8 = 0x475896;
  if ((int *)*in_EDX != (int *)0x0) {
    (**(code **)(*(int *)*in_EDX + 0x2c))(&local_24);
    piVar2 = (int *)FUN_0047e3e4();
    local_8 = 0;
    local_14 = piVar2;
    (**(code **)(*piVar2 + 0x48))(*(undefined4 *)(in_ECX + 0x50));
    FUN_00477188((float)local_24,(float)local_20);
    (**(code **)(*piVar2 + 0x60))(in_ECX + 0x54,local_3c);
    local_8 = 0xffffffff;
    puVar1 = (undefined1 *)(**(code **)*piVar2)(1);
  }
  return puVar1;
}

