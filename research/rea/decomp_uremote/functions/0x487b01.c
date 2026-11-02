// rea decompile_all
// name: FUN_00487b01
// address: 0x487b01
// body: available
// range: 0x487b01-0x487df5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00487b01(void)

{
  undefined1 uVar1;
  byte bVar2;
  byte bVar3;
  undefined4 *puVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int *piVar9;
  int *unaff_ESI;
  undefined1 *puVar10;
  byte *pbVar11;
  int local_12c;
  int local_124;
  int local_120;
  byte local_11c [108];
  undefined1 local_b0 [148];
  byte local_1c [4];
  byte local_18;
  byte local_17;
  byte local_16;
  byte local_15;
  byte local_14;
  byte local_13;
  byte local_12;
  byte local_11;
  byte local_10;
  byte local_f;
  byte local_e;
  byte local_d;
  byte local_c;
  uint local_8;
  
  local_8 = DAT_00955fd4 ^ (uint)local_b0;
  puVar4 = (undefined4 *)unaff_ESI[6];
  local_120 = puVar4[1];
  puVar10 = (undefined1 *)*puVar4;
  if (local_120 == 0) {
    cVar5 = (*(code *)puVar4[3])();
    if (cVar5 == '\0') goto LAB_00487ddf;
    local_120 = puVar4[1];
    puVar10 = (undefined1 *)*puVar4;
  }
  uVar1 = *puVar10;
  local_120 = local_120 + -1;
  puVar10 = puVar10 + 1;
  if (local_120 == 0) {
    cVar5 = (*(code *)puVar4[3])();
    if (cVar5 == '\0') goto LAB_00487ddf;
    local_120 = puVar4[1];
    puVar10 = (undefined1 *)*puVar4;
  }
  local_120 = local_120 + -1;
  pbVar11 = puVar10 + 1;
  iVar6 = CONCAT11(uVar1,*puVar10) - 2;
  while (0x10 < iVar6) {
    if (local_120 == 0) {
      cVar5 = (*(code *)puVar4[3])();
      if (cVar5 == '\0') goto LAB_00487ddf;
      local_120 = puVar4[1];
      pbVar11 = (byte *)*puVar4;
    }
    bVar2 = *pbVar11;
    uVar7 = (uint)bVar2;
    local_120 = local_120 + -1;
    *(undefined4 *)(*unaff_ESI + 0x14) = 0x50;
    *(uint *)(*unaff_ESI + 0x18) = uVar7;
    pbVar11 = pbVar11 + 1;
    (**(code **)(*unaff_ESI + 4))();
    local_124 = 0;
    local_1c[0] = 0;
    local_12c = 1;
    do {
      if (local_120 == 0) {
        cVar5 = (*(code *)puVar4[3])();
        if (cVar5 == '\0') goto LAB_00487ddf;
        local_120 = puVar4[1];
        pbVar11 = (byte *)*puVar4;
      }
      bVar3 = *pbVar11;
      local_120 = local_120 + -1;
      local_1c[local_12c] = bVar3;
      local_124 = local_124 + (uint)bVar3;
      pbVar11 = pbVar11 + 1;
      local_12c = local_12c + 1;
    } while (local_12c < 0x11);
    iVar8 = *unaff_ESI;
    *(uint *)(iVar8 + 0x18) = (uint)local_1c[1];
    *(uint *)(iVar8 + 0x1c) = (uint)local_1c[2];
    *(uint *)(iVar8 + 0x20) = (uint)local_1c[3];
    *(uint *)(iVar8 + 0x24) = (uint)local_18;
    *(uint *)(iVar8 + 0x28) = (uint)local_17;
    *(uint *)(iVar8 + 0x2c) = (uint)local_16;
    *(uint *)(iVar8 + 0x30) = (uint)local_15;
    *(uint *)(iVar8 + 0x34) = (uint)local_14;
    *(undefined4 *)(*unaff_ESI + 0x14) = 0x56;
    (**(code **)(*unaff_ESI + 4))();
    iVar8 = *unaff_ESI;
    *(uint *)(iVar8 + 0x18) = (uint)local_13;
    *(uint *)(iVar8 + 0x1c) = (uint)local_12;
    *(uint *)(iVar8 + 0x20) = (uint)local_11;
    *(uint *)(iVar8 + 0x24) = (uint)local_10;
    *(uint *)(iVar8 + 0x28) = (uint)local_f;
    *(uint *)(iVar8 + 0x2c) = (uint)local_e;
    *(uint *)(iVar8 + 0x30) = (uint)local_d;
    *(uint *)(iVar8 + 0x34) = (uint)local_c;
    *(undefined4 *)(*unaff_ESI + 0x14) = 0x56;
    (**(code **)(*unaff_ESI + 4))();
    if ((0x100 < local_124) || (iVar6 + -0x11 < local_124)) {
      *(undefined4 *)(*unaff_ESI + 0x14) = 8;
      (**(code **)*unaff_ESI)();
    }
    local_12c = 0;
    if (0 < local_124) {
      do {
        if (local_120 == 0) {
          cVar5 = (*(code *)puVar4[3])();
          if (cVar5 == '\0') goto LAB_00487ddf;
          local_120 = puVar4[1];
          pbVar11 = (byte *)*puVar4;
        }
        local_120 = local_120 + -1;
        bVar3 = *pbVar11;
        pbVar11 = pbVar11 + 1;
        local_11c[local_12c] = bVar3;
        local_12c = local_12c + 1;
      } while (local_12c < local_124);
    }
    iVar6 = (iVar6 + -0x11) - local_124;
    if ((bVar2 & 0x10) == 0) {
      iVar8 = uVar7 + 0x28;
    }
    else {
      iVar8 = uVar7 + 0x1c;
      uVar7 = uVar7 - 0x10;
    }
    piVar9 = unaff_ESI + iVar8;
    if (((int)uVar7 < 0) || (3 < (int)uVar7)) {
      *(undefined4 *)(*unaff_ESI + 0x14) = 0x1e;
      *(uint *)(*unaff_ESI + 0x18) = uVar7;
      (**(code **)*unaff_ESI)();
    }
    if (*piVar9 == 0) {
      iVar8 = FUN_00482aab();
      *piVar9 = iVar8;
    }
    _memcpy((void *)*piVar9,local_1c,0x11);
    _memcpy((void *)(*piVar9 + 0x11),local_11c,0x100);
  }
  if (iVar6 != 0) {
    *(undefined4 *)(*unaff_ESI + 0x14) = 0xb;
    (**(code **)*unaff_ESI)();
  }
  puVar4[1] = local_120;
  *puVar4 = pbVar11;
LAB_00487ddf:
  __security_check_cookie(local_8 ^ (uint)local_b0);
  return;
}

