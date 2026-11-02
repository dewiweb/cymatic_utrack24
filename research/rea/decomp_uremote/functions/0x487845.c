// rea decompile_all
// name: FUN_00487845
// address: 0x487845
// body: available
// range: 0x487845-0x487b00 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_00487845(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  byte bVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int *unaff_ESI;
  undefined1 *puVar9;
  byte *pbVar10;
  byte *pbVar11;
  uint *local_20;
  int local_18;
  int *local_14;
  int local_c;
  int local_8;
  
  puVar4 = (undefined4 *)unaff_ESI[6];
  local_8 = puVar4[1];
  puVar9 = (undefined1 *)*puVar4;
  if (*(char *)(unaff_ESI[0x65] + 0xd) == '\0') {
    *(undefined4 *)(*unaff_ESI + 0x14) = 0x3e;
    (**(code **)*unaff_ESI)();
  }
  if (local_8 == 0) {
    uVar6 = (*(code *)puVar4[3])();
    if ((char)uVar6 != '\0') {
      local_8 = puVar4[1];
      puVar9 = (undefined1 *)*puVar4;
      goto LAB_00487891;
    }
LAB_00487882:
    uVar6 = uVar6 & 0xffffff00;
  }
  else {
LAB_00487891:
    uVar1 = *puVar9;
    local_8 = local_8 + -1;
    puVar9 = puVar9 + 1;
    if (local_8 == 0) {
      uVar6 = (*(code *)puVar4[3])();
      if ((char)uVar6 == '\0') goto LAB_00487882;
      local_8 = puVar4[1];
      puVar9 = (undefined1 *)*puVar4;
    }
    uVar2 = *puVar9;
    local_8 = local_8 + -1;
    pbVar10 = puVar9 + 1;
    if (local_8 == 0) {
      uVar6 = (*(code *)puVar4[3])();
      if ((char)uVar6 == '\0') goto LAB_00487882;
      local_8 = puVar4[1];
      pbVar10 = (byte *)*puVar4;
    }
    uVar7 = (uint)*pbVar10;
    local_8 = local_8 + -1;
    *(undefined4 *)(*unaff_ESI + 0x14) = 0x67;
    *(uint *)(*unaff_ESI + 0x18) = uVar7;
    pbVar10 = pbVar10 + 1;
    (**(code **)(*unaff_ESI + 4))();
    if ((((uint)CONCAT11(uVar1,uVar2) != uVar7 * 2 + 6) || (uVar7 == 0)) || (4 < uVar7)) {
      *(undefined4 *)(*unaff_ESI + 0x14) = 0xb;
      (**(code **)*unaff_ESI)();
    }
    local_18 = 0;
    unaff_ESI[0x49] = uVar7;
    if (uVar7 != 0) {
      local_14 = unaff_ESI + 0x4a;
      do {
        if (local_8 == 0) {
          uVar6 = (*(code *)puVar4[3])();
          if ((char)uVar6 == '\0') goto LAB_00487882;
          local_8 = puVar4[1];
          pbVar10 = (byte *)*puVar4;
        }
        uVar8 = (uint)*pbVar10;
        local_8 = local_8 + -1;
        pbVar10 = pbVar10 + 1;
        if (local_8 == 0) {
          uVar6 = (*(code *)puVar4[3])();
          if ((char)uVar6 == '\0') goto LAB_00487882;
          local_8 = puVar4[1];
          pbVar10 = (byte *)*puVar4;
        }
        bVar3 = *pbVar10;
        local_8 = local_8 + -1;
        local_c = 0;
        local_20 = (uint *)unaff_ESI[0x31];
        pbVar10 = pbVar10 + 1;
        if (0 < unaff_ESI[9]) {
          do {
            if (uVar8 == *local_20) goto LAB_004879d2;
            local_c = local_c + 1;
            local_20 = local_20 + 0x15;
          } while (local_c < unaff_ESI[9]);
        }
        *(undefined4 *)(*unaff_ESI + 0x14) = 5;
        *(uint *)(*unaff_ESI + 0x18) = uVar8;
        (**(code **)*unaff_ESI)();
LAB_004879d2:
        *local_14 = (int)local_20;
        local_20[6] = bVar3 & 0xf;
        local_20[5] = (int)(uint)bVar3 >> 4;
        iVar5 = *unaff_ESI;
        *(uint *)(iVar5 + 0x18) = uVar8;
        *(uint *)(iVar5 + 0x1c) = local_20[5];
        *(uint *)(iVar5 + 0x20) = local_20[6];
        *(undefined4 *)(*unaff_ESI + 0x14) = 0x68;
        (**(code **)(*unaff_ESI + 4))();
        local_18 = local_18 + 1;
        local_14 = local_14 + 1;
      } while (local_18 < (int)uVar7);
    }
    if (local_8 == 0) {
      uVar6 = (*(code *)puVar4[3])();
      if ((char)uVar6 == '\0') goto LAB_00487882;
      local_8 = puVar4[1];
      pbVar10 = (byte *)*puVar4;
    }
    local_8 = local_8 + -1;
    pbVar11 = pbVar10 + 1;
    unaff_ESI[0x5b] = (uint)*pbVar10;
    if (local_8 == 0) {
      uVar6 = (*(code *)puVar4[3])();
      if ((char)uVar6 == '\0') goto LAB_00487882;
      local_8 = puVar4[1];
      pbVar11 = (byte *)*puVar4;
    }
    local_8 = local_8 + -1;
    pbVar10 = pbVar11 + 1;
    unaff_ESI[0x5c] = (uint)*pbVar11;
    if (local_8 == 0) {
      uVar6 = (*(code *)puVar4[3])();
      if ((char)uVar6 == '\0') goto LAB_00487882;
      local_8 = puVar4[1];
      pbVar10 = (byte *)*puVar4;
    }
    bVar3 = *pbVar10;
    unaff_ESI[0x5e] = bVar3 & 0xf;
    iVar5 = *unaff_ESI;
    unaff_ESI[0x5d] = (int)(uint)bVar3 >> 4;
    *(int *)(iVar5 + 0x18) = unaff_ESI[0x5b];
    *(int *)(iVar5 + 0x1c) = unaff_ESI[0x5c];
    *(int *)(iVar5 + 0x20) = unaff_ESI[0x5d];
    *(int *)(iVar5 + 0x24) = unaff_ESI[0x5e];
    *(undefined4 *)(*unaff_ESI + 0x14) = 0x69;
    (**(code **)(*unaff_ESI + 4))();
    *(undefined4 *)(unaff_ESI[0x65] + 0x10) = 0;
    unaff_ESI[0x1f] = unaff_ESI[0x1f] + 1;
    puVar4[1] = local_8 + -1;
    *puVar4 = pbVar10 + 1;
    uVar6 = CONCAT31((int3)((uint)(local_8 + -1) >> 8),1);
  }
  return uVar6;
}

