// rea decompile_all
// name: FUN_0047d23a
// address: 0x47d23a
// body: available
// range: 0x47d23a-0x47d2ad inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

void FUN_0047d23a(void)

{
  char cVar1;
  undefined4 extraout_EDX;
  undefined4 *unaff_EDI;
  undefined4 uStack_60;
  undefined1 *puStack_5c;
  undefined1 local_24 [16];
  undefined1 *local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x38;
  local_8 = 0x47d246;
  puStack_5c = (undefined1 *)0x47d24e;
  cVar1 = FUN_004761fc();
  if (cVar1 == '\0') {
    puStack_5c = local_24;
    uStack_60 = 0x47d25d;
    (**(code **)(*(int *)*unaff_EDI + 0x2c))();
    uStack_60 = 0x47d264;
    (**(code **)(*(int *)*unaff_EDI + 0x34))();
    local_14 = (undefined1 *)&uStack_60;
    FUN_004d076d();
    FUN_00476c68();
    local_8 = 0;
    uStack_60 = extraout_EDX;
    (**(code **)(*(int *)*unaff_EDI + 0x44))();
    local_8 = 0xffffffff;
    FUN_00476da0();
    (**(code **)(*(int *)*unaff_EDI + 0x54))(local_24,0);
    (**(code **)(*(int *)*unaff_EDI + 0x38))();
  }
  return;
}

