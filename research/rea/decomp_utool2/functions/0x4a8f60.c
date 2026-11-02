// rea decompile_all
// name: FUN_004a8f60
// address: 0x4a8f60
// body: available
// range: 0x4a8f60-0x4a9116 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_004a8f60(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  char cVar5;
  undefined4 uVar6;
  int *piVar7;
  int *in_ECX;
  undefined4 uVar8;
  float10 fVar9;
  uint uVar10;
  uint uVar11;
  undefined1 local_50 [16];
  undefined1 local_40 [16];
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  void *local_20;
  float local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  iVar1 = param_2;
  local_8 = 0xffffffff;
  puStack_c = &LAB_00703ad2;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if ((in_ECX[7] != 0) && (((byte)in_ECX[2] & 0x18) == 0x18)) {
    cVar5 = (**(code **)(*in_ECX + 0x40))(DAT_00c76070 ^ (uint)&stack0xfffffffc);
    if (cVar5 == '\0') {
      fVar9 = (float10)(**(code **)(*(int *)in_ECX[1] + 0x3c))();
      local_1c = (float)fVar9;
      FUN_00687970();
      FUN_0048d3f0();
      FUN_004a8ef0(local_40);
      if (((param_2 == 2) || (param_2 == 5)) || (param_2 = 0, iVar1 == 8)) {
        param_2 = 1;
      }
      if (((iVar1 == 6) || (iVar1 == 7)) || (local_14 = local_14 & 0xffffff00, iVar1 == 8)) {
        local_14 = CONCAT31(local_14._1_3_,1);
      }
      if (((iVar1 == 1) || (iVar1 == 4)) || (local_18 = local_18 & 0xffffff00, iVar1 == 7)) {
        local_18 = CONCAT31(local_18._1_3_,1);
      }
      if (((iVar1 == 3) || (iVar1 == 4)) || (iVar1 == 5)) {
        uVar8 = 1;
      }
      else {
        uVar8 = 0;
      }
      if (DAT_00c8a67c == 0) {
        local_20 = operator_new(0xd0);
        local_8 = 0;
        DAT_00c8a67c = FUN_006cb960();
        local_8 = 0xffffffff;
      }
      iVar1 = *(int *)in_ECX[7];
      uVar10 = local_18;
      uVar11 = local_14;
      uVar6 = FUN_006cab30(local_50,DAT_00c8a67c);
      (**(code **)(iVar1 + 4))(&local_30,local_40,uVar6,uVar8,uVar10,uVar11,param_2);
      piVar7 = (int *)FUN_0048d4d0(local_30,local_2c,local_28,local_24);
      iVar1 = *piVar7;
      iVar2 = piVar7[1];
      iVar3 = piVar7[2];
      iVar4 = piVar7[3];
      *param_1 = iVar1;
      param_1[1] = iVar2;
      param_1[2] = iVar1 + iVar3;
      param_1[3] = iVar2 + iVar4;
    }
  }
  ExceptionList = local_10;
  return 1;
}

