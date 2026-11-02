// rea decompile_all
// name: FUN_004e2372
// address: 0x4e2372
// body: available
// range: 0x4e2372-0x4e23d0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

void FUN_004e2372(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 extraout_EDX;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined1 *local_18;
  int local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 8;
  local_8 = 0x4e237e;
  uStack_2c = 0x20;
  uStack_30 = 0x4e2385;
  local_14 = FUN_005af82d();
  uVar1 = uStack_2c;
  local_8 = 0;
  if (local_14 != 0) {
    uStack_2c = 0;
    uStack_30 = 0;
    uStack_34 = 0;
    local_18 = (undefined1 *)&uStack_38;
    uStack_38 = uVar1;
    FUN_004d076d();
    FUN_004e005a(local_14,param_2,&DAT_0095d718,1,extraout_EDX);
  }
  uStack_2c = 0x4e23c9;
  FUN_004481ad();
  return;
}

