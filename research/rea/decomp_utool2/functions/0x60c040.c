// rea decompile_all
// name: FUN_0060c040
// address: 0x60c040
// body: available
// range: 0x60c040-0x60c394 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0060c040(void)

{
  int iVar1;
  uint3 uVar4;
  undefined4 *puVar2;
  int iVar3;
  int *in_ECX;
  undefined4 extraout_EDX;
  int iVar5;
  undefined1 auStack_a0 [12];
  undefined4 uStack_94;
  int iStack_90;
  int iStack_8c;
  int iStack_88;
  int *piStack_84;
  int *piStack_80;
  undefined1 *puStack_7c;
  int iStack_78;
  int *piStack_74;
  int *piStack_70;
  int *piStack_6c;
  int iStack_68;
  int iStack_64;
  int *piStack_60;
  int *piStack_5c;
  int iStack_58;
  int local_54;
  int *piStack_50;
  int *piStack_4c;
  undefined1 local_3c [16];
  undefined1 local_2c [16];
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  if ((0 < in_ECX[6]) && (0 < in_ECX[7])) {
    piStack_4c = &local_1c;
    local_54 = in_ECX[0x2c];
    piStack_50 = &local_c;
    iVar5 = in_ECX[6];
    if (in_ECX[0x2d] != 0) {
      iVar5 = in_ECX[7];
    }
    iStack_58 = in_ECX[0x49];
    piStack_5c = (int *)0x60c091;
    (**(code **)(*in_ECX + 0xcc))();
    iStack_64 = in_ECX[0x2c];
    piStack_5c = &local_14;
    piStack_60 = &local_18;
    iStack_68 = in_ECX[0x48];
    piStack_6c = (int *)0x60c0b7;
    (**(code **)(*in_ECX + 0xcc))();
    local_c = local_c + ((local_1c - in_ECX[0x2b]) - local_18);
    iVar1 = (int)(float)in_ECX[0x4a];
    if (iVar1 != in_ECX[0x48]) {
      piStack_6c = &local_14;
      piStack_70 = &local_18;
      iStack_78 = 0x60c0e8;
      piStack_74 = (int *)in_ECX[0x48];
      FUN_0060d5d0();
      iVar1 = local_c - local_18;
      if (iVar1 <= iVar5) {
        in_ECX[0x4a] = (int)(float)in_ECX[0x48];
        piStack_6c = (int *)0x60c10d;
        FUN_0063ec20();
        puStack_7c = (undefined1 *)&iStack_78;
        piStack_80 = (int *)0x60c118;
        FUN_006e6400();
        puStack_7c = (undefined1 *)0x1;
        piStack_80 = (int *)0x60c121;
        iVar1 = FUN_006ce9f0();
      }
    }
    uVar4 = (uint3)((uint)iVar1 >> 8);
    if (((char)in_ECX[0x4b] == '\0') || ((float)in_ECX[0x4a] <= (float)in_ECX[0x48])) {
      piStack_6c = (int *)((uint)uVar4 << 8);
    }
    else {
      piStack_6c = (int *)CONCAT31(uVar4,1);
    }
    piStack_70 = (int *)0x60c154;
    (**(code **)(*(int *)in_ECX[0x4c] + 0x28))();
    in_ECX[0x2b] = 0;
    if ((char)in_ECX[0x4b] == '\0') {
      in_ECX[0x4a] = (int)(float)in_ECX[0x48];
    }
    else {
      local_8 = 0xc;
      if (iVar5 / 2 < 0xc) {
        local_8 = iVar5 / 2;
      }
      piStack_70 = (int *)local_2c;
      piStack_74 = (int *)0x60c18a;
      FUN_006e6400();
      piStack_70 = (int *)local_8;
      if (in_ECX[0x2d] == 0) {
        piStack_74 = (int *)local_3c;
        iStack_78 = 0x60c1a9;
        puVar2 = (undefined4 *)FUN_0040dd10();
        piStack_70 = (int *)puVar2[3];
        piStack_74 = (int *)puVar2[2];
        iStack_78 = puVar2[1];
        puStack_7c = (undefined1 *)*puVar2;
        piStack_80 = (int *)0x60c1bb;
        FUN_006e9790();
        piStack_70 = (int *)local_8;
        piStack_74 = (int *)local_3c;
        iStack_78 = 0x60c1d0;
        puVar2 = (undefined4 *)FUN_0040dcd0();
      }
      else {
        piStack_74 = (int *)local_3c;
        if (in_ECX[0x2d] == 1) {
          iStack_78 = 0x60c1e0;
          puVar2 = (undefined4 *)FUN_0040dd60();
          piStack_70 = (int *)puVar2[3];
          piStack_74 = (int *)puVar2[2];
          iStack_78 = puVar2[1];
          puStack_7c = (undefined1 *)*puVar2;
          piStack_80 = (int *)0x60c1f2;
          FUN_006e9790();
          piStack_70 = (int *)local_8;
          piStack_74 = (int *)local_3c;
          iStack_78 = 0x60c207;
          puVar2 = (undefined4 *)FUN_00418d70();
        }
        else {
          iStack_78 = 0x60c20e;
          puVar2 = (undefined4 *)FUN_00418d70();
          piStack_70 = (int *)puVar2[3];
          piStack_74 = (int *)puVar2[2];
          iStack_78 = puVar2[1];
          puStack_7c = (undefined1 *)*puVar2;
          piStack_80 = (int *)0x60c220;
          FUN_006e9790();
          piStack_70 = (int *)local_8;
          piStack_74 = (int *)local_3c;
          iStack_78 = 0x60c235;
          puVar2 = (undefined4 *)FUN_0040dd60();
        }
      }
      piStack_70 = (int *)puVar2[3];
      piStack_74 = (int *)puVar2[2];
      iStack_78 = puVar2[1];
      puStack_7c = (undefined1 *)*puVar2;
      piStack_80 = (int *)0x60c247;
      FUN_006e9790();
      piStack_70 = &local_14;
      piStack_74 = &local_10;
      iStack_78 = in_ECX[0x49];
      puStack_7c = (undefined1 *)0x60c25c;
      FUN_0060d5d0();
      piStack_70 = &local_8;
      local_10 = local_10 + local_14;
      iStack_78 = local_10 - iVar5;
      piStack_74 = (int *)0x0;
      puStack_7c = (undefined1 *)0x60c280;
      iVar1 = FUN_0060d110();
      iVar1 = iVar1 + 1;
      if ((-1 < iVar1) && (iVar1 < (int)(float)in_ECX[0x4a])) {
        iVar3 = in_ECX[0x48];
        if ((in_ECX[0x48] <= iVar1) && (iVar3 = iVar1, in_ECX[0x49] < iVar1)) {
          iVar3 = in_ECX[0x49];
        }
        in_ECX[0x4a] = (int)(float)iVar3;
        piStack_70 = (int *)0x60c2c1;
        FUN_0063ec20();
      }
      piStack_70 = &local_14;
      local_18 = 0;
      piStack_74 = &local_18;
      iStack_78 = (int)(float)in_ECX[0x4a];
      puStack_7c = (undefined1 *)0x60c2e0;
      FUN_0060d5d0();
      in_ECX[0x2b] = local_18;
    }
    iStack_78 = in_ECX[0x2c];
    piStack_70 = &local_1c;
    piStack_74 = &local_c;
    puStack_7c = (undefined1 *)in_ECX[0x49];
    piStack_80 = (int *)0x60c324;
    (**(code **)(*in_ECX + 0xcc))();
    iStack_88 = in_ECX[0x2c];
    piStack_80 = &local_14;
    piStack_84 = &local_18;
    iStack_8c = in_ECX[0x48];
    iStack_90 = 0x60c34a;
    (**(code **)(*in_ECX + 0xcc))();
    local_c = local_c - (in_ECX[0x2b] + local_18);
    uVar4 = (uint3)((uint)extraout_EDX >> 8);
    if (((char)in_ECX[0x4b] == '\0') || (local_c <= iVar5)) {
      iStack_90 = (uint)uVar4 << 8;
    }
    else {
      iStack_90 = CONCAT31(uVar4,1);
    }
    uStack_94 = 0x60c37a;
    (**(code **)(*(int *)in_ECX[0x4d] + 0x28))();
    FUN_006e6400(auStack_a0);
    FUN_006ce9f0(1);
  }
  return;
}

