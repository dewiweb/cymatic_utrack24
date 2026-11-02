// rea decompile_all
// name: FUN_005c5b90
// address: 0x5c5b90
// body: available
// range: 0x5c5b90-0x5c5d3f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005c5b90(int param_1,int param_2)

{
  byte *pbVar1;
  uint uVar2;
  void **ppvVar3;
  undefined1 *puVar4;
  byte *****pppppbVar5;
  int iVar6;
  int iVar7;
  double dVar8;
  undefined1 auStackY_100 [124];
  undefined4 uStackY_84;
  int iStackY_80;
  int iStackY_7c;
  int *piStackY_78;
  uint uStackY_74;
  undefined8 local_70;
  int local_3c;
  undefined1 local_35;
  undefined1 *local_34;
  undefined1 *local_30;
  byte ****local_2c [4];
  int local_1c;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_0071aa0e;
  local_14 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  local_30 = auStackY_100;
  dVar8 = 0.0;
  local_34 = (undefined1 *)((uint)local_34 & 0xffffff00);
  local_8._0_1_ = 0;
  local_8._1_3_ = 0;
  ppvVar3 = &local_10;
  local_10 = ExceptionList;
  puVar4 = local_34;
  uVar2 = uStackY_74;
  do {
    uStackY_74 = (uint)puVar4;
    ExceptionList = ppvVar3;
    if (param_2 < 1) {
LAB_005c5cc8:
      uStackY_74 = uVar2;
      local_8._0_1_ = 2;
      local_34 = &local_35;
      local_70 = (double)CONCAT44(0x5c5ce4,(undefined4)local_70);
      FUN_00426030();
      local_8 = (uint)local_8._1_3_ << 8;
      local_70 = (double)CONCAT44(0x5c5cf9,(undefined4)local_70);
      FUN_005c5d80();
      FUN_005c4960();
      FUN_00425b90();
      local_70 = (double)CONCAT44(0x5c5d1f,(undefined4)local_70);
      FID_conflict__free((void *)0x0);
      ExceptionList = local_10;
      __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
      return;
    }
    iVar6 = 0;
    iVar7 = 0;
    do {
      pbVar1 = (byte *)(param_1 + iVar6);
      iVar6 = iVar6 + 1;
      if (6 < iVar6) break;
      iVar7 = iVar7 * 0x80 + (*pbVar1 & 0x7f);
    } while ((char)*pbVar1 < '\0');
    piStackY_78 = &local_3c;
    local_3c = 0;
    dVar8 = (double)iVar7 + dVar8;
    uStackY_84 = 0x5c5c44;
    iStackY_80 = param_1 + iVar6;
    iStackY_7c = param_2 - iVar6;
    local_70 = dVar8;
    local_34 = (undefined1 *)uStackY_74;
    FUN_005c54f0();
    local_8._0_1_ = 1;
    if (local_3c < 1) {
      uVar2 = uStackY_74;
      if (4 < local_1c) {
        local_70 = (double)CONCAT44(0x5c5cc5,(undefined4)local_70);
        FID_conflict__free(local_2c[0]);
        uVar2 = uStackY_74;
      }
      goto LAB_005c5cc8;
    }
    param_2 = (param_2 - iVar6) - local_3c;
    param_1 = param_1 + iVar6 + local_3c;
    local_70 = (double)CONCAT44(0x5c5c62,(undefined4)local_70);
    FUN_005c4ba0();
    pppppbVar5 = local_2c;
    if (4 < local_1c) {
      pppppbVar5 = (byte *****)local_2c[0];
    }
    local_30 = (undefined1 *)((uint)local_30 & 0xff);
    if ((*(byte *)pppppbVar5 & 0xf0) != 0xf0) {
      local_30 = (undefined1 *)(uint)*(byte *)pppppbVar5;
    }
    local_34 = (undefined1 *)CONCAT31(local_34._1_3_,(char)local_30);
    ppvVar3 = ExceptionList;
    puVar4 = local_34;
    uVar2 = uStackY_74;
    if (4 < local_1c) {
      local_70 = (double)CONCAT44(0x5c5ca0,(undefined4)local_70);
      FID_conflict__free(local_2c[0]);
      ppvVar3 = ExceptionList;
      puVar4 = local_34;
      uVar2 = uStackY_74;
    }
  } while( true );
}

