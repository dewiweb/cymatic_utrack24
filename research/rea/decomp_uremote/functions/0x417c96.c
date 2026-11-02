// rea decompile_all
// name: FUN_00417c96
// address: 0x417c96
// body: available
// range: 0x417c96-0x417e78 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00417c96(int param_1,uint param_2,byte *param_3,int *param_4)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  byte *pbVar5;
  uint uVar6;
  byte bVar7;
  undefined4 *puVar8;
  uint uVar9;
  byte *pbVar10;
  
  *param_4 = 0;
  param_4[1] = 0;
  if (param_2 != 0) {
    param_2 = param_2 - 1;
  }
  if (param_3 != (byte *)0x0) {
    param_3 = (byte *)((int)param_3 - 1);
  }
  if (*(uint *)(param_1 + 0x198) < param_2) {
    return 0;
  }
  if (*(uint *)(param_1 + 0x198) < param_3) {
    return 0;
  }
  puVar8 = *(undefined4 **)(param_1 + 0x1a8);
  iVar2 = *(int *)(param_1 + 0x68);
  uVar3 = *(int *)(param_2 * 0x10 + *(int *)(param_1 + 0x1a0)) << 0x10 |
          (uint)*(ushort *)((int)param_3 * 0x10 + *(int *)(param_1 + 0x1a0));
  while( true ) {
    if (puVar8 == (undefined4 *)0x0) {
      return 0;
    }
    if (((uint)puVar8[4] <= uVar3) && (uVar3 <= (uint)puVar8[5])) break;
    puVar8 = (undefined4 *)*puVar8;
  }
  iVar4 = FUN_0041106d();
  if (iVar4 != 0) {
    return iVar4;
  }
  iVar4 = FUN_004111b5();
  if (iVar4 != 0) {
    return iVar4;
  }
  bVar1 = *(byte *)(puVar8 + 1);
  iVar4 = FUN_00411ba0();
  uVar9 = iVar4 * puVar8[2];
  param_3 = *(byte **)(iVar2 + 0x20);
  bVar7 = *(byte *)((int)puVar8 + 5) & 1;
  param_1._3_1_ = *(byte *)((int)puVar8 + 5) & 2;
  pbVar10 = param_3;
  if ((uint)bVar1 - iVar4 == 0) {
LAB_00417e08:
    while (param_3 = pbVar10, (uint)puVar8[2] < uVar9) {
      uVar9 = uVar9 >> 1;
      pbVar10 = param_3 + uVar9;
      if (bVar7 == 0) {
        pbVar5 = pbVar10 + 2;
        uVar6 = (uint)*pbVar10 << 0x10;
      }
      else {
        pbVar5 = pbVar10 + 4;
        uVar6 = (uint)CONCAT21(CONCAT11(*pbVar10,pbVar10[1]),pbVar10[2]) << 8;
      }
      if ((uVar6 | pbVar5[-1]) == uVar3) goto LAB_00417e42;
      if (uVar3 <= (uVar6 | pbVar5[-1])) {
LAB_00417e05:
        pbVar10 = param_3;
      }
    }
    if (bVar7 == 0) {
      pbVar5 = param_3 + 2;
      uVar9 = (uint)*param_3 << 0x10;
    }
    else {
      pbVar5 = param_3 + 4;
      uVar9 = (uint)CONCAT21(CONCAT11(*param_3,param_3[1]),param_3[2]) << 8;
    }
    if ((uVar9 | pbVar5[-1]) != uVar3) goto LAB_00417e69;
  }
  else {
    pbVar10 = param_3 + ((uint)bVar1 - iVar4) * puVar8[2];
    if (bVar7 == 0) {
      pbVar5 = pbVar10 + 2;
      uVar6 = (uint)*pbVar10 << 0x10;
    }
    else {
      pbVar5 = pbVar10 + 4;
      uVar6 = (uint)CONCAT21(CONCAT11(*pbVar10,pbVar10[1]),pbVar10[2]) << 8;
    }
    if ((uVar6 | pbVar5[-1]) != uVar3) {
      if (uVar3 <= (uVar6 | pbVar5[-1])) goto LAB_00417e05;
      pbVar10 = pbVar5 + 1;
      if (param_1._3_1_ != 0) {
        pbVar10 = pbVar5 + 2;
      }
      goto LAB_00417e08;
    }
  }
LAB_00417e42:
  if (param_1._3_1_ == 0) {
    uVar3 = (uint)*pbVar5;
  }
  else {
    uVar3 = (int)(short)((short)(char)*pbVar5 << 8) | (uint)pbVar5[1];
  }
  *param_4 = (int)*(short *)((int)puVar8 + 6) + uVar3;
LAB_00417e69:
  FUN_00411249();
  return 0;
}

