// rea decompile_all
// name: FUN_005ca0b0
// address: 0x5ca0b0
// body: available
// range: 0x5ca0b0-0x5ca4ea inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005ca0b0(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  uint _Size;
  char cVar1;
  undefined4 uVar2;
  void *pvVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int in_ECX;
  int iVar7;
  int extraout_ECX;
  int extraout_ECX_00;
  int *piVar8;
  uint uVar9;
  int iVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  int local_d4;
  int local_d0;
  undefined4 local_cc;
  void *local_c4;
  undefined **local_3c;
  undefined8 local_38;
  LPCRITICAL_SECTION local_30;
  int *local_2c;
  undefined4 local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0071ae79;
  local_10 = ExceptionList;
  uVar4 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_30 = (LPCRITICAL_SECTION)(in_ECX + 4);
  local_1c = in_ECX;
  EnterCriticalSection(local_30);
  local_8 = 0;
  if (*(int *)(in_ECX + 0x1c) == 0) {
    iVar5 = 0;
    if (0 < param_4) {
      do {
        pvVar3 = *(void **)(param_3 + iVar5 * 4);
        if (pvVar3 != (void *)0x0) {
          _memset(pvVar3,0,param_5 << 2);
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < param_4);
    }
  }
  else {
    iVar7 = 0;
    local_14 = 0;
    local_20 = 0;
    iVar5 = 0;
    local_18 = 0;
    if (0 < param_2) {
      piVar8 = (int *)(in_ECX + 0x42c);
      do {
        iVar10 = *(int *)(param_1 + iVar5 * 4);
        if (iVar10 != 0) {
          *piVar8 = iVar10;
          iVar7 = iVar7 + 1;
          piVar8 = piVar8 + 1;
          local_20 = iVar7;
          if (0x7f < iVar7) break;
        }
        iVar5 = iVar5 + 1;
        local_20 = iVar7;
      } while (iVar5 < param_2);
    }
    iVar7 = 0;
    iVar5 = 0;
    if (0 < param_4) {
      piVar8 = (int *)(in_ECX + 0x22c);
      do {
        iVar10 = *(int *)(param_3 + iVar5 * 4);
        in_ECX = local_1c;
        if (iVar10 != 0) {
          *piVar8 = iVar10;
          iVar7 = iVar7 + 1;
          piVar8 = piVar8 + 1;
          local_18 = iVar7;
          if (0x7f < iVar7) break;
        }
        iVar5 = iVar5 + 1;
        local_18 = iVar7;
      } while (iVar5 < param_4);
    }
    iVar5 = local_18;
    if (local_18 < local_20) {
      iVar7 = local_20 - local_18;
      local_8 = 1;
      if ((param_5 != *(int *)(in_ECX + 0x630)) ||
         (param_2 = local_20, iVar7 != *(int *)(in_ECX + 0x62c))) {
        uVar6 = param_5 + 3U & 0xfffffffc;
        uVar9 = iVar7 * 4 + 0x13U & 0xfffffff0;
        _Size = uVar9 + (uVar6 * iVar7 + 8) * 4;
        if (*(uint *)(in_ECX + 0x634) < _Size) {
          cVar1 = *(char *)(in_ECX + 0x6c0);
          *(uint *)(in_ECX + 0x634) = _Size;
          FID_conflict__free(*(void **)(in_ECX + 0x63c));
          if (cVar1 == '\0') {
            iVar10 = FUN_004c554b(_Size);
          }
          else {
            iVar10 = FUN_004c5556(_Size,1);
          }
          *(int *)(in_ECX + 0x63c) = iVar10;
          if (iVar10 == 0) {
            local_3c = std::bad_alloc::vftable;
            local_38 = 0xc066d4;
            iVar10 = __CxxThrowException_8(&local_3c,&DAT_00c4d060);
          }
          *(int *)(in_ECX + 0x638) = iVar10;
        }
        else if (*(char *)(in_ECX + 0x6c0) != '\0') {
          _memset(*(void **)(in_ECX + 0x63c),0,_Size);
        }
        param_2 = 0;
        iVar10 = *(int *)(in_ECX + 0x63c) + uVar9;
        if (0 < iVar7) {
          do {
            *(int *)(*(int *)(in_ECX + 0x638) + param_2 * 4) = iVar10;
            param_2 = param_2 + 1;
            iVar10 = iVar10 + uVar6 * 4;
            iVar5 = local_18;
          } while (param_2 < iVar7);
        }
        *(undefined4 *)(*(int *)(in_ECX + 0x638) + iVar7 * 4) = 0;
        *(int *)(in_ECX + 0x630) = param_5;
        *(int *)(in_ECX + 0x62c) = iVar7;
      }
      iVar10 = iVar5;
      if (0 < iVar5) {
        puVar12 = (undefined4 *)(in_ECX + 0x2c);
        local_14 = iVar5;
        do {
          *puVar12 = puVar12[0x80];
          FUN_004c2c30(puVar12[0x80],puVar12[0x100],param_5 << 2,uVar4);
          puVar12 = puVar12 + 1;
          iVar5 = iVar5 + -1;
          param_2 = extraout_ECX;
          in_ECX = local_1c;
          iVar10 = local_18;
        } while (iVar5 != 0);
      }
      if (iVar10 < local_20) {
        param_2 = 0;
        puVar12 = (undefined4 *)(in_ECX + (iVar10 + 0x10b) * 4);
        iVar5 = local_14 + 0xb;
        local_14 = local_14 + iVar7;
        puVar11 = (undefined4 *)(in_ECX + iVar5 * 4);
        do {
          *(undefined1 *)(in_ECX + 0x6c0) = 0;
          uVar2 = *(undefined4 *)(param_2 + *(int *)(in_ECX + 0x638));
          *puVar11 = uVar2;
          FUN_004c2c30(uVar2,*puVar12,param_5 << 2,uVar4);
          puVar12 = puVar12 + 1;
          puVar11 = puVar11 + 1;
          param_2 = param_2 + 4;
          iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
      }
    }
    else {
      if (0 < local_20) {
        puVar12 = (undefined4 *)(in_ECX + 0x2c);
        iVar5 = local_20;
        local_14 = local_20;
        do {
          *puVar12 = puVar12[0x80];
          FUN_004c2c30(puVar12[0x80],puVar12[0x100],param_5 * 4,uVar4);
          puVar12 = puVar12 + 1;
          iVar5 = iVar5 + -1;
          in_ECX = local_1c;
        } while (iVar5 != 0);
      }
      param_2 = local_20;
      if (local_20 < local_18) {
        iVar7 = local_18 - local_20;
        iVar5 = local_14 + 0xb;
        local_14 = local_14 + iVar7;
        puVar12 = (undefined4 *)(in_ECX + iVar5 * 4);
        puVar11 = (undefined4 *)(in_ECX + 0x22c + local_20 * 4);
        do {
          pvVar3 = (void *)*puVar11;
          *puVar12 = pvVar3;
          _memset(pvVar3,0,param_5 * 4);
          puVar12 = puVar12 + 1;
          puVar11 = puVar11 + 1;
          iVar7 = iVar7 + -1;
          param_2 = extraout_ECX_00;
          in_ECX = local_1c;
        } while (iVar7 != 0);
      }
    }
    local_8._0_1_ = 2;
    local_d4 = local_14;
    local_d0 = param_5;
    local_cc = 0;
    local_c4 = (void *)0x0;
    FUN_00409f00(in_ECX + 0x2c,param_2);
    local_8 = CONCAT31(local_8._1_3_,3);
    local_2c = &local_d4;
    local_28 = 0;
    local_24 = param_5;
    (**(code **)(**(int **)(in_ECX + 0x1c) + 0xc))(&local_2c);
    iVar5 = *local_2c;
    while (iVar5 = iVar5 + -1, -1 < iVar5) {
      FUN_00409da0(iVar5,local_28,local_24,*(undefined4 *)(in_ECX + 0x6c4),
                   *(undefined4 *)(in_ECX + 0x6c8));
    }
    *(undefined4 *)(in_ECX + 0x6c4) = *(undefined4 *)(in_ECX + 0x6c8);
    FID_conflict__free(local_c4);
  }
  LeaveCriticalSection(local_30);
  ExceptionList = local_10;
  return;
}

