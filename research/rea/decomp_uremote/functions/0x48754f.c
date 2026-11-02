// rea decompile_all
// name: FUN_0048754f
// address: 0x48754f
// body: available
// range: 0x48754f-0x487844 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_0048754f(undefined1 param_1)

{
  byte bVar1;
  byte bVar2;
  undefined4 *puVar3;
  uint uVar4;
  int iVar5;
  uint *puVar6;
  undefined1 in_CL;
  int *unaff_ESI;
  byte *pbVar7;
  byte *pbVar8;
  uint local_c;
  int local_8;
  
  puVar3 = (undefined4 *)unaff_ESI[6];
  local_8 = puVar3[1];
  pbVar7 = (byte *)*puVar3;
  *(undefined1 *)(unaff_ESI + 0x32) = in_CL;
  *(undefined1 *)((int)unaff_ESI + 0xc9) = param_1;
  if (local_8 == 0) {
    uVar4 = (*(code *)puVar3[3])();
    if ((char)uVar4 != '\0') {
      local_8 = puVar3[1];
      pbVar7 = (byte *)*puVar3;
      goto LAB_0048758c;
    }
LAB_0048757d:
    uVar4 = uVar4 & 0xffffff00;
  }
  else {
LAB_0048758c:
    bVar1 = *pbVar7;
    local_8 = local_8 + -1;
    pbVar7 = pbVar7 + 1;
    if (local_8 == 0) {
      uVar4 = (*(code *)puVar3[3])();
      if ((char)uVar4 == '\0') goto LAB_0048757d;
      local_8 = puVar3[1];
      pbVar7 = (byte *)*puVar3;
    }
    bVar2 = *pbVar7;
    local_8 = local_8 + -1;
    pbVar7 = pbVar7 + 1;
    if (local_8 == 0) {
      uVar4 = (*(code *)puVar3[3])();
      if ((char)uVar4 == '\0') goto LAB_0048757d;
      local_8 = puVar3[1];
      pbVar7 = (byte *)*puVar3;
    }
    local_8 = local_8 + -1;
    pbVar8 = pbVar7 + 1;
    unaff_ESI[0x30] = (uint)*pbVar7;
    if (local_8 == 0) {
      uVar4 = (*(code *)puVar3[3])();
      if ((char)uVar4 == '\0') goto LAB_0048757d;
      local_8 = puVar3[1];
      pbVar8 = (byte *)*puVar3;
    }
    local_8 = local_8 + -1;
    pbVar7 = pbVar8 + 1;
    unaff_ESI[8] = (uint)*pbVar8 << 8;
    if (local_8 == 0) {
      uVar4 = (*(code *)puVar3[3])();
      if ((char)uVar4 == '\0') goto LAB_0048757d;
      local_8 = puVar3[1];
      pbVar7 = (byte *)*puVar3;
    }
    local_8 = local_8 + -1;
    unaff_ESI[8] = unaff_ESI[8] + (uint)*pbVar7;
    pbVar7 = pbVar7 + 1;
    if (local_8 == 0) {
      uVar4 = (*(code *)puVar3[3])();
      if ((char)uVar4 == '\0') goto LAB_0048757d;
      local_8 = puVar3[1];
      pbVar7 = (byte *)*puVar3;
    }
    local_8 = local_8 + -1;
    pbVar8 = pbVar7 + 1;
    unaff_ESI[7] = (uint)*pbVar7 << 8;
    if (local_8 == 0) {
      uVar4 = (*(code *)puVar3[3])();
      if ((char)uVar4 == '\0') goto LAB_0048757d;
      local_8 = puVar3[1];
      pbVar8 = (byte *)*puVar3;
    }
    local_8 = local_8 + -1;
    unaff_ESI[7] = unaff_ESI[7] + (uint)*pbVar8;
    pbVar8 = pbVar8 + 1;
    if (local_8 == 0) {
      uVar4 = (*(code *)puVar3[3])();
      if ((char)uVar4 == '\0') goto LAB_0048757d;
      local_8 = puVar3[1];
      pbVar8 = (byte *)*puVar3;
    }
    local_8 = local_8 + -1;
    unaff_ESI[9] = (uint)*pbVar8;
    iVar5 = *unaff_ESI;
    *(int *)(iVar5 + 0x18) = unaff_ESI[0x5f];
    *(int *)(iVar5 + 0x1c) = unaff_ESI[7];
    *(int *)(iVar5 + 0x20) = unaff_ESI[8];
    *(int *)(iVar5 + 0x24) = unaff_ESI[9];
    *(undefined4 *)(*unaff_ESI + 0x14) = 100;
    pbVar8 = pbVar8 + 1;
    (**(code **)(*unaff_ESI + 4))();
    if (*(char *)(unaff_ESI[0x65] + 0xd) != '\0') {
      *(undefined4 *)(*unaff_ESI + 0x14) = 0x3a;
      (**(code **)*unaff_ESI)();
    }
    if (((unaff_ESI[8] == 0) || (unaff_ESI[7] == 0)) || (unaff_ESI[9] < 1)) {
      *(undefined4 *)(*unaff_ESI + 0x14) = 0x20;
      (**(code **)*unaff_ESI)();
    }
    if ((uint)bVar1 * 0x100 + (uint)bVar2 + -8 != unaff_ESI[9] * 3) {
      *(undefined4 *)(*unaff_ESI + 0x14) = 0xb;
      (**(code **)*unaff_ESI)();
    }
    if (unaff_ESI[0x31] == 0) {
      iVar5 = (**(code **)unaff_ESI[1])();
      unaff_ESI[0x31] = iVar5;
    }
    local_c = 0;
    puVar6 = (uint *)unaff_ESI[0x31];
    if (0 < unaff_ESI[9]) {
      do {
        puVar6[1] = local_c;
        if (local_8 == 0) {
          uVar4 = (*(code *)puVar3[3])();
          if ((char)uVar4 == '\0') goto LAB_0048757d;
          local_8 = puVar3[1];
          pbVar8 = (byte *)*puVar3;
        }
        local_8 = local_8 + -1;
        pbVar7 = pbVar8 + 1;
        *puVar6 = (uint)*pbVar8;
        if (local_8 == 0) {
          uVar4 = (*(code *)puVar3[3])();
          if ((char)uVar4 == '\0') goto LAB_0048757d;
          local_8 = puVar3[1];
          pbVar7 = (byte *)*puVar3;
        }
        bVar1 = *pbVar7;
        local_8 = local_8 + -1;
        pbVar7 = pbVar7 + 1;
        puVar6[2] = (int)(uint)bVar1 >> 4;
        puVar6[3] = bVar1 & 0xf;
        if (local_8 == 0) {
          uVar4 = (*(code *)puVar3[3])();
          if ((char)uVar4 == '\0') goto LAB_0048757d;
          local_8 = puVar3[1];
          pbVar7 = (byte *)*puVar3;
        }
        local_8 = local_8 + -1;
        puVar6[4] = (uint)*pbVar7;
        iVar5 = *unaff_ESI;
        *(uint *)(iVar5 + 0x18) = *puVar6;
        *(uint *)(iVar5 + 0x1c) = puVar6[2];
        *(uint *)(iVar5 + 0x20) = puVar6[3];
        *(uint *)(iVar5 + 0x24) = puVar6[4];
        *(undefined4 *)(*unaff_ESI + 0x14) = 0x65;
        pbVar8 = pbVar7 + 1;
        (**(code **)(*unaff_ESI + 4))();
        local_c = local_c + 1;
        puVar6 = puVar6 + 0x15;
      } while ((int)local_c < unaff_ESI[9]);
    }
    *(undefined1 *)(unaff_ESI[0x65] + 0xd) = 1;
    puVar3[1] = local_8;
    *puVar3 = pbVar8;
    uVar4 = CONCAT31((int3)((uint)local_8 >> 8),1);
  }
  return uVar4;
}

