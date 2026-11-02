// rea decompile_all
// name: FUN_00428560
// address: 0x428560
// body: available
// range: 0x428560-0x4286d9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00428560(int *param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  short *pv;
  int iVar5;
  uint uVar6;
  undefined4 *puVar7;
  short **ppsVar8;
  undefined4 uVar9;
  int in_ECX;
  undefined8 *puVar10;
  int local_28;
  short *local_24;
  int local_20;
  int *local_1c;
  int local_18;
  undefined8 local_14;
  
  local_1c = param_1;
  local_18 = in_ECX;
  local_20 = FUN_006f55c1();
  puVar10 = &DAT_00c14450;
  while( true ) {
    uVar1 = *puVar10;
    iVar5 = *(int *)(puVar10 + 1);
    *param_3 = 0;
    param_3[1] = 0;
    param_3[2] = 0;
    param_3[3] = 0;
    param_3[4] = 0;
    param_3[5] = 0;
    param_3[6] = 0;
    param_3[7] = 0;
    *(undefined8 *)(param_3 + 8) = 0;
    if ((*(int *)(in_ECX + 0x20) < 3) &&
       (local_14._4_4_ = (int)((ulonglong)uVar1 >> 0x20), local_14._4_4_ < 0x11)) {
      *(undefined2 *)param_3 = 1;
    }
    else {
      *(undefined2 *)param_3 = 0xfffe;
      *(undefined2 *)(param_3 + 4) = 0x16;
    }
    param_3[1] = local_20;
    *(undefined2 *)((int)param_3 + 2) = *(undefined2 *)(in_ECX + 0x20);
    local_14._4_2_ = (undefined2)((ulonglong)uVar1 >> 0x20);
    *(undefined2 *)((int)param_3 + 0x12) = local_14._4_2_;
    *(short *)((int)param_3 + 0xe) = (short)(iVar5 << 3);
    iVar5 = (uint)*(ushort *)((int)param_3 + 2) * (iVar5 << 3 & 0xffffU);
    local_24 = (short *)0x0;
    uVar6 = (int)(iVar5 + (iVar5 >> 0x1f & 7U)) >> 3;
    *(short *)(param_3 + 3) = (short)uVar6;
    local_14._0_1_ = (char)uVar1;
    param_3[2] = (uVar6 & 0xffff) * local_20;
    puVar7 = &DAT_00c14370;
    if ((char)local_14 == '\0') {
      puVar7 = (undefined4 *)&DAT_00c145a8;
    }
    uVar9 = *puVar7;
    uVar2 = puVar7[1];
    uVar3 = puVar7[2];
    uVar4 = puVar7[3];
    param_3[5] = param_2;
    param_3[6] = uVar9;
    param_3[7] = uVar2;
    param_3[8] = uVar3;
    param_3[9] = uVar4;
    ppsVar8 = &local_24;
    if (*(char *)(in_ECX + 0x38) != '\0') {
      ppsVar8 = (short **)0x0;
    }
    local_14 = uVar1;
    local_28 = (**(code **)(*local_1c + 0x1c))
                         (local_1c,*(char *)(in_ECX + 0x38) != '\0',param_3,ppsVar8);
    pv = local_24;
    if ((local_28 == 1) && (param_3[1] == *(int *)(local_24 + 2))) {
      uVar9 = 0x12;
      if (*local_24 == -2) {
        uVar9 = 0x28;
      }
      FUN_004c2c30(param_3,local_24,uVar9);
      local_28 = 0;
    }
    CoTaskMemFree(pv);
    if (-1 < local_28) break;
    puVar10 = (undefined8 *)((int)puVar10 + 0xc);
    in_ECX = local_18;
    if (0xc144a3 < (int)puVar10) {
      return 0;
    }
  }
  return 1;
}

