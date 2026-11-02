// rea decompile_all
// name: FUN_004ec030
// address: 0x4ec030
// body: available
// range: 0x4ec030-0x4ec132 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

undefined4 FUN_004ec030(undefined4 param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int local_60;
  undefined *local_5c;
  undefined1 local_48 [36];
  undefined1 *local_24;
  undefined4 local_20;
  undefined4 local_1c;
  int local_18;
  int local_14;
  uint local_8;
  undefined4 uStack_4;
  
  piVar1 = param_2;
  uStack_4 = 0x38;
  local_8 = 0x4ec03c;
  local_20 = 0;
  if (*param_2 == param_2[1]) {
    local_5c = &DAT_0095d718;
    local_60 = 0x4ec05c;
    FUN_004652e4();
  }
  else {
    local_5c = local_48;
    local_60 = 0x4ec06f;
    FUN_00464c3f();
    local_8 = 1;
    local_5c = (undefined *)0x4ec083;
    local_5c = (undefined *)FUN_004ec153();
    local_60 = 0x4ec08b;
    FUN_00440367();
    local_5c = (undefined *)0x4ec096;
    FUN_00464d31();
    param_2 = (int *)0x0;
    local_14 = 0;
    iVar3 = local_18;
    if (0 < *(int *)(local_18 + 0x94)) {
      do {
        local_1c = *(undefined4 *)(*(int *)(iVar3 + 0x8c) + local_14 * 4);
        local_5c = (undefined *)0x4ec0bd;
        iVar2 = FUN_004e8382();
        local_5c = (undefined *)*piVar1;
        if ((int)local_5c < iVar2 + (int)param_2) {
          if (piVar1[1] <= (int)param_2) break;
          local_24 = (undefined1 *)&local_60;
          local_60 = (int)local_5c - (int)param_2;
          local_5c = (undefined *)FUN_00439b5a(local_60);
          FUN_004e828b(local_1c,local_48);
          iVar3 = local_18;
        }
        local_14 = local_14 + 1;
        param_2 = (int *)(iVar2 + (int)param_2);
      } while (local_14 < *(int *)(iVar3 + 0x94));
    }
    local_5c = (undefined *)0x4ec114;
    FUN_00464ee0();
    local_5c = local_48;
    local_20 = 1;
    local_8 = local_8 & 0xffffff00;
    local_60 = 0x4ec128;
    FUN_00464cd9();
  }
  return param_1;
}

