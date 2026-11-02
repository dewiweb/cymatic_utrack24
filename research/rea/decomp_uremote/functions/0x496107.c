// rea decompile_all
// name: FUN_00496107
// address: 0x496107
// body: available
// range: 0x496107-0x49624a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x496119 to 0x491122 FUN_00491122 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00496107(int param_1)

{
  uint uVar1;
  uint in_ECX;
  int unaff_ESI;
  undefined1 *puVar2;
  undefined1 local_310 [2];
  undefined1 local_30e [766];
  int local_10;
  int local_c;
  undefined1 local_8;
  undefined1 local_7;
  undefined1 local_6;
  
  uVar1 = *(uint *)(unaff_ESI + 0x28);
  if (((uVar1 & 1) == 0) || ((uVar1 & 2) != 0)) {
LAB_00496117:
                    /* WARNING: Subroutine does not return */
    FUN_00491122();
  }
  if ((uVar1 & 4) != 0) {
    FUN_00495a5d();
LAB_00496132:
    FUN_004914ad();
    return;
  }
  *(uint *)(unaff_ESI + 0x28) = uVar1 | 2;
  if ((*(byte *)(unaff_ESI + 0x10b) & 2) == 0) {
    FUN_00495a5d();
    goto LAB_00496132;
  }
  if ((0x300 < in_ECX) || (in_ECX % 3 != 0)) {
    FUN_00495a5d();
    if (*(char *)(unaff_ESI + 0x10b) == '\x03') goto LAB_00496117;
    goto LAB_00496241;
  }
  local_10 = (int)in_ECX / 3;
  if (0 < local_10) {
    puVar2 = local_30e;
    local_c = local_10;
    do {
      FUN_00495a35(&local_8,3);
      puVar2[-2] = local_8;
      puVar2[-1] = local_7;
      *puVar2 = local_6;
      puVar2 = puVar2 + 3;
      local_c = local_c + -1;
    } while (local_c != 0);
  }
  FUN_00495a5d();
  FUN_0049912e(local_310,local_10);
  if (*(short *)(unaff_ESI + 0x104) == 0) {
    if (param_1 == 0) {
      return;
    }
    if ((*(byte *)(param_1 + 8) & 0x10) != 0) goto LAB_004961ea;
  }
  else {
LAB_004961ea:
    *(short *)(unaff_ESI + 0x104) = 0;
    if (param_1 != 0) {
      *(undefined2 *)(param_1 + 0x16) = 0;
    }
    FUN_004914ad();
  }
  if (param_1 == 0) {
    return;
  }
  if ((*(byte *)(param_1 + 8) & 0x40) != 0) {
    FUN_004914ad();
  }
  if ((*(byte *)(param_1 + 8) & 0x20) == 0) {
    return;
  }
LAB_00496241:
  FUN_004914ad();
  return;
}

