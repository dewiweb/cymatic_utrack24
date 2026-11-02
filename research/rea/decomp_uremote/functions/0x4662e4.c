// rea decompile_all
// name: FUN_004662e4
// address: 0x4662e4
// body: available
// range: 0x4662e4-0x46635f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

undefined4 FUN_004662e4(undefined4 param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  undefined4 *in_ECX;
  undefined1 *local_3c [5];
  undefined1 local_28 [20];
  undefined1 *local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x18;
  local_8 = 0x4662f0;
  local_14 = (undefined1 *)local_3c;
  local_3c[0] = (undefined1 *)*in_ECX;
  FUN_004661c6(local_28);
  local_8 = 0;
  do {
    local_3c[0] = (undefined1 *)0x466313;
    puVar1 = (undefined1 *)FUN_0044eba8();
    local_3c[0] = puVar1;
    local_3c[0] = (undefined1 *)FUN_00470235(param_2);
    if (-1 < (int)local_3c[0]) {
      puVar1 = (undefined1 *)FUN_0046085c();
    }
    local_3c[0] = puVar1;
    FUN_00466207();
  } while (puVar1 != (undefined1 *)0x0);
  local_3c[0] = local_28;
  FUN_004652e4();
  local_3c[0] = (undefined1 *)0x466355;
  FUN_004652d6();
  return param_1;
}

