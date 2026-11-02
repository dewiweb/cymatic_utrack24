// rea decompile_all
// name: FUN_00665710
// address: 0x665710
// body: available
// range: 0x665710-0x665a6f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00665710(void)

{
  byte bVar1;
  byte bVar2;
  undefined4 *puVar3;
  uint *puVar4;
  char cVar5;
  int iVar6;
  int *in_ECX;
  uint uVar7;
  int iVar8;
  byte *pbVar9;
  int *piVar10;
  undefined4 *puVar11;
  byte *local_130;
  int local_12c;
  int local_128;
  int local_124;
  byte local_11c [256];
  uint local_1c;
  uint uStack_18;
  uint uStack_14;
  uint uStack_10;
  byte local_c;
  uint local_8;
  
  local_8 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  puVar3 = (undefined4 *)in_ECX[6];
  iVar8 = puVar3[1];
  pbVar9 = (byte *)*puVar3;
  if (iVar8 == 0) {
    cVar5 = (*(code *)puVar3[3])();
    if (cVar5 == '\0') goto LAB_0066574d;
    pbVar9 = (byte *)*puVar3;
    iVar8 = puVar3[1];
  }
  bVar1 = *pbVar9;
  pbVar9 = pbVar9 + 1;
  iVar8 = iVar8 + -1;
  if (iVar8 == 0) {
    cVar5 = (*(code *)puVar3[3])(in_ECX);
    if (cVar5 == '\0') {
LAB_0066574d:
      __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
      return;
    }
    pbVar9 = (byte *)*puVar3;
    iVar8 = puVar3[1];
  }
  iVar8 = iVar8 + -1;
  local_130 = pbVar9 + 1;
  local_124 = (uint)bVar1 * 0x100 + -2 + (uint)*pbVar9;
  do {
    if (local_124 < 0x11) {
      if (local_124 != 0) {
        *(undefined4 *)(*in_ECX + 0x14) = 0xb;
        (**(code **)*in_ECX)(in_ECX);
      }
      *puVar3 = local_130;
      puVar3[1] = iVar8;
      __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
      return;
    }
    if (iVar8 == 0) {
      cVar5 = (*(code *)puVar3[3])(in_ECX);
      if (cVar5 == '\0') goto LAB_0066574d;
      local_130 = (byte *)*puVar3;
      iVar8 = puVar3[1];
    }
    iVar8 = iVar8 + -1;
    bVar1 = *local_130;
    uVar7 = (uint)bVar1;
    local_130 = local_130 + 1;
    *(undefined4 *)(*in_ECX + 0x14) = 0x50;
    *(uint *)(*in_ECX + 0x18) = uVar7;
    (**(code **)(*in_ECX + 4))(in_ECX,1);
    local_1c = local_1c & 0xffffff00;
    local_128 = 0;
    local_12c = 1;
    do {
      if (iVar8 == 0) {
        cVar5 = (*(code *)puVar3[3])(in_ECX);
        if (cVar5 == '\0') goto LAB_0066574d;
        local_130 = (byte *)*puVar3;
        iVar8 = puVar3[1];
      }
      bVar2 = *local_130;
      iVar8 = iVar8 + -1;
      *(byte *)((int)&local_1c + local_12c) = bVar2;
      local_130 = local_130 + 1;
      local_12c = local_12c + 1;
      local_128 = local_128 + (uint)bVar2;
    } while (local_12c < 0x11);
    iVar6 = *in_ECX;
    *(uint *)(iVar6 + 0x18) = local_1c >> 8 & 0xff;
    *(uint *)(iVar6 + 0x1c) = local_1c >> 0x10 & 0xff;
    *(uint *)(iVar6 + 0x20) = local_1c >> 0x18;
    *(uint *)(iVar6 + 0x24) = uStack_18 & 0xff;
    *(uint *)(iVar6 + 0x28) = uStack_18 >> 8 & 0xff;
    *(uint *)(iVar6 + 0x2c) = uStack_18 >> 0x10 & 0xff;
    *(uint *)(iVar6 + 0x30) = uStack_18 >> 0x18;
    *(uint *)(iVar6 + 0x34) = uStack_14 & 0xff;
    *(undefined4 *)(*in_ECX + 0x14) = 0x56;
    (**(code **)(*in_ECX + 4))(in_ECX,2);
    iVar6 = *in_ECX;
    *(uint *)(iVar6 + 0x18) = uStack_14 >> 8 & 0xff;
    *(uint *)(iVar6 + 0x1c) = uStack_14 >> 0x10 & 0xff;
    *(uint *)(iVar6 + 0x20) = uStack_14 >> 0x18;
    *(uint *)(iVar6 + 0x24) = uStack_10 & 0xff;
    *(uint *)(iVar6 + 0x28) = uStack_10 >> 8 & 0xff;
    *(uint *)(iVar6 + 0x2c) = uStack_10 >> 0x10 & 0xff;
    *(uint *)(iVar6 + 0x30) = uStack_10 >> 0x18;
    *(uint *)(iVar6 + 0x34) = (uint)local_c;
    *(undefined4 *)(*in_ECX + 0x14) = 0x56;
    (**(code **)(*in_ECX + 4))(in_ECX,2);
    if ((0x100 < local_128) || (local_124 + -0x11 < local_128)) {
      *(undefined4 *)(*in_ECX + 0x14) = 8;
      (**(code **)*in_ECX)(in_ECX);
    }
    local_12c = 0;
    if (0 < local_128) {
      do {
        if (iVar8 == 0) {
          cVar5 = (*(code *)puVar3[3])(in_ECX);
          if (cVar5 == '\0') goto LAB_0066574d;
          local_130 = (byte *)*puVar3;
          iVar8 = puVar3[1];
        }
        iVar8 = iVar8 + -1;
        local_11c[local_12c] = *local_130;
        local_130 = local_130 + 1;
        local_12c = local_12c + 1;
      } while (local_12c < local_128);
    }
    local_124 = (local_124 + -0x11) - local_128;
    if ((bVar1 & 0x10) == 0) {
      iVar6 = uVar7 + 0x28;
    }
    else {
      iVar6 = uVar7 + 0x1c;
      uVar7 = uVar7 - 0x10;
    }
    piVar10 = in_ECX + iVar6;
    if (((int)uVar7 < 0) || (3 < (int)uVar7)) {
      *(undefined4 *)(*in_ECX + 0x14) = 0x1e;
      *(uint *)(*in_ECX + 0x18) = uVar7;
      (**(code **)*in_ECX)(in_ECX);
    }
    if (*piVar10 == 0) {
      iVar6 = (**(code **)in_ECX[1])(in_ECX,0,0x112);
      *(undefined1 *)(iVar6 + 0x111) = 0;
      *piVar10 = iVar6;
    }
    puVar4 = (uint *)*piVar10;
    *puVar4 = local_1c;
    puVar4[1] = uStack_18;
    puVar4[2] = uStack_14;
    puVar4[3] = uStack_10;
    *(byte *)(puVar4 + 4) = local_c;
    pbVar9 = local_11c;
    puVar11 = (undefined4 *)(*piVar10 + 0x11);
    for (iVar6 = 0x40; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar11 = *(undefined4 *)pbVar9;
      pbVar9 = pbVar9 + 4;
      puVar11 = puVar11 + 1;
    }
  } while( true );
}

