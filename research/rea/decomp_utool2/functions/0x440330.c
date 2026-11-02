// rea decompile_all
// name: FUN_00440330
// address: 0x440330
// body: available
// range: 0x440330-0x44053f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00440330(void)

{
  undefined4 *puVar1;
  char cVar2;
  int iVar3;
  void *_Memory;
  uint uVar4;
  int in_ECX;
  undefined8 uVar5;
  undefined8 local_3c;
  void *local_34;
  undefined1 local_30 [4];
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  int *local_20;
  int *local_1c;
  int *local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_006fec00;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_20 = (int *)0x0;
  local_8 = 0;
  puVar1 = *(undefined4 **)(in_ECX + 0x54);
  if (puVar1 != (undefined4 *)0x0) {
    local_20 = (int *)0x0;
    iVar3 = (**(code **)*puVar1)
                      (puVar1,&DAT_00c149ec,&local_20,DAT_00c76070 ^ (uint)&stack0xfffffffc);
    if (-1 < iVar3) {
      local_28 = 8;
      local_2c = 0;
      local_3c = 0;
      (**(code **)(*local_20 + 0x14))(local_20,&local_2c,L"Duration",local_30,&local_3c,&local_28);
      local_1c = (int *)0x0;
      local_8._0_1_ = 1;
      puVar1 = *(undefined4 **)(in_ECX + 0x54);
      if (puVar1 != (undefined4 *)0x0) {
        local_1c = (int *)0x0;
        iVar3 = (**(code **)*puVar1)(puVar1,&DAT_00c14a20,&local_1c);
        if (-1 < iVar3) {
          local_8._0_1_ = 2;
          local_18 = (int *)0x0;
          iVar3 = (**(code **)(*local_1c + 0x24))(local_1c,0,&local_18);
          if (-1 < iVar3) {
            local_14 = (int *)0x0;
            local_8._0_1_ = 3;
            if (local_18 != (int *)0x0) {
              local_14 = (int *)0x0;
              iVar3 = (**(code **)*local_18)(local_18,&DAT_00c14bf8,&local_14);
              if (-1 < iVar3) {
                (**(code **)(*local_14 + 0x10))(local_14,0,&local_24);
                local_8._0_1_ = 4;
                FID_conflict__free((void *)0x0);
                _Memory = (void *)FUN_004c554b(local_24);
                local_34 = _Memory;
                (**(code **)(*local_14 + 0x10))(local_14,_Memory,&local_24);
                cVar2 = FUN_00426f30();
                if (cVar2 != '\0') {
                  iVar3 = *(int *)((int)_Memory + 0x44);
                  *(double *)(in_ECX + 8) =
                       (double)*(int *)(iVar3 + 4) +
                       (double)(&DAT_00c24bb0)[-(*(int *)(iVar3 + 4) >> 0x1f)];
                  *(uint *)(in_ECX + 0x20) = (uint)*(ushort *)(iVar3 + 2);
                  uVar4 = (uint)*(ushort *)(iVar3 + 0xe);
                  if (*(ushort *)(iVar3 + 0xe) == 0) {
                    uVar4 = 0x10;
                  }
                  *(uint *)(in_ECX + 0x10) = uVar4;
                  uVar5 = __allmul((int)*(double *)(in_ECX + 8),(int)*(double *)(in_ECX + 8) >> 0x1f
                                   ,(undefined4)local_3c,local_3c._4_4_);
                  uVar5 = __aulldiv(uVar5,&DAT_00989680,0);
                  *(undefined8 *)(in_ECX + 0x18) = uVar5;
                }
                FID_conflict__free(_Memory);
              }
            }
            local_8._0_1_ = 5;
            if (local_14 != (int *)0x0) {
              (**(code **)(*local_14 + 8))(local_14);
            }
          }
          local_8._0_1_ = 6;
          if (local_18 != (int *)0x0) {
            (**(code **)(*local_18 + 8))(local_18);
          }
        }
      }
      local_8 = CONCAT31(local_8._1_3_,7);
      if (local_1c != (int *)0x0) {
        (**(code **)(*local_1c + 8))(local_1c);
      }
    }
  }
  local_8 = 8;
  if (local_20 != (int *)0x0) {
    (**(code **)(*local_20 + 8))(local_20);
  }
  ExceptionList = local_10;
  return;
}

