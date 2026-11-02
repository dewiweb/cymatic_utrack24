// rea decompile_all
// name: FUN_00458a85
// address: 0x458a85
// body: available
// range: 0x458a85-0x458ba6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

void FUN_00458a85(undefined1 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int unaff_ESI;
  undefined1 *apuStack_30 [5];
  undefined1 *local_1c;
  int local_18;
  undefined1 local_14 [12];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xc;
  local_8 = 0x458a91;
  if ((int)param_1 < 0) {
    param_1 = (undefined1 *)0x0;
  }
  if ((int)*(undefined1 **)(unaff_ESI + 0xd4) < (int)param_1) {
    param_1 = *(undefined1 **)(unaff_ESI + 0xd4);
  }
  apuStack_30[0] = (undefined1 *)0x458ab4;
  FUN_004652cd();
  local_8 = 0;
  if (*(int *)(unaff_ESI + 0x3f8) == 2) {
    apuStack_30[0] = (undefined1 *)0x458b5d;
    FUN_00456f0c();
    iVar2 = *(int *)(unaff_ESI + 0xc0);
  }
  else if (*(int *)(unaff_ESI + 0x3f8) == 3) {
    apuStack_30[0] = (undefined1 *)0x458b44;
    FUN_00456f22();
    iVar2 = *(int *)(unaff_ESI + 0xc4);
  }
  else {
    *(undefined1 **)(unaff_ESI + 0xb4) = param_1;
    apuStack_30[0] = (undefined1 *)0x458adc;
    FUN_00456f38();
    local_18 = *(int *)(unaff_ESI + 0xd4);
    if (local_18 == 0) {
      apuStack_30[0] = (undefined1 *)0x458af4;
      uVar1 = FUN_005b3fb0();
    }
    else {
      apuStack_30[0] = (undefined1 *)0x458b0d;
      uVar1 = FUN_005b3fb0();
    }
    *(undefined4 *)(unaff_ESI + 0xb0) = uVar1;
    apuStack_30[0] = param_1;
    FUN_0044a500(&local_1c);
    apuStack_30[0] = (undefined1 *)(unaff_ESI + 0xbc);
    FUN_00465317();
    apuStack_30[0] = (undefined1 *)0x458b35;
    FUN_004652d6();
    iVar2 = *(int *)(unaff_ESI + 0xb0);
  }
  apuStack_30[0] = local_14;
  FUN_00465317();
  local_1c = (undefined1 *)apuStack_30;
  FUN_004652e4(local_14);
  FUN_00457ae9(unaff_ESI,(float)iVar2);
  apuStack_30[0] = (undefined1 *)0x458b9f;
  FUN_004652d6();
  return;
}

