// rea decompile_all
// name: FUN_00645320
// address: 0x645320
// body: available
// range: 0x645320-0x645682 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00645320(int *param_1,undefined4 param_2)

{
  byte *pbVar1;
  void *_Dst;
  char cVar2;
  uint uVar3;
  int iVar4;
  byte *_Memory;
  uint uVar5;
  int iVar6;
  uint extraout_ECX;
  uint extraout_EDX;
  uint *puVar7;
  uint uVar8;
  int local_5c [2];
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  undefined4 *local_44;
  undefined4 local_40;
  byte *local_38;
  int local_34;
  int local_30;
  uint local_2c;
  uint local_28;
  void *local_24;
  int local_20;
  uint local_1c;
  uint local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0072005d;
  local_10 = ExceptionList;
  uVar3 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  iVar4 = *param_1;
  if (iVar4 == 0) {
    uVar8 = 0;
    local_14 = 0;
  }
  else {
    uVar8 = *(uint *)(iVar4 + 0xc);
    local_14 = *(int *)(iVar4 + 0x10);
  }
  local_18 = uVar8;
  iVar4 = FUN_0064a7a0();
  if (iVar4 != 0) {
    local_30 = iVar4;
    local_24 = (void *)FUN_004c554b(0x10c,uVar3);
    if (local_24 != (void *)0x0) {
      _memset(local_24,0,0x10c);
      *(undefined4 *)(iVar4 + 0x14) = param_2;
      *(code **)(iVar4 + 0xc) = FUN_00645ee0;
      *(code **)(iVar4 + 0x130) = FUN_0064af10;
      if (*(int *)(iVar4 + 0x10) != 0) {
        *(undefined4 *)(iVar4 + 0x10) = 0;
        FUN_006563b0();
      }
      if (*param_1 == 0) {
        iVar6 = 0;
      }
      else {
        iVar6 = *(int *)(*param_1 + 8);
      }
      FUN_0064c530(uVar8,local_14,8,(iVar6 != 1) * '\x04' + '\x02',0,0,0);
      _Memory = (byte *)FUN_004c554b(uVar8 * 4);
      local_8 = 0;
      local_40 = 0x80808;
      *(uint *)((int)local_24 + 8) = *(uint *)((int)local_24 + 8) | 2;
      *(undefined4 *)((int)local_24 + 0x94) = 0x80808;
      *(undefined1 *)((int)local_24 + 0x98) = 8;
      local_38 = _Memory;
      FUN_0064a9a0();
      *(uint *)(iVar4 + 0x30) = *(uint *)(iVar4 + 0x30) | 8;
      *(undefined4 *)(iVar4 + 0x161) = 0x80808;
      *(undefined1 *)(iVar4 + 0x165) = 8;
      if (*(byte *)(iVar4 + 0x10c) < 8) {
        *(uint *)(iVar4 + 0x30) = *(uint *)(iVar4 + 0x30) | 4;
        *(undefined1 *)(iVar4 + 0x10d) = 8;
      }
      param_1 = (int *)*param_1;
      if (param_1 == (int *)0x0) {
        local_4c = 0;
        local_48 = 0;
      }
      else {
        local_4c = param_1[3];
        local_48 = param_1[4];
      }
      local_44 = (undefined4 *)0x0;
      local_8._0_1_ = 1;
      (**(code **)(*param_1 + 0x10))(local_5c,0,0,0);
      local_8 = CONCAT31(local_8._1_3_,2);
      local_20 = 0;
      if (0 < local_14) {
        local_34 = local_18 - 1;
        do {
          puVar7 = (uint *)(local_54 * local_20 + local_5c[0]);
          cVar2 = FUN_006737f0();
          pbVar1 = _Memory;
          uVar3 = extraout_EDX;
          uVar8 = extraout_ECX;
          if (cVar2 == '\0') {
            for (; -1 < (int)uVar3; uVar3 = uVar3 - 1) {
              *pbVar1 = *(byte *)((int)puVar7 + 2);
              pbVar1[1] = *(byte *)((int)puVar7 + 1);
              pbVar1[2] = (byte)*puVar7;
              puVar7 = (uint *)((int)puVar7 + local_50);
              pbVar1 = pbVar1 + 3;
            }
          }
          else {
            while (local_1c = uVar3, uVar3 = uVar8, -1 < (int)local_1c) {
              uVar3 = *puVar7;
              local_18 = uVar3 >> 0x18;
              param_2._0_1_ = (byte)uVar3;
              param_2._1_1_ = (byte)(uVar3 >> 8);
              param_2._2_1_ = (byte)(uVar3 >> 0x10);
              if (local_18 < 0xff) {
                if (local_18 == 0) {
                  param_2._0_1_ = 0;
                  uVar8 = 0;
                  param_2._2_1_ = 0;
                }
                else {
                  uVar8 = ((uVar3 & 0xff) * 0xff) / local_18;
                  local_28 = 0xff;
                  if (uVar8 < 0xff) {
                    local_28 = uVar8 & 0xff;
                  }
                  uVar5 = ((uint)param_2._1_1_ * 0xff) / local_18;
                  uVar8 = 0xff;
                  if (uVar5 < 0xff) {
                    uVar8 = uVar5 & 0xff;
                  }
                  uVar5 = ((uint)param_2._2_1_ * 0xff) / local_18;
                  param_2._0_1_ = (byte)local_28;
                  local_2c = uVar8;
                  param_2._2_1_ = 0xff;
                  if (uVar5 < 0xff) {
                    param_2._2_1_ = (byte)uVar5;
                  }
                }
              }
              else {
                uVar8 = (uint)param_2._1_1_;
              }
              *pbVar1 = param_2._2_1_;
              pbVar1[1] = (byte)uVar8;
              pbVar1[2] = (byte)param_2;
              param_2._3_1_ = (byte)(uVar3 >> 0x18);
              pbVar1[3] = param_2._3_1_;
              puVar7 = (uint *)((int)puVar7 + local_50);
              pbVar1 = pbVar1 + 4;
              uVar3 = local_1c - 1;
            }
          }
          FUN_0064a4e0(uVar3);
          local_20 = local_20 + 1;
        } while (local_20 < local_14);
      }
      _Dst = local_24;
      FUN_0064a860();
      FUN_00659160(0x7fff,0xffffffff);
      _memset(_Dst,0,0x10c);
      FID_conflict__free(_Dst);
      FUN_0064a0d0();
      FUN_00655db0();
      if (local_44 != (undefined4 *)0x0) {
        (**(code **)*local_44)(1);
      }
      FID_conflict__free(_Memory);
      ExceptionList = local_10;
      return 1;
    }
    FUN_0064a0d0();
    FUN_00655db0();
  }
  ExceptionList = local_10;
  return 0;
}

