// rea decompile_all
// name: FUN_00633930
// address: 0x633930
// body: available
// range: 0x633930-0x633b1a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 * FUN_00633930(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  short *_Memory;
  undefined4 *puVar2;
  uint *puVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_0071e8ff;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  _Memory = (short *)FUN_004c554b(0x200,DAT_00c76070 ^ (uint)&stack0xfffffffc);
  local_8 = CONCAT31(local_8._1_3_,1);
  puVar2 = (undefined4 *)FUN_00458890();
  uVar1 = *puVar2;
  puVar3 = (uint *)FUN_004363a0();
  iVar4 = ___stdio_common_vswprintf(*puVar3 | 1,puVar3[1],_Memory,0xff,uVar1,0,&stack0x0000000c);
  if (iVar4 < 0) {
    iVar4 = -1;
  }
  if (iVar4 < 1) {
    uVar7 = 0x200;
    iVar6 = 0x100;
    do {
      uVar7 = uVar7 + 0x200;
      if ((iVar4 == 0) || (0x20000 < uVar7)) {
        FID_conflict__free(_Memory);
        piVar5 = (int *)(param_2 + -8);
        *param_1 = &DAT_00bfe12c;
        if (piVar5 != &DAT_00bfe124) {
          LOCK();
          iVar4 = *piVar5;
          *piVar5 = *piVar5 + -1;
          UNLOCK();
          if (iVar4 == 0) {
            FID_conflict__free(piVar5);
          }
        }
        ExceptionList = local_10;
        return param_1;
      }
      FID_conflict__free(_Memory);
      _Memory = (short *)FUN_004c554b(uVar7);
      local_8 = CONCAT31(local_8._1_3_,1);
      puVar2 = (undefined4 *)FUN_00458890();
      iVar4 = ___stdio_common_vswprintf
                        (*puVar3 | 1,puVar3[1],_Memory,iVar6 + 0xff,*puVar2,0,&stack0x0000000c);
      if (iVar4 < 0) {
        iVar4 = -1;
      }
      iVar6 = iVar6 + 0x100;
    } while (iVar4 < 1);
  }
  if ((_Memory == (short *)0x0) || (*_Memory == 0)) {
    *param_1 = &DAT_00bfe12c;
  }
  else {
    iVar4 = FUN_0045ddd0(_Memory);
    uVar7 = iVar4 + 4U & 0xfffffffc;
    puVar2 = (undefined4 *)FUN_004bfe22(uVar7 + 0xb);
    puVar2[1] = uVar7;
    *puVar2 = 0;
    FUN_0045e480(_Memory);
    *param_1 = puVar2 + 2;
  }
  FID_conflict__free(_Memory);
  piVar5 = (int *)(param_2 + -8);
  if (piVar5 != &DAT_00bfe124) {
    LOCK();
    iVar4 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar4 == 0) {
      FID_conflict__free(piVar5);
    }
  }
  ExceptionList = local_10;
  return param_1;
}

