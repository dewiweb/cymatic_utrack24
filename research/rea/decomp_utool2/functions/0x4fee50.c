// rea decompile_all
// name: FUN_004fee50
// address: 0x4fee50
// body: available
// range: 0x4fee50-0x4ff115 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004fee50(undefined4 *param_1)

{
  char cVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  int in_ECX;
  undefined4 uVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined1 *puStack_78;
  undefined1 *local_74;
  undefined4 uStack_70;
  int iStack_6c;
  float local_68;
  undefined1 local_50 [16];
  undefined4 local_40;
  undefined4 *local_38 [9];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00707120;
  local_10 = ExceptionList;
  local_14 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_38[0] = param_1;
  local_40 = 0;
  uVar5 = local_40;
  if (((*(byte *)(in_ECX + 0x69) & 0x10) == 0) &&
     ((*(int *)(in_ECX + 0xc) == 0 || (cVar1 = FUN_006e6320(), uVar5 = local_40, cVar1 != '\0')))) {
    if ((*(int *)(in_ECX + 0x98) == 0) || (*(int *)(in_ECX + 0x98) != 1)) {
      uVar5 = *(undefined4 *)(in_ECX + 0x84);
    }
    else {
      uVar5 = *(undefined4 *)(in_ECX + 0x8c);
    }
    if (*(char *)(in_ECX + 0x9c) != '\0') {
      uVar5 = *(undefined4 *)(in_ECX + 0x94);
    }
  }
  cVar1 = (char)((uint)uVar5 >> 0x18);
  cVar2 = FUN_006e2bd0();
  if (cVar2 != '\0') {
    cVar1 = (char)((uint)*(undefined4 *)(in_ECX + 0x90) >> 0x18);
  }
  puVar6 = local_38[0];
  if (cVar1 != '\0') {
    local_68 = 7.34077e-39;
    FUN_00684c50();
    puStack_78 = local_50;
    local_74 = (undefined1 *)&uStack_70;
    FUN_006e6400();
    puStack_78 = (undefined1 *)0x4fef35;
    FUN_0040e4d0();
    puVar6 = local_38[0];
    local_74 = (undefined1 *)0x4fef4e;
    FUN_00684310();
  }
  local_68 = 7.340874e-39;
  FUN_00684c50();
  iVar7 = *(int *)(in_ECX + 0x1c) + -4;
  iVar3 = *(int *)(in_ECX + 0x78);
  if (iVar3 != 1) {
    if (iVar3 == 2) {
      local_68 = (float)iVar7;
      iStack_6c = 0x4fefd6;
      FUN_00561df0();
      FUN_0057f440();
      local_8 = 0;
      if (*(char *)(puVar6 + 2) != '\0') {
        *(undefined1 *)(puVar6 + 2) = 0;
        (**(code **)(*(int *)*puVar6 + 0x34))();
      }
      local_68 = 7.341104e-39;
      (**(code **)(*(int *)*puVar6 + 0x68))();
      local_8 = 0xffffffff;
      if (local_38[0] != (undefined4 *)0x0) {
        LOCK();
        piVar4 = local_38[0] + 1;
        iVar3 = *piVar4;
        *piVar4 = *piVar4 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          local_68 = 7.341157e-39;
          (**(code **)*local_38[0])();
        }
      }
      if (*(int *)(in_ECX + 0x7c) < 0) {
        iVar3 = FUN_006104a0();
        *(undefined1 *)(iVar3 + -1) = 0x2d;
      }
      else {
        FUN_006104a0();
      }
      local_68 = 7.341223e-39;
      FUN_004557e0();
      local_8 = 1;
      local_68 = *(float *)(in_ECX + 0x1c);
      iStack_6c = *(int *)(in_ECX + 0x18) / 2;
      uStack_70 = 0;
      local_74 = (undefined1 *)0x4ff07f;
      FUN_00472d90();
      local_68 = 5.04467e-44;
      FUN_0040e4d0(&puStack_78);
      FUN_006830c0(local_38);
      piVar4 = local_38[0] + -2;
      if (piVar4 != &DAT_00bfe124) {
        LOCK();
        iVar3 = *piVar4;
        *piVar4 = *piVar4 + -1;
        UNLOCK();
        if (iVar3 == 0) {
          local_68 = 7.341366e-39;
          FID_conflict__free(piVar4);
        }
      }
      goto LAB_004ff0f8;
    }
    if (iVar3 != 3) goto LAB_004ff0f8;
  }
  local_68 = (float)iVar7;
  iStack_6c = 0x4ff0f5;
  FUN_00561df0();
LAB_004ff0f8:
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

