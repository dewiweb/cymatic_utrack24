// rea decompile_all
// name: FUN_00473856
// address: 0x473856
// body: available
// range: 0x473856-0x4738bc inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

undefined4 FUN_00473856(void)

{
  char cVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined1 local_11 [9];
  uint local_8;
  undefined4 uStack_4;
  
  uStack_4 = 8;
  local_8 = 0x473862;
  FUN_00473ff0(local_11);
  local_8 = 0;
  piVar2 = (int *)(*DAT_0095d674)();
  local_8 = CONCAT31(local_8._1_3_,1);
  cVar1 = (**(code **)(*piVar2 + 0x2c))();
  if (cVar1 != '\0') {
    FUN_00473bb8();
    thunk_FUN_00473c86();
  }
  uVar3 = FUN_0047392f();
  local_8 = local_8 & 0xffffff00;
  (**(code **)*piVar2)(1);
  local_8 = 0xffffffff;
  FUN_0047400b();
  return uVar3;
}

