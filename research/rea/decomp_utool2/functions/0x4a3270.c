// rea decompile_all
// name: FUN_004a3270
// address: 0x4a3270
// body: available
// range: 0x4a3270-0x4a33fc inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004a3270(float *param_1)

{
  char cVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  int in_ECX;
  int extraout_ECX;
  int iVar6;
  undefined1 local_60 [64];
  int local_20;
  int iStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00703586;
  local_10 = ExceptionList;
  uVar2 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  FUN_004a3e20(param_1);
  *(undefined2 *)(in_ECX + 0x90) = 0;
  local_20 = 0;
  iStack_1c = 0;
  uStack_18 = 0;
  uStack_14 = 0;
  piVar3 = (int *)FUN_004a37e0(param_1[3],&local_20);
  if ((piVar3 != (int *)0x0) && ((*(byte *)(in_ECX + 0x69) & 0x10) == 0)) {
    iVar6 = 0;
    if ((*(int *)(in_ECX + 0xc) != 0) &&
       (cVar1 = FUN_006e6320(uVar2), iVar6 = extraout_ECX, cVar1 == '\0')) {
      ExceptionList = local_10;
      return;
    }
    if (((int)param_1[2] < local_20) &&
       (iVar6 = *(int *)(in_ECX + 0x7c), *(char *)(iVar6 + 0xb0) != '\0')) {
      local_8 = 0;
      iVar4 = *(int *)(iVar6 + 0xa8);
      if (iVar4 < 0) {
        iVar4 = FUN_006e9580();
        iVar4 = (**(code **)(*(int *)(iVar4 + 0x14) + 0xc))(iVar6);
      }
      local_8 = 0xffffffff;
      if ((int)param_1[2] < local_20 - iVar4) {
        ExceptionList = local_10;
        return;
      }
      cVar1 = FUN_00690650();
      FUN_006df1c0(cVar1 == '\0');
      ExceptionList = local_10;
      return;
    }
    if (*(char *)(*(int *)(in_ECX + 0x7c) + 0xaf) == '\0') {
      FUN_006dff00(1,1,iVar6);
    }
    else if ((*(byte *)(piVar3 + 0xc) & 1) == 0) {
      FUN_004a3cc0(piVar3,param_1[4]);
    }
    else {
      *(byte *)(in_ECX + 0x91) = ~(byte)((uint)param_1[4] >> 5) & 1;
    }
    if (local_20 <= (int)param_1[2]) {
      iVar6 = *piVar3;
      uVar5 = FUN_006c9c30(local_60,*param_1 - (float)local_20,param_1[1] - (float)iStack_1c);
      (**(code **)(iVar6 + 0x30))(uVar5);
    }
  }
  ExceptionList = local_10;
  return;
}

