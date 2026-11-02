// rea decompile_all
// name: FUN_004ebbde
// address: 0x4ebbde
// body: available
// range: 0x4ebbde-0x4ebd48 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

void FUN_004ebbde(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int unaff_EBX;
  int iVar3;
  int local_1c;
  int local_14;
  
  iVar3 = 0;
  local_1c = 0;
  local_14 = 0;
  if (0 < *(int *)(param_1 + 0x104)) {
    do {
      local_1c = FUN_004e8382();
      local_1c = local_1c + iVar3;
      if (param_2 == iVar3) {
        iVar3 = *(int *)(unaff_EBX + 8);
        while (iVar3 = iVar3 + -1, -1 < iVar3) {
          iVar1 = FUN_005af82d(0x14);
          if (iVar1 == 0) {
            uVar2 = 0;
          }
          else {
            uVar2 = FUN_004e7f52(iVar1);
          }
          FUN_004f66a2(uVar2);
        }
        break;
      }
      if ((iVar3 < param_2) && (param_2 < local_1c)) {
        FUN_004ec4bd(param_2 - iVar3);
        iVar3 = *(int *)(unaff_EBX + 8);
        while (iVar3 = iVar3 + -1, -1 < iVar3) {
          iVar1 = FUN_005af82d(0x14);
          if (iVar1 == 0) {
            uVar2 = 0;
          }
          else {
            uVar2 = FUN_004e7f52(iVar1);
          }
          FUN_004f66a2(uVar2);
        }
        break;
      }
      local_14 = local_14 + 1;
      iVar3 = local_1c;
    } while (local_14 < *(int *)(param_1 + 0x104));
  }
  if ((local_1c == param_2) && (param_2 = 0, 0 < *(int *)(unaff_EBX + 8))) {
    do {
      iVar3 = FUN_005af82d(0x14);
      if (iVar3 != 0) {
        FUN_004e7f52(iVar3);
      }
      FUN_004f7022();
      param_2 = param_2 + 1;
    } while (param_2 < *(int *)(unaff_EBX + 8));
  }
  FUN_004ec4ea(param_1);
  *(undefined4 *)(param_1 + 0xf4) = 0xffffffff;
  *(byte *)(param_1 + 0x95) = *(byte *)(param_1 + 0x95) | 8;
  return;
}

