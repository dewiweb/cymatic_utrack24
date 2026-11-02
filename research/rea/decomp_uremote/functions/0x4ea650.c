// rea decompile_all
// name: FUN_004ea650
// address: 0x4ea650
// body: available
// range: 0x4ea650-0x4eaa55 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004ea650(undefined4 param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  int unaff_EBX;
  float10 fVar6;
  undefined1 **ppuStack_e0;
  undefined1 **ppuVar7;
  undefined1 *local_c4;
  int local_c0;
  float local_bc;
  int local_b0;
  int local_a8;
  undefined1 *local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined1 **local_98;
  float local_94;
  float local_90;
  undefined1 **local_58;
  float fStack_54;
  float fStack_50;
  void *local_14;
  undefined1 *puStack_10;
  int local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_005df96d;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  fVar6 = (float10)FUN_004e9f43();
  local_bc = (float)fVar6;
  if (0.0 < local_bc) {
    FUN_0047cd64();
    FUN_0047ccfc();
    FUN_00476041();
    ppuStack_e0 = (undefined1 **)(unaff_EBX + 0xfc);
    FUN_004e8518(&local_58);
    local_c = 0;
    if (*(int *)(unaff_EBX + 0xdc) != *(int *)(unaff_EBX + 0xe0)) {
      FUN_004e858b();
      local_a4 = (undefined1 *)0x0;
      local_a0 = 0;
      local_9c = 0;
      local_c._0_1_ = 2;
      while ((cVar4 = FUN_004e85f8(), cVar4 != '\0' &&
             (local_c0 = local_b0 + local_a8, local_94 < (float)local_c0))) {
        if ((float)local_b0 < local_90 + local_94 != ((float)local_b0 == local_90 + local_94)) {
          local_c4 = &stack0xffffff24;
          ppuStack_e0 = local_98;
          FUN_00439b5a();
          ppuStack_e0 = (undefined1 **)0x4ea78a;
          cVar4 = FUN_004f5e9d();
          if (cVar4 != '\0') {
            local_c4 = &stack0xffffff24;
            ppuStack_e0 = &local_a4;
            FUN_004e8b32();
          }
        }
      }
      ppuStack_e0 = (undefined1 **)0x4ea7c7;
      cVar4 = FUN_004c30fb();
      if (cVar4 == '\0') {
        local_c0 = 0x3f000000;
      }
      else {
        local_c0 = 0x3f800000;
      }
      local_c4 = &stack0xffffff28;
      ppuStack_e0 = (undefined1 **)&stack0xffffff28;
      FUN_004c1e29(&local_c4,0x1000202,0);
      FUN_00476237();
      FUN_0047cda7();
      FUN_0047d1f1();
      ppuStack_e0 = &local_c4;
      FUN_004c1e29();
      FUN_004d076d();
      local_c._0_1_ = 1;
      _free(local_a4);
      local_c = (uint)local_c._1_3_ << 8;
      FUN_004652d6();
    }
    local_c0 = 0;
    while ((cVar4 = FUN_004e85f8(), cVar4 != '\0' &&
           (local_c4 = (undefined1 *)(local_b0 + local_a8), fStack_54 < (float)(int)local_c4))) {
      if ((float)local_b0 < fStack_50 + fStack_54 != ((float)local_b0 == fStack_50 + fStack_54)) {
        local_c4 = &stack0xffffff24;
        ppuStack_e0 = local_58;
        FUN_00439b5a();
        ppuStack_e0 = (undefined1 **)0x4ea8d4;
        cVar4 = FUN_004f5e9d();
        if (cVar4 == '\0') {
          FUN_004e8a5d();
        }
        else {
          ppuStack_e0 = *(undefined1 ***)(unaff_EBX + 0xe0);
          local_c4 = (undefined1 *)&ppuStack_e0;
          FUN_004d076d();
          FUN_004e8c56(param_1);
          local_c0 = 0;
        }
      }
    }
    local_c0 = *(int *)(unaff_EBX + 0x148);
    while (local_c0 = local_c0 + -1, -1 < local_c0) {
      piVar1 = (int *)(*(int *)(unaff_EBX + 0x140) + local_c0 * 8);
      iVar2 = *piVar1;
      iVar3 = piVar1[1];
      ppuStack_e0 = (undefined1 **)(unaff_EBX + 0xfc);
      FUN_004e8518(&local_98);
      local_c._0_1_ = 3;
      while ((cVar4 = FUN_004e85f8(), cVar4 != '\0' &&
             (local_c4 = (undefined1 *)(local_b0 + local_a8), local_94 < (float)(int)local_c4))) {
        if (((float)local_b0 < local_90 + local_94 != ((float)local_b0 == local_90 + local_94)) &&
           ((ppuVar7 = local_98, iVar5 = FUN_00439b5a(), (int)local_98 < iVar3 && (iVar2 < iVar5))))
        {
          local_c4 = (undefined1 *)&ppuStack_e0;
          ppuStack_e0 = ppuVar7;
          FUN_004c1e29(&ppuStack_e0,0x1000201,0);
          FUN_004e8b7d(param_1);
        }
      }
      local_c = (uint)local_c._1_3_ << 8;
      FUN_004652d6();
    }
    FUN_004652d6();
  }
  ExceptionList = local_14;
  return;
}

