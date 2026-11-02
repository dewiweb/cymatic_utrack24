// rea decompile_all
// name: FUN_0043630d
// address: 0x43630d
// body: available
// range: 0x43630d-0x43642c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_0043630d(undefined4 param_1,int *param_2,int *param_3,undefined4 param_4,undefined4 param_5,
                undefined4 param_6)

{
  int in_EAX;
  int iVar1;
  uint unaff_EBX;
  int unaff_ESI;
  int local_10;
  undefined4 local_c;
  int local_8;
  
  local_c = 0;
  local_8 = (**(code **)(unaff_ESI + 0x20))(*(undefined4 *)(unaff_ESI + 0x28),0x120,4);
  if (local_8 == 0) {
    return -4;
  }
  local_10 = FUN_00435efb();
  if (local_10 == 0) {
    if (*param_2 != 0) {
      iVar1 = FUN_00435efb(in_EAX + unaff_EBX * 4,param_1,0,&DAT_0090d3d8,&DAT_0090d450,param_5,
                           param_6,&local_c,local_8);
      if (iVar1 == 0) {
        if ((*param_3 != 0) || (unaff_EBX < 0x102)) {
          (**(code **)(unaff_ESI + 0x24))(*(undefined4 *)(unaff_ESI + 0x28),local_8);
          return 0;
        }
      }
      else {
        if (iVar1 == -3) {
          *(char **)(unaff_ESI + 0x18) = "oversubscribed distance tree";
          goto LAB_004363f3;
        }
        if (iVar1 == -5) {
          *(char **)(unaff_ESI + 0x18) = "incomplete distance tree";
          iVar1 = -3;
          goto LAB_004363f3;
        }
        if (iVar1 == -4) goto LAB_004363f3;
      }
      *(char **)(unaff_ESI + 0x18) = "empty distance tree with lengths";
      iVar1 = -3;
LAB_004363f3:
      (**(code **)(unaff_ESI + 0x24))(*(undefined4 *)(unaff_ESI + 0x28),local_8);
      return iVar1;
    }
  }
  else {
    if (local_10 == -3) {
      *(char **)(unaff_ESI + 0x18) = "oversubscribed literal/length tree";
      goto LAB_0043641c;
    }
    if (local_10 == -4) goto LAB_0043641c;
  }
  *(char **)(unaff_ESI + 0x18) = "incomplete literal/length tree";
  local_10 = -3;
LAB_0043641c:
  (**(code **)(unaff_ESI + 0x24))(*(undefined4 *)(unaff_ESI + 0x28),local_8);
  return local_10;
}

