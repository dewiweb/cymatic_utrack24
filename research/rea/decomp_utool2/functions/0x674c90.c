// rea decompile_all
// name: FUN_00674c90
// address: 0x674c90
// body: available
// range: 0x674c90-0x674f5e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00674c90(int *param_1,undefined4 param_2,undefined4 param_3,int param_4,uint param_5)

{
  int iVar1;
  undefined4 uVar2;
  code *pcVar3;
  byte bVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint *puVar10;
  undefined4 *puVar11;
  undefined4 uVar12;
  int in_ECX;
  int *piVar13;
  undefined1 uVar14;
  undefined1 uVar15;
  undefined1 uVar16;
  uint *extraout_EDX;
  byte *extraout_EDX_00;
  undefined1 local_58 [16];
  int local_48;
  uint local_44;
  undefined4 *local_40;
  uint local_3a;
  undefined4 local_33;
  undefined1 local_2c [4];
  int local_28;
  int local_24;
  uint local_20;
  int local_1c;
  undefined2 local_18;
  undefined1 local_14;
  undefined1 local_13;
  undefined1 local_12;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_007205c2;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_24 = in_ECX;
  (**(code **)(**(int **)(in_ECX + 4) + 0x10))
            (&DAT_00c0282c,3,DAT_00c76070 ^ (uint)&stack0xfffffffc);
  param_1 = (int *)*param_1;
  if (param_1 == (int *)0x0) {
    iVar6 = 0;
  }
  else {
    iVar6 = param_1[3];
  }
  if (iVar6 < param_4) {
    param_4 = iVar6;
  }
  if (param_1 == (int *)0x0) {
    uVar7 = 0;
  }
  else {
    uVar7 = param_1[4];
  }
  uVar8 = param_5;
  if ((int)uVar7 < (int)param_5) {
    uVar8 = uVar7;
  }
  local_1c = 0;
  local_40 = (undefined4 *)0x0;
  local_8 = 0;
  local_48 = param_4;
  local_44 = uVar8;
  (**(code **)(*param_1 + 0x10))(local_58,0,0,0);
  local_8 = 1;
  local_20 = uVar8;
  while (local_20 = local_20 - 1, -1 < (int)local_20) {
    iVar6 = 0;
    if (0 < param_4) {
      do {
        uVar7 = DAT_00c7ef6c;
        if ((-1 < iVar6) && (-1 < (int)local_20)) {
          cVar5 = FUN_00673830();
          if (cVar5 == '\0') {
            cVar5 = FUN_00673810();
            if (cVar5 == '\0') {
              local_3a = (uint)*extraout_EDX_00 << 0x18;
              uVar7 = local_3a;
            }
            else {
              local_18 = *(undefined2 *)extraout_EDX_00;
              local_33 = CONCAT13(0xff,*(undefined3 *)extraout_EDX_00);
              uVar7 = local_33;
            }
          }
          else {
            param_5 = *extraout_EDX;
            uVar7 = param_5 >> 0x18;
            if (uVar7 < 0xff) {
              bVar4 = (byte)(param_5 >> 0x18);
              if (uVar7 == 0) {
                param_5._0_3_ = (uint3)bVar4;
              }
              else {
                uVar8 = ((param_5 & 0xff) * 0xff) / uVar7;
                uVar14 = 0xff;
                if (uVar8 < 0xff) {
                  uVar14 = (char)uVar8;
                }
                uVar9 = ((param_5 >> 8 & 0xff) * 0xff) / uVar7;
                uVar8 = param_5 >> 0x10;
                uVar15 = 0xff;
                if (uVar9 < 0xff) {
                  uVar15 = (char)uVar9;
                }
                uVar7 = ((uVar8 & 0xff) * 0xff) / uVar7;
                uVar16 = 0xff;
                if (uVar7 < 0xff) {
                  uVar16 = (char)uVar7;
                }
                param_5._0_3_ = CONCAT12(uVar16,CONCAT11(uVar15,uVar14));
              }
              param_5 = CONCAT13(bVar4,(uint3)param_5);
            }
            puVar10 = (uint *)FUN_00680d30(local_2c,param_5);
            uVar7 = *puVar10;
          }
        }
        local_12 = (undefined1)uVar7;
        local_14 = (undefined1)(uVar7 >> 0x10);
        local_13 = (undefined1)(uVar7 >> 8);
        puVar11 = (undefined4 *)FUN_0062cc40(3,uVar7 >> 8);
        local_8._0_1_ = 2;
        uVar2 = *puVar11;
        piVar13 = *(int **)(local_24 + 4);
        uVar12 = FUN_0045d1e0(uVar2);
        (**(code **)(*piVar13 + 0x10))(uVar2,uVar12);
        local_8 = CONCAT31(local_8._1_3_,1);
        piVar13 = (int *)(local_28 + -8);
        if (piVar13 != &DAT_00bfe124) {
          LOCK();
          iVar1 = *piVar13;
          *piVar13 = *piVar13 + -1;
          UNLOCK();
          if (iVar1 == 0) {
            FID_conflict__free(piVar13);
          }
        }
        local_1c = local_1c + 3;
        if (100 < local_1c) {
          pcVar3 = *(code **)(**(int **)(local_24 + 4) + 0x14);
          if (pcVar3 == FUN_0062c8e0) {
            param_5 = CONCAT31(param_5._1_3_,10);
            (**(code **)(**(int **)(local_24 + 4) + 0x10))(&param_5,1);
          }
          else {
            (*pcVar3)(10);
          }
          local_1c = 0;
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 < param_4);
    }
  }
  (**(code **)(**(int **)(local_24 + 4) + 0x10))(&DAT_00c02844,4);
  if (local_40 != (undefined4 *)0x0) {
    (**(code **)*local_40)(1);
  }
  ExceptionList = local_10;
  return;
}

