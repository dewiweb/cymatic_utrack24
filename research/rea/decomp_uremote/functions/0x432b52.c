// rea decompile_all
// name: FUN_00432b52
// address: 0x432b52
// body: available
// range: 0x432b52-0x432e54 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00432b52(int param_1)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  uint *local_30;
  int local_24;
  uint *local_20;
  int local_1c;
  uint local_14;
  int *local_c;
  int local_8;
  
  iVar10 = *(int *)(param_1 + 0x88);
  local_14 = 0;
  local_c = (int *)0x0;
  local_20 = (uint *)FUN_00411976(8,0,&local_8);
  *(uint **)(param_1 + 0x13c) = local_20;
  if ((local_8 == 0) && (local_24 = 0, 0 < *(int *)(param_1 + 300))) {
    local_30 = local_20 + 1;
    local_1c = 0;
    do {
      iVar7 = *(int *)(param_1 + 0x130) + local_1c;
      uVar3 = *(uint *)(iVar7 + 0xf0);
      iVar8 = *(int *)(iVar7 + 4);
      if (uVar3 == 0xffffffff) {
LAB_00432dbb:
        local_8 = 0xa0;
LAB_00432dc7:
        iVar10 = 0;
        if (*(int *)(param_1 + 0x13c) != 0) {
          if (0 < *(int *)(param_1 + 300)) {
            do {
              iVar8 = iVar10 * 8;
              puVar4 = *(undefined4 **)(iVar8 + 4 + *(int *)(param_1 + 0x13c));
              if (puVar4 != (undefined4 *)0x0) {
                FUN_00411a5c(*puVar4);
                **(undefined4 **)(iVar8 + 4 + *(int *)(param_1 + 0x13c)) = 0;
              }
              FUN_00411a5c(*(undefined4 *)(iVar8 + 4 + *(int *)(param_1 + 0x13c)));
              *(undefined4 *)(iVar8 + 4 + *(int *)(param_1 + 0x13c)) = 0;
              iVar10 = iVar10 + 1;
            } while (iVar10 < *(int *)(param_1 + 300));
          }
          FUN_00411a5c(*(undefined4 *)(param_1 + 0x13c));
          *(undefined4 *)(param_1 + 0x13c) = 0;
        }
        break;
      }
      if (local_14 < uVar3 + 1) {
        uVar9 = uVar3 + 4 & 0xfffffffc;
        if (uVar9 <= local_14) goto LAB_00432dbb;
        local_c = (int *)FUN_00411976(4,local_c,&local_8);
        local_14 = uVar9;
        if (local_8 == 0) goto LAB_00432c2c;
        goto LAB_00432dc7;
      }
LAB_00432c2c:
      local_8 = FUN_0041106d();
      if ((local_8 != 0) || (local_8 = FUN_004111b5(), local_8 != 0)) goto LAB_00432dc7;
      uVar9 = 0;
      do {
        iVar5 = FUN_004327cf(*(undefined1 *)(iVar7 + 0xf8));
        local_c[uVar9] = iVar5;
        uVar9 = uVar9 + 1;
      } while (uVar9 <= uVar3);
      FUN_00411249();
      uVar9 = 1;
      if (uVar3 != 0) {
        do {
          if ((uint)local_c[uVar9] < (uint)local_c[uVar9 - 1]) goto LAB_00432dc7;
          uVar9 = uVar9 + 1;
        } while (uVar9 <= uVar3);
      }
      iVar7 = local_c[uVar3];
      iVar5 = *local_c;
      uVar9 = FUN_00411976(4,0,&local_8);
      *local_30 = uVar9;
      if (local_8 != 0) goto LAB_00432dc7;
      uVar6 = FUN_00411912(iVar7 - iVar5,&local_8);
      *(undefined4 *)*local_30 = uVar6;
      if (((local_8 != 0) || (local_8 = FUN_0041106d(), local_8 != 0)) ||
         (local_8 = FUN_004110b4(*(undefined4 *)*local_30,iVar7 - iVar5), local_8 != 0))
      goto LAB_00432dc7;
      uVar9 = 1;
      if (uVar3 != 0) {
        do {
          piVar1 = (int *)(*local_30 + uVar9 * 4);
          piVar2 = local_c + uVar9;
          uVar9 = uVar9 + 1;
          *piVar1 = (piVar1[-1] - piVar2[-1]) + *piVar2;
        } while (uVar9 <= uVar3);
      }
      uVar9 = 0;
      if ((-1 < iVar8) && (uVar3 != 0)) {
        do {
          (**(code **)(iVar10 + 0x10))
                    (*(undefined4 *)(*local_30 + uVar9 * 4),local_c[uVar9 + 1] - local_c[uVar9],
                     0x10ea);
          uVar9 = uVar9 + 1;
        } while (uVar9 < uVar3);
      }
      local_24 = local_24 + 1;
      local_1c = local_1c + 0xfc;
      *local_20 = uVar3;
      local_30 = local_30 + 2;
      local_20 = local_20 + 2;
    } while (local_24 < *(int *)(param_1 + 300));
  }
  FUN_00411a5c(local_c);
  return local_8;
}

