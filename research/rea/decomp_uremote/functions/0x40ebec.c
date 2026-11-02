// rea decompile_all
// name: FUN_0040ebec
// address: 0x40ebec
// body: available
// range: 0x40ebec-0x40ecf6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0040ebec(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  undefined4 *in_EAX;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int local_7c [9];
  int local_58 [9];
  undefined4 local_34;
  int local_28;
  undefined4 local_14;
  undefined4 local_10;
  int local_c;
  char local_6;
  char local_5;
  
  local_10 = 0;
  local_14 = *in_EAX;
  iVar2 = 2;
  local_5 = '\0';
  FUN_00410bb4();
  local_c = 0;
  do {
    local_6 = FUN_00410c35();
    if (((local_6 == '\0') || (local_5 == '\0')) && (local_7c[local_c] == 0)) {
      local_28 = local_58[local_c];
      local_34 = 4;
      if (local_28 == 0) {
        local_28 = *(int *)(param_4 + 0xc);
      }
      iVar2 = FUN_0040d9e0(&local_10);
      if ((local_6 != '\0') && (iVar2 == 0x51)) {
        local_5 = '\x01';
      }
      if (iVar2 == 0) {
        iVar2 = FUN_0040ea39(param_2,param_3);
        FUN_0040da85(0);
        if (iVar2 == 0) break;
        if (local_6 != '\0') {
          local_5 = '\x01';
        }
      }
    }
    local_c = local_c + 1;
  } while (local_c < 9);
  iVar3 = 0;
  do {
    iVar1 = local_58[iVar3];
    if (iVar1 != 0) {
      FUN_00411a5c(iVar1);
      local_58[iVar3] = 0;
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 < 9);
  uVar4 = 0;
  if (iVar2 != 0) {
    uVar4 = 2;
  }
  return uVar4;
}

