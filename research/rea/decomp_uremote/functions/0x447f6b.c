// rea decompile_all
// name: FUN_00447f6b
// address: 0x447f6b
// body: available
// range: 0x447f6b-0x448042 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

undefined4 *
FUN_00447f6b(undefined4 *param_1,undefined4 param_2,int param_3,int param_4,undefined4 param_5,
            undefined4 param_6,int param_7,int param_8)

{
  int iVar1;
  
  *param_1 = param_2;
  FUN_004652e4(param_3);
  param_1[2] = param_4;
  param_1[3] = param_5;
  param_1[4] = param_6;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  FUN_004642ea();
  param_3 = 0;
  if (0 < param_7) {
    do {
      FUN_0043e86a(&param_3);
      param_3 = param_3 + 1;
    } while (param_3 < param_7);
  }
  if (0 < param_8) {
    param_4 = (param_4 + -0x14) / 10;
    param_7 = param_8;
    do {
      iVar1 = FUN_004643d2(param_4);
      param_3 = (iVar1 + 1) * 10;
      FUN_0043e86a(&param_3);
      param_7 = param_7 + -1;
    } while (param_7 != 0);
  }
  FUN_004482e9((int)&param_2 + 3);
  return param_1;
}

