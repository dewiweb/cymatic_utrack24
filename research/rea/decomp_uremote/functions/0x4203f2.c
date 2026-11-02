// rea decompile_all
// name: FUN_004203f2
// address: 0x4203f2
// body: available
// range: 0x4203f2-0x420612 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_004203f2(int param_1,int param_2,char param_3)

{
  undefined4 *puVar1;
  ushort uVar2;
  undefined2 uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  ushort *puVar10;
  undefined2 *puVar11;
  uint uVar12;
  undefined2 *puVar13;
  undefined4 *puVar14;
  uint local_1c;
  uint *local_18;
  int *local_14;
  uint local_10;
  int local_c;
  uint local_8;
  
  if (param_3 == '\0') {
    local_18 = (uint *)(param_1 + 0xfc);
    local_14 = (int *)(param_1 + 0x100);
    iVar4 = (**(code **)(param_1 + 0x1fc))(param_1,0x686d7478,param_2,&local_10);
    if (iVar4 != 0) {
      return iVar4;
    }
    puVar10 = (ushort *)(param_1 + 0xfa);
    local_8 = (uint)*puVar10;
    if (local_10 >> 2 < (uint)*puVar10) {
      local_8 = local_10 >> 2;
    }
  }
  else {
    local_18 = (uint *)(param_1 + 0x150);
    local_14 = (int *)(param_1 + 0x154);
    iVar4 = (**(code **)(param_1 + 0x1fc))(param_1,0x766d7478,param_2,&local_10);
    if (iVar4 != 0) {
      return iVar4;
    }
    puVar10 = (ushort *)(param_1 + 0x14e);
    local_8 = (uint)*puVar10;
    if (local_10 >> 2 < (uint)*puVar10) {
      local_8 = local_10 >> 2;
    }
  }
  uVar12 = local_8;
  local_c = 0;
  uVar2 = *(ushort *)(param_1 + 0x108);
  *puVar10 = 0;
  local_1c = uVar2 - local_8;
  uVar5 = local_10 + local_8 * -4 >> 1;
  if ((int)local_1c < 0) {
    local_1c = 0;
  }
  uVar6 = FUN_00411976(4,0,&local_c);
  *local_18 = uVar6;
  if (local_c == 0) {
    iVar4 = FUN_00411976(2,0,&local_c);
    *local_14 = iVar4;
    if ((local_c == 0) && (local_c = FUN_004111b5(), local_c == 0)) {
      puVar11 = (undefined2 *)*local_18;
      puVar8 = *(undefined1 **)(param_2 + 0x20);
      puVar13 = puVar11 + uVar12 * 2;
      for (; puVar11 < puVar13; puVar11 = puVar11 + 2) {
        *puVar11 = CONCAT11(*puVar8,puVar8[1]);
        puVar7 = puVar8 + 3;
        puVar9 = puVar8 + 2;
        puVar8 = puVar8 + 4;
        puVar11[1] = CONCAT11(*puVar9,*puVar7);
      }
      puVar14 = (undefined4 *)*local_14;
      uVar12 = local_1c;
      if ((int)uVar5 <= (int)local_1c) {
        uVar12 = uVar5;
      }
      puVar1 = (undefined4 *)((int)puVar14 + uVar12 * 2);
      if (puVar14 < puVar1) {
        puVar8 = puVar8 + -1;
        do {
          puVar9 = puVar8 + 1;
          puVar8 = puVar8 + 2;
          *(ushort *)puVar14 = CONCAT11(*puVar9,*puVar8);
          puVar14 = (undefined4 *)((int)puVar14 + 2);
        } while (puVar14 < puVar1);
      }
      if (((int)uVar5 < (int)local_1c) && (uVar5 != 0)) {
        uVar3 = *(undefined2 *)(*local_14 + -2 + uVar5 * 2);
        puVar1 = (undefined4 *)(*local_14 + local_1c * 2);
        if (puVar14 < puVar1) {
          uVar12 = ((uint)((int)puVar1 + (-1 - (int)puVar14)) >> 1) + 1;
          for (uVar5 = uVar12 >> 1; uVar5 != 0; uVar5 = uVar5 - 1) {
            *puVar14 = CONCAT22(uVar3,uVar3);
            puVar14 = puVar14 + 1;
          }
          for (uVar12 = (uint)((uVar12 & 1) != 0); uVar12 != 0; uVar12 = uVar12 - 1) {
            *(undefined2 *)puVar14 = uVar3;
            puVar14 = (undefined4 *)((int)puVar14 + 2);
          }
        }
      }
      FUN_00411249();
      if (param_3 == '\0') {
        *(undefined2 *)(param_1 + 0xfa) = (undefined2)local_8;
      }
      else {
        *(undefined2 *)(param_1 + 0x14e) = (undefined2)local_8;
      }
    }
  }
  return local_c;
}

