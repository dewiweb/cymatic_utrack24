// rea decompile_all
// name: FUN_004174ff
// address: 0x4174ff
// body: available
// range: 0x4174ff-0x41767a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_004174ff(int param_1,int param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  byte *pbVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int *piVar7;
  int local_20;
  int local_1c;
  int local_18;
  int local_10;
  
  local_20 = FUN_0041106d();
  if ((local_20 == 0) && (local_20 = FUN_004111b5(), local_20 == 0)) {
    pbVar1 = *(byte **)(param_2 + 0x20);
    if ((param_5 == 0) || ((*pbVar1 & 0x80) == 0)) {
      local_20 = FUN_00416e02(param_1,pbVar1,pbVar1 + param_5);
      FUN_00411249();
    }
    else {
      iVar2 = *(int *)(param_1 + 0x1c);
      local_1c = *(int *)(param_1 + 0x10);
      local_20 = FUN_0041723a(param_1,pbVar1,pbVar1 + param_5);
      FUN_00411249();
      if (local_20 == 0) {
        local_18 = 0;
        iVar3 = *(int *)(param_1 + 0x10) - local_1c;
        if (0 < iVar3) {
          local_1c = local_1c * 0x18;
          do {
            iVar4 = *(int *)(param_1 + 0x18) + local_1c;
            iVar6 = (int)*(short *)(iVar2 + 0x16);
            iVar4 = FUN_004174ff(param_1,param_2,param_3,*(undefined4 *)(iVar4 + 0x10),
                                 *(undefined4 *)(iVar4 + 0x14));
            if (iVar4 != 0) {
              return iVar4;
            }
            piVar7 = (int *)(*(int *)(param_1 + 0x18) + local_1c);
            local_10 = *(short *)(iVar2 + 0x16) - iVar6;
            if ((*piVar7 == 0x10000) && (piVar7[1] == 0x10000)) {
              piVar5 = (int *)(*(int *)(iVar2 + 0x18) + iVar6 * 8);
              if (0 < local_10) {
                do {
                  *piVar5 = *piVar5 + piVar7[2];
                  piVar5[1] = piVar5[1] + piVar7[3];
                  piVar5 = piVar5 + 2;
                  local_10 = local_10 + -1;
                } while (local_10 != 0);
              }
            }
            else {
              piVar5 = (int *)(*(int *)(iVar2 + 0x18) + iVar6 * 8);
              if (0 < local_10) {
                do {
                  iVar4 = thunk_FUN_00401000(*piVar5,*piVar7);
                  *piVar5 = iVar4 + piVar7[2];
                  iVar4 = thunk_FUN_00401000(piVar5[1],piVar7[1]);
                  piVar5[1] = iVar4 + piVar7[3];
                  piVar5 = piVar5 + 2;
                  local_10 = local_10 + -1;
                } while (local_10 != 0);
              }
            }
            local_18 = local_18 + 1;
            local_1c = local_1c + 0x18;
            local_20 = 0;
          } while (local_18 < iVar3);
        }
      }
    }
  }
  return local_20;
}

