// rea decompile_all
// name: FUN_004cce5e
// address: 0x4cce5e
// body: available
// range: 0x4cce5e-0x4ccf33 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

void FUN_004cce5e(void)

{
  undefined4 uVar1;
  float *in_ECX;
  undefined1 local_34 [16];
  undefined1 local_24 [16];
  float local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x24;
  local_8 = 0x4cce6a;
  local_14 = *in_ECX;
  uVar1 = FUN_00461644((double)local_14);
  local_8 = 0;
  FUN_004723a7(uVar1,0);
  local_8 = 0xffffffff;
  FUN_004615f7();
  FUN_004616ae();
  local_8 = 1;
  FUN_004723a7(local_24,0);
  local_8 = 0xffffffff;
  FUN_004615f7();
  FUN_004616ae();
  local_8 = 2;
  FUN_004723a7(local_34,0);
  FUN_004615f7();
  return;
}

