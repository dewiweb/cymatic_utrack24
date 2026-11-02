// rea decompile_all
// name: FUN_006459c0
// address: 0x6459c0
// body: available
// range: 0x6459c0-0x645bff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006459c0(int param_1,int param_2,int param_3)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  undefined **ppuVar5;
  uint uVar6;
  int iVar7;
  ushort *puVar8;
  int *in_ECX;
  int *piVar9;
  char in_DL;
  byte *pbVar10;
  char *pcVar11;
  int local_58 [2];
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  undefined4 *local_40;
  undefined4 local_38;
  int local_34;
  int local_30;
  undefined **local_2c;
  int local_28;
  undefined **local_24 [2];
  undefined1 local_1c [8];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00720109;
  local_10 = ExceptionList;
  uVar6 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_38 = 0;
  local_30 = CONCAT31(local_30._1_3_,in_DL);
  local_34 = param_2;
  local_2c = juce::NativeImageType::vftable;
  local_8 = 1;
  local_14 = uVar6;
  FUN_00673a00(in_ECX,(in_DL != '\0') + '\x01',param_1,param_2,local_30);
  local_38 = 1;
  iVar7 = 0;
  if (*in_ECX != 0) {
    iVar7 = *(int *)(*in_ECX + 8);
  }
  local_1c[0] = iVar7 != 1;
  local_24[0] = &PTR_vftable_00c7ed34;
  piVar9 = &local_28;
  local_8 = 2;
  pcVar11 = "originalImageHadAlpha";
  FUN_0061f730(piVar9,"originalImageHadAlpha",uVar6);
  FUN_0061fa00(piVar9,pcVar11);
  local_8 = CONCAT31(local_8._1_3_,3);
  FUN_00637060(&local_28,local_24);
  piVar9 = (int *)(local_28 + -8);
  if (piVar9 != &DAT_00bfe124) {
    LOCK();
    iVar7 = *piVar9;
    *piVar9 = *piVar9 + -1;
    UNLOCK();
    if (iVar7 == 0) {
      FID_conflict__free(piVar9);
    }
  }
  (**(code **)(*local_24[0] + 0x54))(local_1c);
  piVar9 = (int *)*in_ECX;
  if (piVar9 == (int *)0x0) {
    local_48 = 0;
    local_44 = 0;
    local_28 = 0;
  }
  else {
    local_28 = piVar9[2];
    local_48 = piVar9[3];
    local_44 = piVar9[4];
  }
  local_40 = (undefined4 *)0x0;
  local_8 = 4;
  (**(code **)(*piVar9 + 0x10))(local_58,0,0,1);
  local_30 = 0;
  if (0 < local_34) {
    local_2c = (undefined **)(param_1 + -1);
    do {
      pbVar10 = *(byte **)(param_3 + local_30 * 4);
      puVar8 = (ushort *)(local_50 * local_30 + local_58[0]);
      ppuVar5 = local_2c;
      if (local_28 == 1) {
        for (; -1 < (int)ppuVar5; ppuVar5 = (undefined **)((int)ppuVar5 + -1)) {
          bVar1 = pbVar10[2];
          bVar2 = pbVar10[1];
          *(byte *)(puVar8 + 1) = *pbVar10;
          *(byte *)((int)puVar8 + 1) = bVar2;
          *(byte *)puVar8 = bVar1;
          puVar8 = (ushort *)((int)puVar8 + local_4c);
          pbVar10 = pbVar10 + 4;
        }
      }
      else {
        for (; -1 < (int)ppuVar5; ppuVar5 = (undefined **)((int)ppuVar5 + -1)) {
          bVar1 = pbVar10[3];
          bVar2 = pbVar10[1];
          bVar3 = *pbVar10;
          bVar4 = pbVar10[2];
          *(byte *)((int)puVar8 + 3) = bVar1;
          uVar6 = (uint)bVar1;
          *(byte *)puVar8 = bVar4;
          *(byte *)((int)puVar8 + 1) = bVar2;
          *(byte *)(puVar8 + 1) = bVar3;
          if (uVar6 < 0xff) {
            if (uVar6 == 0) {
              *puVar8 = (ushort)bVar1;
              *(byte *)(puVar8 + 1) = bVar1;
            }
            else {
              *(byte *)puVar8 = (byte)((byte)*puVar8 * uVar6 + 0x7f >> 8);
              *(byte *)((int)puVar8 + 1) = (byte)(bVar2 * uVar6 + 0x7f >> 8);
              *(byte *)(puVar8 + 1) = (byte)(bVar3 * uVar6 + 0x7f >> 8);
            }
          }
          puVar8 = (ushort *)((int)puVar8 + local_4c);
          pbVar10 = pbVar10 + 4;
        }
      }
      local_30 = local_30 + 1;
    } while (local_30 < local_34);
  }
  if (local_40 != (undefined4 *)0x0) {
    (**(code **)*local_40)(1);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

