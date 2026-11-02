// rea decompile_all
// name: FUN_00665a70
// address: 0x665a70
// body: available
// range: 0x665a70-0x665d58 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_00665a70(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  byte bVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  int *in_ECX;
  uint uVar7;
  uint uVar8;
  undefined1 *puVar9;
  byte *pbVar10;
  byte *pbVar11;
  int iVar12;
  int local_1c;
  uint *local_14;
  int *local_c;
  
  piVar4 = (int *)in_ECX[6];
  puVar9 = (undefined1 *)*piVar4;
  iVar12 = piVar4[1];
  if (*(char *)(in_ECX[0x65] + 0xd) == '\0') {
    *(undefined4 *)(*in_ECX + 0x14) = 0x3e;
    (**(code **)*in_ECX)();
  }
  if (iVar12 == 0) {
    uVar5 = (*(code *)piVar4[3])();
    if ((char)uVar5 == '\0') goto LAB_00665ab9;
    puVar9 = (undefined1 *)*piVar4;
    iVar12 = piVar4[1];
  }
  uVar1 = *puVar9;
  puVar9 = puVar9 + 1;
  iVar12 = iVar12 + -1;
  if (iVar12 == 0) {
    uVar5 = (*(code *)piVar4[3])();
    if ((char)uVar5 == '\0') goto LAB_00665ab9;
    puVar9 = (undefined1 *)*piVar4;
    iVar12 = piVar4[1];
  }
  uVar2 = *puVar9;
  pbVar10 = puVar9 + 1;
  iVar12 = iVar12 + -1;
  if (iVar12 == 0) {
    uVar5 = (*(code *)piVar4[3])();
    if ((char)uVar5 == '\0') goto LAB_00665ab9;
    pbVar10 = (byte *)*piVar4;
    iVar12 = piVar4[1];
  }
  iVar12 = iVar12 + -1;
  uVar7 = (uint)*pbVar10;
  pbVar10 = pbVar10 + 1;
  *(undefined4 *)(*in_ECX + 0x14) = 0x67;
  *(uint *)(*in_ECX + 0x18) = uVar7;
  (**(code **)(*in_ECX + 4))();
  if ((((uint)CONCAT11(uVar1,uVar2) != uVar7 * 2 + 6) || (uVar7 == 0)) || (4 < uVar7)) {
    *(undefined4 *)(*in_ECX + 0x14) = 0xb;
    (**(code **)*in_ECX)();
  }
  in_ECX[0x49] = uVar7;
  local_1c = 0;
  if (uVar7 != 0) {
    local_c = in_ECX + 0x4a;
    do {
      if (iVar12 == 0) {
        uVar5 = (*(code *)piVar4[3])();
        if ((char)uVar5 == '\0') goto LAB_00665ab9;
        pbVar10 = (byte *)*piVar4;
        iVar12 = piVar4[1];
      }
      uVar8 = (uint)*pbVar10;
      pbVar10 = pbVar10 + 1;
      iVar12 = iVar12 + -1;
      if (iVar12 == 0) {
        uVar5 = (*(code *)piVar4[3])();
        if ((char)uVar5 == '\0') goto LAB_00665ab9;
        pbVar10 = (byte *)*piVar4;
        iVar12 = piVar4[1];
      }
      bVar3 = *pbVar10;
      iVar12 = iVar12 + -1;
      local_14 = (uint *)in_ECX[0x31];
      pbVar10 = pbVar10 + 1;
      iVar6 = 0;
      if (0 < in_ECX[9]) {
        do {
          if (uVar8 == *local_14) goto LAB_00665c1b;
          iVar6 = iVar6 + 1;
          local_14 = local_14 + 0x15;
        } while (iVar6 < in_ECX[9]);
      }
      *(undefined4 *)(*in_ECX + 0x14) = 5;
      *(uint *)(*in_ECX + 0x18) = uVar8;
      (**(code **)*in_ECX)();
LAB_00665c1b:
      *local_c = (int)local_14;
      local_14[5] = (uint)(bVar3 >> 4);
      local_14[6] = bVar3 & 0xf;
      iVar6 = *in_ECX;
      *(uint *)(iVar6 + 0x18) = uVar8;
      *(uint *)(iVar6 + 0x1c) = local_14[5];
      *(uint *)(iVar6 + 0x20) = local_14[6];
      *(undefined4 *)(*in_ECX + 0x14) = 0x68;
      (**(code **)(*in_ECX + 4))();
      local_c = local_c + 1;
      local_1c = local_1c + 1;
    } while (local_1c < (int)uVar7);
  }
  if (iVar12 == 0) {
    uVar5 = (*(code *)piVar4[3])();
    if ((char)uVar5 == '\0') goto LAB_00665ab9;
    pbVar10 = (byte *)*piVar4;
    iVar12 = piVar4[1];
  }
  pbVar11 = pbVar10 + 1;
  in_ECX[0x5b] = (uint)*pbVar10;
  iVar12 = iVar12 + -1;
  if (iVar12 == 0) {
    uVar5 = (*(code *)piVar4[3])();
    if ((char)uVar5 == '\0') goto LAB_00665ab9;
    pbVar11 = (byte *)*piVar4;
    iVar12 = piVar4[1];
  }
  pbVar10 = pbVar11 + 1;
  in_ECX[0x5c] = (uint)*pbVar11;
  iVar12 = iVar12 + -1;
  if (iVar12 == 0) {
    uVar5 = (*(code *)piVar4[3])();
    if ((char)uVar5 == '\0') {
LAB_00665ab9:
      return uVar5 & 0xffffff00;
    }
    pbVar10 = (byte *)*piVar4;
    iVar12 = piVar4[1];
  }
  bVar3 = *pbVar10;
  in_ECX[0x5e] = bVar3 & 0xf;
  iVar6 = *in_ECX;
  in_ECX[0x5d] = (uint)(bVar3 >> 4);
  *(int *)(iVar6 + 0x18) = in_ECX[0x5b];
  *(int *)(iVar6 + 0x1c) = in_ECX[0x5c];
  *(int *)(iVar6 + 0x20) = in_ECX[0x5d];
  *(int *)(iVar6 + 0x24) = in_ECX[0x5e];
  *(undefined4 *)(*in_ECX + 0x14) = 0x69;
  (**(code **)(*in_ECX + 4))();
  *(undefined4 *)(in_ECX[0x65] + 0x10) = 0;
  in_ECX[0x1f] = in_ECX[0x1f] + 1;
  *piVar4 = (int)(pbVar10 + 1);
  piVar4[1] = iVar12 + -1;
  return CONCAT31((int3)((uint)(iVar12 + -1) >> 8),1);
}

