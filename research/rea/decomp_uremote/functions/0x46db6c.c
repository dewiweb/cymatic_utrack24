// rea decompile_all
// name: FUN_0046db6c
// address: 0x46db6c
// body: available
// range: 0x46db6c-0x46dbd7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

void FUN_0046db6c(void)

{
  undefined4 uVar1;
  int in_ECX;
  undefined4 *puStack_30;
  undefined4 *puStack_2c;
  undefined4 local_18;
  undefined1 *local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 8;
  local_8 = 0x46db78;
  local_18 = 0;
  if (*(int *)(in_ECX + 0x14) < 1) {
    puStack_30 = (undefined4 *)0x46dbd0;
    FUN_004652e4();
  }
  else {
    puStack_2c = &local_18;
    puStack_30 = (undefined4 *)0x46db8d;
    uVar1 = FUN_0046daa6();
    local_8 = 0;
    local_14 = (undefined1 *)&puStack_30;
    puStack_30 = puStack_2c;
    puStack_2c = (undefined4 *)uVar1;
    FUN_004652e4(in_ECX);
    FUN_00465c6b(local_14);
    FUN_00465c30();
    puStack_2c = (undefined4 *)0x46dbc6;
    FUN_004652d6();
  }
  return;
}

