// rea decompile_all
// name: FUN_00665d60
// address: 0x665d60
// body: available
// range: 0x665d60-0x666086 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_00665d60(undefined1 param_1)

{
  undefined1 uVar1;
  undefined1 uVar2;
  byte bVar3;
  undefined4 *puVar4;
  uint uVar5;
  int iVar6;
  uint *puVar7;
  int *in_ECX;
  undefined1 in_DL;
  int iVar8;
  undefined1 *puVar9;
  byte *pbVar10;
  byte *pbVar11;
  uint local_c;
  
  puVar4 = (undefined4 *)in_ECX[6];
  iVar8 = puVar4[1];
  puVar9 = (undefined1 *)*puVar4;
  *(undefined1 *)(in_ECX + 0x32) = in_DL;
  *(undefined1 *)((int)in_ECX + 0xc9) = param_1;
  if (iVar8 == 0) {
    uVar5 = (*(code *)puVar4[3])();
    if ((char)uVar5 == '\0') goto LAB_00665d94;
    puVar9 = (undefined1 *)*puVar4;
    iVar8 = puVar4[1];
  }
  uVar1 = *puVar9;
  puVar9 = puVar9 + 1;
  iVar8 = iVar8 + -1;
  if (iVar8 == 0) {
    uVar5 = (*(code *)puVar4[3])(in_ECX);
    if ((char)uVar5 == '\0') goto LAB_00665d94;
    puVar9 = (undefined1 *)*puVar4;
    iVar8 = puVar4[1];
  }
  uVar2 = *puVar9;
  pbVar10 = puVar9 + 1;
  iVar8 = iVar8 + -1;
  if (iVar8 == 0) {
    uVar5 = (*(code *)puVar4[3])(in_ECX);
    if ((char)uVar5 == '\0') goto LAB_00665d94;
    pbVar10 = (byte *)*puVar4;
    iVar8 = puVar4[1];
  }
  pbVar11 = pbVar10 + 1;
  in_ECX[0x30] = (uint)*pbVar10;
  iVar8 = iVar8 + -1;
  if (iVar8 == 0) {
    uVar5 = (*(code *)puVar4[3])(in_ECX);
    if ((char)uVar5 == '\0') goto LAB_00665d94;
    pbVar11 = (byte *)*puVar4;
    iVar8 = puVar4[1];
  }
  pbVar10 = pbVar11 + 1;
  in_ECX[8] = (uint)*pbVar11 << 8;
  iVar8 = iVar8 + -1;
  if (iVar8 == 0) {
    uVar5 = (*(code *)puVar4[3])(in_ECX);
    if ((char)uVar5 == '\0') goto LAB_00665d94;
    pbVar10 = (byte *)*puVar4;
    iVar8 = puVar4[1];
  }
  pbVar11 = pbVar10 + 1;
  in_ECX[8] = in_ECX[8] + (uint)*pbVar10;
  iVar8 = iVar8 + -1;
  if (iVar8 == 0) {
    uVar5 = (*(code *)puVar4[3])(in_ECX);
    if ((char)uVar5 == '\0') goto LAB_00665d94;
    pbVar11 = (byte *)*puVar4;
    iVar8 = puVar4[1];
  }
  pbVar10 = pbVar11 + 1;
  in_ECX[7] = (uint)*pbVar11 << 8;
  iVar8 = iVar8 + -1;
  if (iVar8 == 0) {
    uVar5 = (*(code *)puVar4[3])(in_ECX);
    if ((char)uVar5 == '\0') goto LAB_00665d94;
    pbVar10 = (byte *)*puVar4;
    iVar8 = puVar4[1];
  }
  pbVar11 = pbVar10 + 1;
  in_ECX[7] = in_ECX[7] + (uint)*pbVar10;
  iVar8 = iVar8 + -1;
  if (iVar8 == 0) {
    uVar5 = (*(code *)puVar4[3])(in_ECX);
    if ((char)uVar5 == '\0') {
LAB_00665d94:
      return uVar5 & 0xffffff00;
    }
    pbVar11 = (byte *)*puVar4;
    iVar8 = puVar4[1];
  }
  iVar8 = iVar8 + -1;
  iVar6 = *in_ECX;
  pbVar10 = pbVar11 + 1;
  in_ECX[9] = (uint)*pbVar11;
  *(int *)(iVar6 + 0x18) = in_ECX[0x5f];
  *(int *)(iVar6 + 0x1c) = in_ECX[7];
  *(int *)(iVar6 + 0x20) = in_ECX[8];
  *(int *)(iVar6 + 0x24) = in_ECX[9];
  *(undefined4 *)(*in_ECX + 0x14) = 100;
  (**(code **)(*in_ECX + 4))(in_ECX,1);
  if (*(char *)(in_ECX[0x65] + 0xd) != '\0') {
    *(undefined4 *)(*in_ECX + 0x14) = 0x3a;
    (**(code **)*in_ECX)(in_ECX);
  }
  if (((in_ECX[8] == 0) || (in_ECX[7] == 0)) || (in_ECX[9] < 1)) {
    *(undefined4 *)(*in_ECX + 0x14) = 0x20;
    (**(code **)*in_ECX)(in_ECX);
  }
  if (CONCAT11(uVar1,uVar2) - 8 != in_ECX[9] * 3) {
    *(undefined4 *)(*in_ECX + 0x14) = 0xb;
    (**(code **)*in_ECX)(in_ECX);
  }
  if (in_ECX[0x31] == 0) {
    iVar6 = (**(code **)in_ECX[1])(in_ECX,1,in_ECX[9] * 0x54);
    in_ECX[0x31] = iVar6;
  }
  puVar7 = (uint *)in_ECX[0x31];
  local_c = 0;
  if (0 < in_ECX[9]) {
    do {
      puVar7[1] = local_c;
      if (iVar8 == 0) {
        uVar5 = (*(code *)puVar4[3])(in_ECX);
        if ((char)uVar5 == '\0') goto LAB_00665d94;
        pbVar10 = (byte *)*puVar4;
        iVar8 = puVar4[1];
      }
      pbVar11 = pbVar10 + 1;
      *puVar7 = (uint)*pbVar10;
      iVar8 = iVar8 + -1;
      if (iVar8 == 0) {
        uVar5 = (*(code *)puVar4[3])(in_ECX);
        if ((char)uVar5 == '\0') goto LAB_00665d94;
        pbVar11 = (byte *)*puVar4;
        iVar8 = puVar4[1];
      }
      bVar3 = *pbVar11;
      pbVar11 = pbVar11 + 1;
      puVar7[2] = (uint)(bVar3 >> 4);
      puVar7[3] = bVar3 & 0xf;
      iVar8 = iVar8 + -1;
      if (iVar8 == 0) {
        uVar5 = (*(code *)puVar4[3])(in_ECX);
        if ((char)uVar5 == '\0') goto LAB_00665d94;
        pbVar11 = (byte *)*puVar4;
        iVar8 = puVar4[1];
      }
      iVar8 = iVar8 + -1;
      puVar7[4] = (uint)*pbVar11;
      pbVar10 = pbVar11 + 1;
      iVar6 = *in_ECX;
      *(uint *)(iVar6 + 0x18) = *puVar7;
      *(uint *)(iVar6 + 0x1c) = puVar7[2];
      *(uint *)(iVar6 + 0x20) = puVar7[3];
      *(uint *)(iVar6 + 0x24) = puVar7[4];
      *(undefined4 *)(*in_ECX + 0x14) = 0x65;
      (**(code **)(*in_ECX + 4))(in_ECX,1);
      local_c = local_c + 1;
      puVar7 = puVar7 + 0x15;
    } while ((int)local_c < in_ECX[9]);
  }
  iVar6 = in_ECX[0x65];
  *(undefined1 *)(iVar6 + 0xd) = 1;
  *puVar4 = pbVar10;
  puVar4[1] = iVar8;
  return CONCAT31((int3)((uint)iVar6 >> 8),1);
}

