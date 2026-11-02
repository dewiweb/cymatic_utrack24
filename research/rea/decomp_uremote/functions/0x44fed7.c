// rea decompile_all
// name: FUN_0044fed7
// address: 0x44fed7
// body: available
// range: 0x44fed7-0x44ff67 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

void FUN_0044fed7(int param_1,undefined4 param_2)

{
  char cVar1;
  undefined4 local_28 [5];
  undefined1 *local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 4;
  local_8 = 0x44fee3;
  local_28[0] = param_2;
  FUN_0045bd7d();
  local_28[0] = *(undefined4 *)(param_1 + 0x7c);
  FUN_0045d6af();
  local_8 = 0;
  local_14 = (undefined1 *)local_28;
  local_28[0] = 0x21;
  FUN_0043f850();
  local_8 = 0xffffffff;
  local_28[0] = 0x44ff25;
  FUN_004652d6();
  local_28[0] = 0;
  (**(code **)(*(int *)(param_1 + 0x448) + 0x28))();
  (**(code **)(*(int *)(param_1 + 0x74) + 4))();
  (**(code **)(*(int *)(param_1 + 0x1f8) + 4))();
  cVar1 = FUN_0045072f();
  if (cVar1 == '\0') {
    FUN_0044fcbf();
  }
  return;
}

