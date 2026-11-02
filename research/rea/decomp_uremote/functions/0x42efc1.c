// rea decompile_all
// name: FUN_0042efc1
// address: 0x42efc1
// body: available
// range: 0x42efc1-0x42f0c0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0042efc1(int param_1,uint param_2,int param_3)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  byte *pbVar4;
  uint uVar5;
  int local_60 [16];
  uint local_20;
  int local_1c;
  undefined4 local_18;
  int local_14;
  uint local_10;
  uint local_c;
  uint local_8;
  
  iVar3 = *(int *)(param_1 + 0x214);
  if (iVar3 != 0) {
    local_20 = *(uint *)(iVar3 + 4);
    if (local_20 == param_2) {
      local_10 = 0;
      if (local_20 != 0) {
        pbVar4 = (byte *)(iVar3 + 0x58);
        local_14 = param_3 - (int)local_60;
        do {
          local_c = 0xffffffff;
          local_18 = 0xffffffff;
          local_8 = 0;
          piVar1 = *(int **)(pbVar4 + 8);
          local_1c = *(int *)((int)local_60 + local_14 + local_10 * 4);
          uVar2 = (uint)*pbVar4;
          if (uVar2 == 0) {
LAB_0042f061:
            iVar3 = *piVar1;
          }
          else {
            do {
              iVar3 = *(int *)(*(int *)(pbVar4 + 4) + local_8 * 4);
              if (local_1c == iVar3) {
                iVar3 = piVar1[local_8];
                goto LAB_0042f093;
              }
              uVar5 = local_8;
              if (local_1c < iVar3) goto LAB_0042f05a;
              local_c = local_8;
              uVar5 = local_8 + 1;
              local_8 = uVar5;
            } while (uVar5 < uVar2);
            uVar5 = 0xffffffff;
LAB_0042f05a:
            if ((int)local_c < 0) goto LAB_0042f061;
            if ((int)uVar5 < 0) {
              iVar3 = piVar1[uVar2 - 1];
            }
            else {
              iVar3 = FUN_0040d230(piVar1[uVar5] - piVar1[local_c]);
            }
          }
LAB_0042f093:
          local_60[local_10] = iVar3;
          local_10 = local_10 + 1;
          pbVar4 = pbVar4 + 0xc;
        } while (local_10 < local_20);
      }
      FUN_0042ef33(param_1,param_2,local_60);
    }
  }
  return;
}

