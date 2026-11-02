// rea decompile_all
// name: FUN_00415f81
// address: 0x415f81
// body: available
// range: 0x415f81-0x4161f1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00415f81(uint *param_1,int param_2,char param_3)

{
  byte bVar1;
  byte bVar2;
  undefined1 *puVar3;
  uint in_EAX;
  int iVar4;
  uint uVar5;
  uint uVar6;
  byte *pbVar7;
  byte *pbVar8;
  int iVar9;
  byte *local_c;
  int local_8;
  
  iVar4 = FUN_0041106d();
  if (iVar4 != 0) {
    return iVar4;
  }
  uVar5 = FUN_00411377();
  if ((uVar5 & 0xffff) <= in_EAX) {
    return 6;
  }
  iVar4 = FUN_00411095(in_EAX * 5);
  if (iVar4 != 0) {
    return iVar4;
  }
  uVar5 = FUN_00411377();
  uVar6 = FUN_00411430();
  *param_1 = uVar5 & 0xffff;
  param_1[1] = uVar6;
  iVar4 = FUN_0041106d();
  if (iVar4 != 0) {
    return iVar4;
  }
  iVar4 = FUN_004111b5();
  if (iVar4 != 0) {
    return iVar4;
  }
  puVar3 = *(undefined1 **)(param_2 + 0x20);
  pbVar8 = puVar3 + (uVar5 & 0xffff);
  if (puVar3 + 0xd <= pbVar8) {
    param_1[2] = (int)CONCAT21(CONCAT11(*puVar3,puVar3[1]),puVar3[2]);
    param_1[3] = (int)CONCAT21(CONCAT11(puVar3[3],puVar3[4]),puVar3[5]);
    param_1[4] = (int)CONCAT21(CONCAT11(puVar3[6],puVar3[7]),puVar3[8]);
    param_1[5] = (int)CONCAT21(CONCAT11(puVar3[9],puVar3[10]),puVar3[0xb]);
    bVar1 = puVar3[0xc];
    local_c = puVar3 + 0xd;
    iVar4 = 0;
    if ((bVar1 & 4) != 0) {
      iVar4 = 1;
      if ((bVar1 & 8) != 0) {
        iVar4 = 2;
      }
      if ((bVar1 & 3) == 0) {
        iVar4 = iVar4 + 3;
      }
    }
    iVar9 = iVar4;
    if (((bVar1 & 0x10) != 0) && (iVar9 = iVar4 + 1, (bVar1 & 0x20) != 0)) {
      iVar9 = iVar4 + 2;
    }
    if (local_c + iVar9 <= pbVar8) {
      if ((bVar1 & 4) != 0) {
        if ((bVar1 & 8) == 0) {
          uVar5 = (uint)*local_c;
          pbVar7 = puVar3 + 0xe;
        }
        else {
          pbVar7 = puVar3 + 0xf;
          uVar5 = (int)(short)((short)(char)puVar3[0xd] << 8) | (uint)(byte)puVar3[0xe];
        }
        param_1[7] = uVar5;
        local_c = pbVar7;
        if ((bVar1 & 3) == 0) {
          local_c = pbVar7 + 3;
          param_1[9] = (int)CONCAT21(CONCAT11(*pbVar7,pbVar7[1]),pbVar7[2]);
        }
      }
      if ((bVar1 & 0x10) != 0) {
        if ((bVar1 & 0x20) == 0) {
          uVar5 = (uint)*local_c;
          local_c = local_c + 1;
        }
        else {
          pbVar7 = local_c + 1;
          bVar2 = *local_c;
          local_c = local_c + 2;
          uVar5 = (int)(short)((short)(char)bVar2 << 8) | (uint)*pbVar7;
        }
        param_1[8] = uVar5;
      }
      local_8 = 0;
      if (((bVar1 & 0x40) != 0) && (local_8 = FUN_00415e6e(pbVar8), local_8 != 0))
      goto LAB_004161e2;
      if (local_c + 5 <= pbVar8) {
        param_1[10] = (uint)CONCAT11(*local_c,local_c[1]);
        param_1[0xb] = (uint)CONCAT21(CONCAT11(local_c[2],local_c[3]),local_c[4]);
        if (param_3 == '\0') goto LAB_004161e2;
        if (local_c + 6 <= pbVar8) {
          param_1[10] = param_1[10] + (uint)local_c[5] * 0x10000;
          goto LAB_004161e2;
        }
      }
    }
  }
  local_8 = 8;
LAB_004161e2:
  FUN_00411249();
  return local_8;
}

