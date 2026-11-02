// rea decompile_all
// name: FUN_00487df6
// address: 0x487df6
// body: available
// range: 0x487df6-0x488033 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_00487df6(void)

{
  int *piVar1;
  undefined1 uVar2;
  byte bVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  ushort uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  ushort *puVar11;
  int *unaff_ESI;
  undefined1 *puVar12;
  byte *pbVar13;
  int *local_10;
  int local_8;
  
  puVar4 = (undefined4 *)unaff_ESI[6];
  local_8 = puVar4[1];
  puVar12 = (undefined1 *)*puVar4;
  if (local_8 == 0) {
    uVar8 = (*(code *)puVar4[3])();
    if ((char)uVar8 != '\0') {
      local_8 = puVar4[1];
      puVar12 = (undefined1 *)*puVar4;
      goto LAB_00487e25;
    }
LAB_00487e16:
    uVar8 = uVar8 & 0xffffff00;
  }
  else {
LAB_00487e25:
    uVar2 = *puVar12;
    local_8 = local_8 + -1;
    puVar12 = puVar12 + 1;
    if (local_8 == 0) {
      uVar8 = (*(code *)puVar4[3])();
      if ((char)uVar8 == '\0') goto LAB_00487e16;
      local_8 = puVar4[1];
      puVar12 = (undefined1 *)*puVar4;
    }
    local_8 = local_8 + -1;
    pbVar13 = puVar12 + 1;
    iVar10 = CONCAT11(uVar2,*puVar12) - 2;
    while (iVar6 = iVar10, 0 < iVar6) {
      if (local_8 == 0) {
        uVar8 = (*(code *)puVar4[3])();
        if ((char)uVar8 == '\0') goto LAB_00487e16;
        local_8 = puVar4[1];
        pbVar13 = (byte *)*puVar4;
      }
      bVar3 = *pbVar13;
      local_8 = local_8 + -1;
      *(undefined4 *)(*unaff_ESI + 0x14) = 0x51;
      uVar8 = bVar3 & 0xf;
      *(uint *)(*unaff_ESI + 0x18) = uVar8;
      iVar9 = (int)(uint)bVar3 >> 4;
      *(int *)(*unaff_ESI + 0x1c) = iVar9;
      pbVar13 = pbVar13 + 1;
      (**(code **)(*unaff_ESI + 4))();
      if (3 < uVar8) {
        *(undefined4 *)(*unaff_ESI + 0x14) = 0x1f;
        *(uint *)(*unaff_ESI + 0x18) = uVar8;
        (**(code **)*unaff_ESI)();
      }
      piVar1 = unaff_ESI + uVar8 + 0x24;
      if (*piVar1 == 0) {
        iVar10 = FUN_00482a93();
        *piVar1 = iVar10;
      }
      iVar10 = *piVar1;
      local_10 = &DAT_005ff498;
      do {
        if (iVar9 == 0) {
          if (local_8 == 0) {
            uVar8 = (*(code *)puVar4[3])();
            if ((char)uVar8 == '\0') goto LAB_00487e16;
            local_8 = puVar4[1];
            pbVar13 = (byte *)*puVar4;
          }
          uVar7 = (ushort)*pbVar13;
        }
        else {
          if (local_8 == 0) {
            uVar8 = (*(code *)puVar4[3])();
            if ((char)uVar8 == '\0') goto LAB_00487e16;
            local_8 = puVar4[1];
            pbVar13 = (byte *)*puVar4;
          }
          bVar3 = *pbVar13;
          local_8 = local_8 + -1;
          pbVar13 = pbVar13 + 1;
          if (local_8 == 0) {
            uVar8 = (*(code *)puVar4[3])();
            if ((char)uVar8 == '\0') goto LAB_00487e16;
            local_8 = puVar4[1];
            pbVar13 = (byte *)*puVar4;
          }
          uVar7 = CONCAT11(bVar3,*pbVar13);
        }
        local_8 = local_8 + -1;
        iVar5 = *local_10;
        local_10 = local_10 + 1;
        pbVar13 = pbVar13 + 1;
        *(ushort *)(iVar10 + iVar5 * 2) = uVar7;
      } while ((int)local_10 < 0x5ff598);
      if (1 < *(int *)(*unaff_ESI + 0x68)) {
        puVar11 = (ushort *)(iVar10 + 4);
        local_10 = (int *)0x8;
        do {
          iVar10 = *unaff_ESI;
          *(uint *)(iVar10 + 0x18) = (uint)puVar11[-2];
          *(uint *)(iVar10 + 0x1c) = (uint)puVar11[-1];
          *(uint *)(iVar10 + 0x20) = (uint)*puVar11;
          *(uint *)(iVar10 + 0x24) = (uint)puVar11[1];
          *(uint *)(iVar10 + 0x28) = (uint)puVar11[2];
          *(uint *)(iVar10 + 0x2c) = (uint)puVar11[3];
          *(uint *)(iVar10 + 0x30) = (uint)puVar11[4];
          *(uint *)(iVar10 + 0x34) = (uint)puVar11[5];
          *(undefined4 *)(*unaff_ESI + 0x14) = 0x5d;
          (**(code **)(*unaff_ESI + 4))();
          puVar11 = puVar11 + 8;
          local_10 = (int *)((int)local_10 + -1);
        } while (local_10 != (int *)0x0);
      }
      iVar10 = iVar6 + -0x41;
      if (iVar9 != 0) {
        iVar10 = iVar6 + -0x81;
      }
    }
    if (iVar6 != 0) {
      *(undefined4 *)(*unaff_ESI + 0x14) = 0xb;
      (**(code **)*unaff_ESI)();
    }
    puVar4[1] = local_8;
    *puVar4 = pbVar13;
    uVar8 = CONCAT31((int3)((uint)local_8 >> 8),1);
  }
  return uVar8;
}

