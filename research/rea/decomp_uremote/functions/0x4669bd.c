// rea decompile_all
// name: FUN_004669bd
// address: 0x4669bd
// body: available
// range: 0x4669bd-0x466af7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

undefined4 FUN_004669bd(undefined4 param_1)

{
  char cVar1;
  int in_ECX;
  undefined4 extraout_ECX;
  char *in_EDX;
  int iVar2;
  int iVar3;
  char *local_40;
  char *local_3c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  int local_1c;
  undefined4 local_18;
  undefined1 *local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x18;
  local_8 = 0x4669c9;
  local_14 = (undefined1 *)0x0;
  if ((in_ECX < 1) || (in_EDX == (char *)0x0)) {
    local_3c = (char *)0x466af0;
    FUN_004652cd();
    param_1 = extraout_ECX;
  }
  else if (in_ECX == 1) {
    local_3c = (char *)0x4669f2;
    FUN_00465544();
  }
  else {
    cVar1 = *in_EDX;
    if (((cVar1 == -2) && (in_EDX[1] == -1)) || ((cVar1 == -1 && (in_EDX[1] == -2)))) {
      iVar3 = in_ECX / 2 + -1;
      local_3c = (char *)0x466a5a;
      FUN_004652cd();
      local_8 = 0;
      local_24 = 0;
      local_20 = 0;
      local_18 = 0;
      local_3c = (char *)0x466a72;
      local_1c = iVar3;
      FUN_00465353();
      local_20 = local_28;
      local_8 = 1;
      if ((*in_EDX == -2) && (in_EDX[1] == -1)) {
        iVar2 = 0;
        if (0 < iVar3) {
          do {
            local_3c = (char *)(uint)(ushort)(*(ushort *)(in_EDX + iVar2 * 2 + 2) << 8 |
                                             *(ushort *)(in_EDX + iVar2 * 2 + 2) >> 8);
            local_40 = (char *)0x466aa5;
            FUN_00466207();
            iVar2 = iVar2 + 1;
          } while (iVar2 < iVar3);
        }
      }
      else {
        iVar2 = 0;
        if (0 < iVar3) {
          do {
            local_3c = (char *)(uint)*(ushort *)(in_EDX + iVar2 * 2 + 2);
            local_40 = (char *)0x466ac0;
            FUN_00466207();
            iVar2 = iVar2 + 1;
          } while (iVar2 < iVar3);
        }
      }
      local_3c = (char *)0x0;
      local_40 = (char *)0x466acf;
      FUN_00466207();
      local_3c = (char *)&local_28;
      local_40 = (char *)0x466adb;
      FUN_004652e4();
      local_3c = (char *)0x466ae3;
      FUN_004652d6();
    }
    else {
      local_40 = in_EDX;
      if ((((2 < in_ECX) && (cVar1 == -0x11)) && (in_EDX[1] == -0x45)) && (in_EDX[2] == -0x41)) {
        local_40 = in_EDX + 3;
      }
      local_3c = in_EDX + in_ECX;
      local_14 = (undefined1 *)&local_40;
      FUN_004654d6();
    }
  }
  return param_1;
}

