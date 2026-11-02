// rea decompile_all
// name: FUN_004fc134
// address: 0x4fc134
// body: available
// range: 0x4fc134-0x4fc3af inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004fc134(undefined4 param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int in_ECX;
  int *unaff_ESI;
  float10 fVar4;
  undefined1 *local_94;
  undefined1 *local_90;
  uint uStack_8c;
  undefined1 *local_80;
  float local_7c;
  undefined1 *local_78;
  undefined1 *local_70;
  float local_6c;
  undefined1 *local_64;
  undefined1 local_60 [24];
  undefined1 local_48 [52];
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_005dd85c;
  local_14 = ExceptionList;
  uStack_8c = DAT_00955fd4 ^ (uint)&stack0xffffff78;
  ExceptionList = &local_14;
  if (*unaff_ESI != 0) {
    local_90 = (undefined1 *)0x4fc170;
    cVar1 = FUN_0047764b();
    if ((cVar1 == '\0') || (*(char *)((int)unaff_ESI + 0x25) != '\0')) {
      local_90 = (undefined1 *)0x4fc2c0;
      fVar4 = (float10)FUN_0049fa3d();
      local_94 = (undefined1 *)(float)fVar4;
      local_90 = local_48;
      local_80 = local_94;
      fVar4 = (float10)FUN_0049f98f();
      local_64 = (undefined1 *)(float)(fVar4 * (float10)(float)local_80);
      FUN_00477435(local_64);
      local_94 = (undefined1 *)0x4fc2fd;
      FUN_00477099();
      local_90 = local_60;
      local_94 = (undefined1 *)0x4fc30e;
      FUN_00474f97();
      local_90 = (undefined1 *)0x4fc313;
      piVar2 = (int *)FUN_0049f7d4();
      local_90 = local_80;
      local_94 = local_60;
      iVar3 = (**(code **)(*piVar2 + 0x20))(param_1);
      local_c = 1;
      local_64 = (undefined1 *)iVar3;
      if (iVar3 != 0) {
        local_90 = (undefined1 *)0x28;
        local_94 = (undefined1 *)0x4fc346;
        local_90 = (undefined1 *)FUN_005af82d();
        local_c._0_1_ = 2;
        if (local_90 == (undefined1 *)0x0) {
          local_94 = (undefined1 *)0x0;
        }
        else {
          local_94 = (undefined1 *)0x4fc35d;
          local_70 = local_90;
          local_94 = (undefined1 *)FUN_004fec84();
        }
        local_90 = (undefined1 *)0x0;
        local_70 = (undefined1 *)&local_94;
        local_c = CONCAT31(local_c._1_3_,1);
        if (local_94 != (undefined1 *)0x0) {
          *(int *)(local_94 + 4) = *(int *)(local_94 + 4) + 1;
        }
        FUN_004fea07();
      }
      local_c = 0xffffffff;
      if (iVar3 != 0) {
        local_90 = (undefined1 *)0x4fc395;
        FUN_004f7994();
        local_94 = (undefined1 *)0x4fc39b;
        local_90 = (undefined1 *)iVar3;
        FUN_005af7b6();
      }
    }
    else {
      local_90 = (undefined1 *)0x4fc187;
      FUN_004feb89();
      local_80 = *(undefined1 **)(in_ECX + 0x14);
      local_78 = *(undefined1 **)(in_ECX + 8);
      if ((char)unaff_ESI[9] == '\0') {
        local_70 = (undefined1 *)
                   ((float)unaff_ESI[1] * (float)local_78 + (float)unaff_ESI[2] * (float)local_80 +
                   (float)unaff_ESI[3]);
        local_64 = (undefined1 *)
                   ((float)unaff_ESI[5] * (float)local_80 + (float)unaff_ESI[4] * (float)local_78 +
                   (float)unaff_ESI[6]);
        local_90 = (undefined1 *)0x4fc218;
        FUN_0049f50b();
        local_c = 0;
        local_90 = (undefined1 *)0x4fc227;
        fVar4 = (float10)FUN_0049fa3d();
        local_90 = (undefined1 *)(float)(fVar4 * (float10)(float)unaff_ESI[5]);
        local_94 = (undefined1 *)0x4fc23f;
        local_7c = (float)local_90;
        FUN_0049f854();
        local_7c = (float)unaff_ESI[1] / (float)unaff_ESI[5];
        local_90 = (undefined1 *)(local_7c - 1.0);
        local_94 = (undefined1 *)0x4fc264;
        local_78 = local_90;
        fVar4 = (float10)FUN_00474d74();
        if ((float10)0.01 < fVar4) {
          local_90 = (undefined1 *)local_7c;
          local_94 = (undefined1 *)0x4fc283;
          FUN_0049f973();
        }
        local_78 = (undefined1 *)&local_94;
        local_94 = local_70;
        local_90 = local_64;
        FUN_004fec24(unaff_ESI,&local_80,param_1);
        local_90 = (undefined1 *)0x4fc2b1;
        FUN_004c4d7a();
      }
      else {
        local_70 = (undefined1 *)(float)unaff_ESI[7];
        local_64 = (undefined1 *)&local_94;
        local_6c = (float)unaff_ESI[8];
        local_94 = (undefined1 *)((float)local_70 + (float)local_78);
        local_90 = (undefined1 *)(local_6c + (float)local_80);
        FUN_004fec24(unaff_ESI,unaff_ESI + 0x15,param_1);
      }
    }
  }
  ExceptionList = local_14;
  return;
}

