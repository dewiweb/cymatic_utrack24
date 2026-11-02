// rea decompile_all
// name: FUN_004ebf83
// address: 0x4ebf83
// body: available
// range: 0x4ebf83-0x4ec02f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

undefined4 FUN_004ebf83(undefined4 param_1)

{
  int iVar1;
  int unaff_EBX;
  undefined1 local_40 [36];
  undefined4 local_1c;
  int local_18;
  int local_14;
  uint local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x30;
  local_8 = 0x4ebf8f;
  local_1c = 0;
  FUN_00464c3f(local_40);
  local_8 = 1;
  FUN_004ec153();
  FUN_00464d31();
  local_18 = 0;
  if (0 < *(int *)(unaff_EBX + 0x104)) {
    do {
      iVar1 = *(int *)(*(int *)(unaff_EBX + 0xfc) + local_18 * 4);
      local_14 = 0;
      if (0 < *(int *)(iVar1 + 0x10)) {
        do {
          FUN_00465cf5();
          local_14 = local_14 + 1;
        } while (local_14 < *(int *)(iVar1 + 0x10));
      }
      local_18 = local_18 + 1;
    } while (local_18 < *(int *)(unaff_EBX + 0x104));
  }
  FUN_00464ee0();
  local_1c = 1;
  local_8 = local_8 & 0xffffff00;
  FUN_00464cd9(local_40);
  return param_1;
}

