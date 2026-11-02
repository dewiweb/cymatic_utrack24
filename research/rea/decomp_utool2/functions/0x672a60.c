// rea decompile_all
// name: FUN_00672a60
// address: 0x672a60
// body: available
// range: 0x672a60-0x672cab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00672a60(void)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  int *in_ECX;
  int iVar4;
  void *_Memory;
  byte *pbVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  bool bVar9;
  float in_XMM2_Da;
  undefined4 in_stack_ffffff84;
  undefined4 in_stack_ffffff88;
  int local_5c [2];
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  undefined4 *local_44;
  int local_40;
  int local_3c;
  int local_38;
  undefined4 local_34;
  void *local_30;
  int local_2c;
  int local_28;
  double local_24;
  int local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_007202bc;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  piVar1 = (int *)*in_ECX;
  if ((piVar1 != (int *)0x0) && (piVar1[2] == 1)) {
    if (piVar1 != (int *)0x0) {
      FUN_0046f360(in_stack_ffffff84,in_stack_ffffff88,piVar1[3],piVar1[4]);
      ExceptionList = local_10;
      return;
    }
    FUN_0046f360(in_stack_ffffff84,in_stack_ffffff88,0,0);
    ExceptionList = local_10;
    return;
  }
  local_24 = (double)(in_XMM2_Da * 255.0) + 6755399441055744.0;
  if (local_24._0_4_ < 0) {
    local_14 = 0;
  }
  else {
    local_14 = local_24._0_4_;
    if (0xff < local_24._0_4_) {
      local_14 = 0xff;
    }
  }
  _Memory = (void *)0x0;
  local_30 = (void *)0x0;
  local_2c = 0;
  local_28 = 0;
  if (piVar1 == (int *)0x0) {
    local_48 = 0;
    local_4c = 0;
  }
  else {
    local_48 = piVar1[4];
    local_4c = piVar1[3];
  }
  local_44 = (undefined4 *)0x0;
  local_8 = 1;
  (**(code **)(*piVar1 + 0x10))(local_5c,0,0,0,DAT_00c76070 ^ (uint)&stack0xfffffffc);
  local_18 = 0;
  if (0 < local_48) {
    do {
      iVar7 = local_18;
      if (local_2c != 0) {
        FID_conflict__free(_Memory);
        _Memory = (void *)0x0;
        local_30 = (void *)0x0;
        local_2c = 0;
      }
      local_28 = 0;
      pbVar5 = (byte *)(local_54 * iVar7 + local_5c[0]);
      cVar2 = FUN_00673830();
      iVar7 = 0;
      if (cVar2 == '\0') {
        iVar3 = local_4c;
        iVar4 = local_14;
        if (0 < local_4c) {
          do {
            if ((byte)iVar4 <= *pbVar5) {
              iVar3 = iVar7;
              if (iVar7 < iVar7 + 1) {
                iVar3 = iVar7 + 1;
              }
              FUN_004100a0(iVar7,iVar3);
              iVar3 = local_4c;
              iVar4 = local_14;
            }
            pbVar5 = pbVar5 + local_50;
            iVar7 = iVar7 + 1;
            _Memory = local_30;
          } while (iVar7 < iVar3);
        }
      }
      else {
        iVar3 = local_4c;
        iVar4 = local_14;
        if (0 < local_4c) {
          do {
            if ((byte)iVar4 <= pbVar5[3]) {
              iVar3 = iVar7;
              if (iVar7 < iVar7 + 1) {
                iVar3 = iVar7 + 1;
              }
              FUN_004100a0(iVar7,iVar3);
              iVar3 = local_4c;
              iVar4 = local_14;
            }
            pbVar5 = pbVar5 + local_50;
            iVar7 = iVar7 + 1;
            _Memory = local_30;
          } while (iVar7 < iVar3);
        }
      }
      uVar6 = 0;
      uVar8 = local_28 >> 1;
      if (0 < (int)uVar8) {
        bVar9 = uVar8 != 0;
        do {
          if (bVar9) {
            local_40 = *(int *)((int)_Memory + uVar6 * 8);
            local_38 = local_40;
            if (local_40 < *(int *)((int)_Memory + uVar6 * 8 + 4)) {
              local_38 = *(int *)((int)_Memory + uVar6 * 8 + 4);
            }
          }
          else {
            local_40 = 0;
            local_38 = 0;
          }
          local_38 = local_38 - local_40;
          local_3c = local_18;
          local_34 = 1;
          FUN_0046f3a0(&local_40);
          uVar6 = uVar6 + 1;
          bVar9 = uVar6 < uVar8;
        } while ((int)uVar6 < (int)uVar8);
      }
      FUN_0046eac0();
      local_18 = local_18 + 1;
    } while (local_18 < local_48);
  }
  if (local_44 != (undefined4 *)0x0) {
    (**(code **)*local_44)(1);
  }
  FID_conflict__free(_Memory);
  ExceptionList = local_10;
  return;
}

