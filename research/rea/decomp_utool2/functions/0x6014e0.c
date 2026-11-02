// rea decompile_all
// name: FUN_006014e0
// address: 0x6014e0
// body: available
// range: 0x6014e0-0x601905 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 FUN_006014e0(void)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  void *pvVar7;
  int in_ECX;
  int extraout_ECX;
  int iVar8;
  int iVar9;
  void *_Memory;
  bool bVar10;
  undefined8 uVar11;
  undefined4 uVar12;
  uint local_58;
  int local_54;
  uint local_50;
  int local_4c;
  uint local_34;
  uint local_24;
  uint local_20;
  int local_1c;
  undefined1 local_11;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0071baa9;
  local_10 = ExceptionList;
  uVar2 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  uVar11 = __alldiv(*(uint *)(in_ECX + 0x68) - 0x400,
                    *(int *)(in_ECX + 0x6c) - (uint)(*(uint *)(in_ECX + 0x68) < 0x400),0x8000,0);
  local_34 = (int)((ulonglong)uVar11 >> 0x20) << 0xf | (uint)uVar11 >> 0x11;
  uVar3 = *(int *)(in_ECX + 0x70) * 0x8000;
  local_24 = (uint)uVar11 * 0x8000;
  uVar4 = uVar3 + local_24;
  iVar8 = ((int)uVar3 >> 0x1f) + local_34 + (uint)CARRY4(uVar3,local_24);
  local_20 = 0;
  _Memory = (void *)0x0;
  local_1c = 0;
  local_8 = 0;
  iVar6 = *(int *)(in_ECX + 0x98);
  while (iVar6 = iVar6 + -1, -1 < iVar6) {
    puVar1 = *(uint **)(*(int *)(in_ECX + 0x90) + iVar6 * 4);
    FUN_00440b00(local_24,local_34,uVar4,iVar8);
    if (((local_54 <= (int)puVar1[3]) &&
        (((local_54 < (int)puVar1[3] || (local_58 < puVar1[2])) && ((int)puVar1[1] <= local_4c))))
       && (((int)puVar1[1] < local_4c || (*puVar1 < local_50)))) {
      iVar9 = local_1c + 1;
      uVar12 = *(undefined4 *)(*(int *)(in_ECX + 0x90) + iVar6 * 4);
      if ((int)local_20 < iVar9) {
        iVar5 = iVar9;
        if (iVar9 < 0) {
          iVar5 = local_1c + 2;
        }
        uVar3 = local_1c + 9 + (iVar5 >> 1) & 0xfffffff8;
        if (local_20 != uVar3) {
          local_20 = uVar3;
          if ((int)uVar3 < 1) {
            FID_conflict__free(_Memory);
            _Memory = (void *)0x0;
          }
          else if (_Memory == (void *)0x0) {
            _Memory = (void *)FUN_004c554b();
          }
          else {
            _Memory = (void *)FUN_004c553b(_Memory,uVar3 * 4,uVar2);
          }
        }
      }
      *(undefined4 *)((int)_Memory + local_1c * 4) = uVar12;
      local_1c = iVar9;
    }
  }
  if (local_1c == *(int *)(in_ECX + 0x70)) {
    if (local_20 != 0) {
      FID_conflict__free(_Memory);
      _Memory = (void *)0x0;
    }
    local_11 = 0;
  }
  else {
    if (((int)local_34 <= iVar8) && (((int)local_34 < iVar8 || (local_24 < uVar4)))) {
      while (iVar6 = FUN_00601930(local_24,local_34), iVar6 != 0) {
        bVar10 = 0xffff7fff < local_24;
        local_24 = local_24 + 0x8000;
        local_34 = local_34 + bVar10;
        if ((iVar8 <= (int)local_34) && ((iVar8 < (int)local_34 || (uVar4 <= local_24))))
        goto LAB_006016e3;
      }
      pvVar7 = operator_new(0xa8);
      iVar8 = local_24 + 0x8000;
      iVar6 = *(int *)(in_ECX + 0x60);
      FUN_00440b00(local_24,local_34,iVar8,local_34 + (0xffff7fff < local_24));
      local_8._0_1_ = 2;
      *(undefined4 *)(extraout_ECX + 0x10) = *(undefined4 *)(iVar6 + 0x20);
      *(undefined4 *)(extraout_ECX + 0x14) = 0x8000;
      *(undefined4 *)(extraout_ECX + 0x20) = 0;
      uVar12 = 0x6017b6;
      FUN_00416890();
      local_8 = CONCAT31(local_8._1_3_,3);
      FUN_006029f0((undefined4 *)(extraout_ECX + 0x10),0,0x8000,local_24,local_34,iVar8,uVar12);
      iVar6 = local_1c + 1;
      if (((int)local_20 < iVar6) && (uVar2 = iVar6 / 2 + 8 + iVar6 & 0xfffffff8, local_20 != uVar2)
         ) {
        local_20 = uVar2;
        if ((int)uVar2 < 1) {
          FID_conflict__free(_Memory);
          _Memory = (void *)0x0;
        }
        else if (_Memory == (void *)0x0) {
          _Memory = (void *)FUN_004c554b();
        }
        else {
          _Memory = (void *)FUN_004c553b(_Memory,uVar2 << 2);
        }
      }
      *(void **)((int)_Memory + local_1c * 4) = pvVar7;
      local_1c = iVar6;
    }
LAB_006016e3:
    EnterCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x78));
    pvVar7 = *(void **)(in_ECX + 0x90);
    *(void **)(in_ECX + 0x90) = _Memory;
    uVar2 = *(uint *)(in_ECX + 0x94);
    *(uint *)(in_ECX + 0x94) = local_20;
    uVar3 = *(uint *)(in_ECX + 0x98);
    *(int *)(in_ECX + 0x98) = local_1c;
    LeaveCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x78));
    iVar6 = *(int *)(in_ECX + 0x98);
    _Memory = pvVar7;
joined_r0x0060172f:
    iVar6 = iVar6 + -1;
    if (-1 < iVar6) {
      uVar4 = 0;
      if (0 < (int)uVar3) {
        do {
          if (*(int *)(*(int *)(in_ECX + 0x90) + iVar6 * 4) == *(int *)((int)_Memory + uVar4 * 4)) {
            if (uVar4 < uVar3) {
              uVar3 = uVar3 - 1;
              pvVar7 = (void *)((int)_Memory + uVar4 * 4);
              if (0 < (int)(uVar3 - uVar4)) {
                FUN_004c1df0(pvVar7,(int)pvVar7 + 4,(uVar3 - uVar4) * 4);
              }
            }
            if ((((int)(uVar3 * 2) < (int)uVar2) && ((int)uVar3 < (int)uVar2)) && (uVar2 != uVar3))
            {
              uVar2 = uVar3;
              if ((int)uVar3 < 1) {
                FID_conflict__free(_Memory);
                _Memory = (void *)0x0;
              }
              else if (_Memory == (void *)0x0) {
                _Memory = (void *)FUN_004c554b();
              }
              else {
                _Memory = (void *)FUN_004c553b(_Memory,uVar3 * 4);
              }
            }
            break;
          }
          uVar4 = uVar4 + 1;
        } while ((int)uVar4 < (int)uVar3);
      }
      goto joined_r0x0060172f;
    }
    local_11 = 1;
    while (0 < (int)uVar3) {
      iVar6 = *(int *)((int)_Memory + uVar3 * 4 + -4);
      uVar3 = uVar3 - 1;
      if (iVar6 != 0) {
        FID_conflict__free(*(void **)(iVar6 + 0x20));
        FUN_004bfe14(iVar6,0xa8);
      }
    }
  }
  FID_conflict__free(_Memory);
  ExceptionList = local_10;
  return local_11;
}

