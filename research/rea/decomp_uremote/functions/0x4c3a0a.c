// rea decompile_all
// name: FUN_004c3a0a
// address: 0x4c3a0a
// body: available
// range: 0x4c3a0a-0x4c3be2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool FUN_004c3a0a(float param_1,float param_2,undefined4 param_3,undefined4 param_4,byte param_5)

{
  float *pfVar1;
  int in_ECX;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 uVar2;
  float extraout_ECX_01;
  undefined1 **extraout_ECX_02;
  float fVar3;
  int iVar4;
  bool bVar5;
  float local_3c;
  undefined1 *local_38;
  float local_34;
  float local_30;
  int iStack_2c;
  undefined1 **ppuStack_28;
  undefined1 *local_10;
  undefined1 *local_c;
  undefined1 **local_8;
  
  ppuStack_28 = (undefined1 **)0x4c3a20;
  FUN_004d076d();
  pfVar1 = (float *)(in_ECX + 0x20);
  if ((undefined1 *)*pfVar1 != local_c) {
    if ((((uint)*pfVar1 & 0x70) == 0) || (uVar2 = extraout_ECX, (param_5 & 0x70) != 0)) {
      local_10 = (undefined1 *)&iStack_2c;
      local_30 = 7.00041e-39;
      FUN_00467e6f();
      local_10 = (undefined1 *)&local_34;
      local_34 = param_1;
      local_38 = (undefined1 *)0x0;
      local_30 = param_2;
      local_3c = 7.000449e-39;
      FUN_004c3e12();
      uVar2 = extraout_ECX_00;
    }
    bVar5 = (param_5 & 0x70) != 0;
    ppuStack_28 = (undefined1 **)CONCAT31((int3)((uint)uVar2 >> 8),bVar5);
    if ((((uint)*pfVar1 & 0x70) != 0) != bVar5) {
      ppuStack_28 = *(undefined1 ***)(in_ECX + 0x38);
      local_8 = ppuStack_28;
      if (((uint)*pfVar1 & 0x70) != 0) {
        if (*(int *)(in_ECX + 0x28) == 0) {
          fVar3 = 0.0;
        }
        else {
          fVar3 = *(float *)(*(int *)(in_ECX + 0x28) + 8);
        }
        if (fVar3 != 0.0) {
          ppuStack_28 = &local_10;
          local_30 = 7.000572e-39;
          FUN_004c34f7();
          local_c = (undefined1 *)&ppuStack_28;
          iStack_2c = 0x4c3acd;
          FUN_004d076d();
          iStack_2c = 0x4c3ad4;
          FUN_00476147();
          iStack_2c = 0x4c3ae2;
          local_c = (undefined1 *)&ppuStack_28;
          FUN_004d076d();
          local_10 = (undefined1 *)&local_30;
          local_34 = 7.000642e-39;
          local_30 = extraout_ECX_01;
          FUN_00467e6f();
          local_38 = (undefined1 *)(*(float *)(in_ECX + 0x18) + param_1);
          local_34 = param_2 + *(float *)(in_ECX + 0x1c);
          local_3c = fVar3;
          local_10 = local_38;
          local_c = (undefined1 *)local_34;
          FUN_004c38cb(in_ECX);
          if (local_8 != *(undefined1 ***)(in_ECX + 0x38)) {
            return true;
          }
        }
        ppuStack_28 = (undefined1 **)0x0;
        iStack_2c = 0x4c3b40;
        FUN_004c4392();
        ppuStack_28 = extraout_ECX_02;
      }
      local_10 = (undefined1 *)&ppuStack_28;
      iStack_2c = 0x4c3b4e;
      FUN_004d076d();
      iStack_2c = 0x4c3b55;
      FUN_00476147();
      if ((*(byte *)pfVar1 & 0x70) != 0) {
        ppuStack_28 = (undefined1 **)0x4c3b5f;
        FUN_004c4e62();
        ppuStack_28 = (undefined1 **)0x4c3b64;
        FUN_004c508c();
        if (*(int *)(in_ECX + 0x28) == 0) {
          iVar4 = 0;
        }
        else {
          iVar4 = *(int *)(*(int *)(in_ECX + 0x28) + 8);
        }
        if (iVar4 != 0) {
          local_10 = (undefined1 *)&ppuStack_28;
          iStack_2c = 0x4c3b83;
          FUN_004d076d();
          local_10 = (undefined1 *)&local_34;
          local_38 = (undefined1 *)0x4c3b93;
          iStack_2c = iVar4;
          FUN_00467e6f();
          local_10 = (undefined1 *)&local_3c;
          local_3c = param_1;
          local_38 = (undefined1 *)param_2;
          FUN_004c47ba();
          local_10 = (undefined1 *)&iStack_2c;
          local_30 = 7.000922e-39;
          FUN_00467e6f();
          local_10 = (undefined1 *)&local_34;
          local_34 = param_1;
          local_30 = param_2;
          local_3c = 7.000959e-39;
          FUN_004c3809();
        }
      }
      return local_8 != *(undefined1 ***)(in_ECX + 0x38);
    }
    local_10 = (undefined1 *)&ppuStack_28;
    iStack_2c = 0x4c3a88;
    FUN_004d076d();
    iStack_2c = 0x4c3a8f;
    FUN_00476147();
  }
  return false;
}

