// rea decompile_all
// name: FUN_00401581
// address: 0x401581
// body: available
// range: 0x401581-0x401899 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00401581(short *param_1)

{
  short sVar1;
  ushort uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  byte *pbVar6;
  undefined4 *puVar7;
  undefined2 uVar8;
  int in_EAX;
  undefined4 uVar9;
  int iVar10;
  undefined2 *puVar11;
  undefined4 *puVar12;
  int iVar13;
  short *psVar14;
  short sVar15;
  undefined2 *puVar16;
  undefined2 *puVar17;
  undefined2 *local_30;
  undefined2 *local_18;
  int local_c;
  int local_8;
  
  uVar3 = *(undefined4 *)(in_EAX + 4);
  uVar4 = *(undefined4 *)(in_EAX + 0xc);
  iVar13 = *(int *)(in_EAX + 8);
  iVar5 = *(int *)(in_EAX + 0x10);
  *(undefined4 *)(in_EAX + 0x18) = 0;
  *(undefined4 *)(in_EAX + 0x24) = 0;
  *(undefined4 *)(in_EAX + 0x2c) = 0;
  *(undefined4 *)(in_EAX + 0x38) = 0;
  *(undefined4 *)(in_EAX + 0x48) = 0;
  *(undefined4 *)(in_EAX + 0x54) = 0;
  sVar15 = *param_1;
  local_8 = 0;
  if (*(uint *)(in_EAX + 0x20) < (uint)(int)sVar15) {
    uVar9 = FUN_00411976(4,*(undefined4 *)(in_EAX + 0x28),&local_8);
    *(undefined4 *)(in_EAX + 0x28) = uVar9;
    if (local_8 != 0) {
      return local_8;
    }
    *(uint *)(in_EAX + 0x20) = (int)sVar15 + 3U & 0xfffffffc;
  }
  sVar15 = param_1[1];
  if (*(uint *)(in_EAX + 0x14) < (int)sVar15 + 2U) {
    uVar9 = FUN_00411976(0x28,*(undefined4 *)(in_EAX + 0x1c),&local_8);
    *(undefined4 *)(in_EAX + 0x1c) = uVar9;
    if (local_8 != 0) {
      return local_8;
    }
    *(uint *)(in_EAX + 0x14) = (int)sVar15 + 0xbU & 0xfffffff8;
  }
  *(int *)(in_EAX + 0x18) = (int)param_1[1];
  sVar15 = *param_1;
  *(undefined4 *)(in_EAX + 0x60) = 0xffffffff;
  *(int *)(in_EAX + 0x24) = (int)sVar15;
  *(undefined4 *)(in_EAX + 0x44) = 2;
  iVar10 = FUN_004107f9();
  if (iVar10 == 1) {
    *(undefined4 *)(in_EAX + 0x44) = 0xfffffffe;
    *(undefined4 *)(in_EAX + 0x60) = 1;
  }
  local_30 = *(undefined2 **)(in_EAX + 0x1c);
  *(undefined4 *)(in_EAX + 4) = uVar3;
  *(undefined4 *)(in_EAX + 0xc) = uVar4;
  *(int *)(in_EAX + 8) = iVar13;
  *(int *)(in_EAX + 0x10) = iVar5;
  *(undefined4 *)(in_EAX + 0x70) = 0;
  *(undefined4 *)(in_EAX + 0x74) = 0;
  if (*(int *)(in_EAX + 0x18) != 0) {
    pbVar6 = *(byte **)(param_1 + 4);
    local_c = 0;
    puVar11 = local_30 + *(int *)(in_EAX + 0x18) * 0x14;
    puVar7 = *(undefined4 **)(param_1 + 2);
    puVar16 = local_30 + **(short **)(param_1 + 6) * 0x14;
    local_18 = puVar16;
    for (puVar17 = local_30; puVar17 < puVar11; puVar17 = puVar17 + 0x14) {
      puVar17[6] = *(undefined2 *)puVar7;
      puVar17[7] = *(undefined2 *)(puVar7 + 1);
      iVar10 = FUN_00401000(*puVar7,uVar3);
      iVar10 = iVar10 + iVar13;
      *(int *)(puVar17 + 8) = iVar10;
      *(int *)(puVar17 + 2) = iVar10;
      iVar10 = FUN_00401000(puVar7[1],uVar4);
      iVar10 = iVar10 + iVar5;
      *(int *)(puVar17 + 10) = iVar10;
      *(int *)(puVar17 + 4) = iVar10;
      if ((*pbVar6 & 3) == 0) {
        uVar8 = 1;
      }
      else if ((*pbVar6 & 3) == 2) {
        uVar8 = 2;
      }
      else {
        uVar8 = 0;
      }
      *puVar17 = uVar8;
      *(undefined2 **)(puVar17 + 0x12) = local_18;
      *(undefined2 **)(local_18 + 0x10) = puVar17;
      local_18 = puVar17;
      if ((puVar17 == puVar16) && (local_c = local_c + 1, local_c < *param_1)) {
        puVar16 = local_30 + *(short *)(*(int *)(param_1 + 6) + local_c * 2) * 0x14;
        local_18 = puVar16;
      }
      puVar7 = puVar7 + 2;
      pbVar6 = pbVar6 + 1;
    }
    puVar12 = *(undefined4 **)(in_EAX + 0x28);
    puVar7 = puVar12 + *(int *)(in_EAX + 0x24);
    psVar14 = *(short **)(param_1 + 6);
    sVar15 = 0;
    for (; puVar12 < puVar7; puVar12 = puVar12 + 1) {
      *puVar12 = local_30 + sVar15 * 0x14;
      sVar15 = *psVar14 + 1;
      psVar14 = psVar14 + 1;
    }
    param_1._0_1_ = '\x04';
    if (local_30 < puVar11) {
      puVar17 = local_30 + 6;
      do {
        if (puVar17 + -6 == local_30) {
          iVar13 = *(int *)(local_30 + 0x12);
          param_1._0_1_ = FUN_004014a1();
          local_30 = (undefined2 *)(iVar13 + 0x28);
        }
        *(char *)(puVar17 + -5) = (char)param_1;
        sVar15 = *(short *)(*(int *)(puVar17 + 10) + 0xe);
        sVar1 = puVar17[1];
        param_1._0_1_ = FUN_004014a1();
        uVar2 = puVar17[-6];
        *(char *)((int)puVar17 + -9) = (char)param_1;
        if ((uVar2 & 3) == 0) {
          if ((char)param_1 == *(char *)(puVar17 + -5)) {
            if (((char)param_1 != '\x04') ||
               (iVar13 = FUN_0040d569((int)sVar15 - (int)sVar1), iVar13 != 0)) goto LAB_00401865;
          }
          else if ((int)*(char *)(puVar17 + -5) == -(int)(char)param_1) goto LAB_00401865;
        }
        else {
LAB_00401865:
          puVar17[-6] = uVar2 | 0x100;
        }
        puVar16 = puVar17 + 0xe;
        puVar17 = puVar17 + 0x14;
      } while (puVar16 < puVar11);
    }
  }
  return local_8;
}

