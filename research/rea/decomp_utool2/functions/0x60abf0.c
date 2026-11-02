// rea decompile_all
// name: FUN_0060abf0
// address: 0x60abf0
// body: available
// range: 0x60abf0-0x60afb7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0060abf0(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  LPCRITICAL_SECTION lpCriticalSection;
  uint _Size;
  int *piVar1;
  uint uVar2;
  int in_ECX;
  int extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  int extraout_ECX_02;
  undefined4 extraout_ECX_03;
  int iVar3;
  undefined4 *puVar4;
  LPCRITICAL_SECTION lpCriticalSection_00;
  int iVar5;
  int iVar6;
  int local_b8;
  int local_b4;
  undefined4 local_b0;
  void *local_a8;
  uint local_20;
  int local_1c;
  uint local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  iVar5 = param_2;
  local_8 = 0xffffffff;
  puStack_c = &LAB_0071c49d;
  local_10 = ExceptionList;
  uVar2 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *(undefined4 *)(in_ECX + 0x17c) = 0;
  FUN_005ca990(in_ECX + 0x174,param_5);
  iVar6 = 0;
  if (param_4 < param_2) {
    local_14 = param_2 - param_4;
    local_8 = 0;
    if ((param_5 != *(int *)(in_ECX + 0x48)) ||
       (iVar3 = local_14, local_14 != *(int *)(in_ECX + 0x44))) {
      local_18 = param_5 + 3U & 0xfffffffc;
      local_1c = local_14 * 4;
      local_20 = local_1c + 0x13U & 0xfffffff0;
      _Size = local_20 + (local_18 * local_14 + 8) * 4;
      if (*(uint *)(in_ECX + 0x4c) < _Size) {
        *(uint *)(in_ECX + 0x4c) = _Size;
        FUN_00403500(_Size,CONCAT31((int3)(local_18 * local_14 >> 8),
                                    *(char *)(in_ECX + 0xd8) != '\0'));
        *(undefined4 *)(in_ECX + 0x50) = *(undefined4 *)(in_ECX + 0x54);
      }
      else if (*(char *)(in_ECX + 0xd8) != '\0') {
        _memset(*(void **)(in_ECX + 0x54),0,_Size);
      }
      iVar6 = 0;
      iVar3 = *(int *)(in_ECX + 0x54) + local_20;
      if (0 < local_14) {
        do {
          *(int *)(*(int *)(in_ECX + 0x50) + iVar6 * 4) = iVar3;
          iVar6 = iVar6 + 1;
          iVar3 = iVar3 + local_18 * 4;
        } while (iVar6 < local_14);
      }
      *(undefined4 *)(local_1c + *(int *)(in_ECX + 0x50)) = 0;
      *(int *)(in_ECX + 0x48) = param_5;
      *(int *)(in_ECX + 0x44) = local_14;
      iVar3 = local_1c;
    }
    iVar6 = 0;
    if (0 < param_4) {
      local_18 = param_5 * 4;
      local_1c = param_3 - param_1;
      local_14 = param_4;
      do {
        iVar3 = iVar6 * 4;
        *(undefined4 *)(*(int *)(in_ECX + 0x40) + iVar3) =
             *(undefined4 *)(iVar3 + param_1 + local_1c);
        FUN_004c2c30(*(undefined4 *)(*(int *)(in_ECX + 0x40) + iVar3),
                     *(undefined4 *)(iVar3 + param_1),local_18,uVar2);
        iVar6 = iVar6 + 1;
        local_14 = local_14 + -1;
        iVar3 = extraout_ECX_00;
      } while (local_14 != 0);
    }
    local_14 = param_4;
    if (param_4 < param_2) {
      local_1c = param_5 << 2;
      param_2 = 0;
      do {
        *(undefined1 *)(in_ECX + 0xd8) = 0;
        *(undefined4 *)(*(int *)(in_ECX + 0x40) + iVar6 * 4) =
             *(undefined4 *)(param_2 + *(int *)(in_ECX + 0x50));
        FUN_004c2c30(*(undefined4 *)(*(int *)(in_ECX + 0x40) + iVar6 * 4),
                     *(undefined4 *)(param_1 + local_14 * 4),local_1c,uVar2);
        local_14 = local_14 + 1;
        iVar3 = param_2 + 4;
        iVar6 = iVar6 + 1;
        param_2 = iVar3;
      } while (local_14 < iVar5);
    }
  }
  else {
    iVar3 = extraout_ECX;
    if (0 < param_2) {
      local_18 = param_5 * 4;
      local_1c = param_3 - param_1;
      local_14 = param_2;
      do {
        iVar5 = iVar6 * 4;
        *(undefined4 *)(*(int *)(in_ECX + 0x40) + iVar5) =
             *(undefined4 *)(param_1 + iVar5 + local_1c);
        FUN_004c2c30(*(undefined4 *)(*(int *)(in_ECX + 0x40) + iVar5),
                     *(undefined4 *)(param_1 + iVar5),local_18,uVar2);
        iVar6 = iVar6 + 1;
        local_14 = local_14 + -1;
      } while (local_14 != 0);
      local_14 = 0;
      iVar3 = extraout_ECX_01;
    }
    if (param_2 < param_4) {
      param_1 = param_4 - param_2;
      puVar4 = (undefined4 *)(param_3 + param_2 * 4);
      do {
        *(undefined4 *)(*(int *)(in_ECX + 0x40) + iVar6 * 4) = *puVar4;
        _memset(*(void **)(*(int *)(in_ECX + 0x40) + iVar6 * 4),0,param_5 * 4);
        puVar4 = puVar4 + 1;
        iVar6 = iVar6 + 1;
        param_1 = param_1 + -1;
        iVar3 = extraout_ECX_02;
      } while (param_1 != 0);
    }
  }
  local_8 = 1;
  local_b4 = param_5;
  local_b0 = 0;
  local_a8 = (void *)0x0;
  local_b8 = iVar6;
  FUN_00409f00(*(undefined4 *)(in_ECX + 0x40),iVar3);
  lpCriticalSection = (LPCRITICAL_SECTION)(in_ECX + 0xc);
  local_8 = 2;
  EnterCriticalSection(lpCriticalSection);
  local_8._0_1_ = 3;
  if (*(int *)(in_ECX + 8) != 0) {
    lpCriticalSection_00 = (LPCRITICAL_SECTION)(*(int *)(in_ECX + 8) + 0x50);
    EnterCriticalSection(lpCriticalSection_00);
    local_8._0_1_ = 4;
    piVar1 = *(int **)(in_ECX + 8);
    if ((char)piVar1[0x12] == '\0') {
      if (piVar1[0x13] == 1) {
        FUN_00425eb0(&local_b8,piVar1);
        (**(code **)(**(int **)(in_ECX + 8) + 0x10))(in_ECX + 0xdc,in_ECX + 0x174);
        FUN_00425e30(in_ECX + 0xdc,extraout_ECX_03);
        LeaveCriticalSection(lpCriticalSection_00);
        LeaveCriticalSection(lpCriticalSection);
      }
      else {
        (**(code **)(*piVar1 + 0x14))(&local_b8,in_ECX + 0x174);
        LeaveCriticalSection(lpCriticalSection_00);
        LeaveCriticalSection(lpCriticalSection);
      }
      goto LAB_0060af96;
    }
    LeaveCriticalSection(lpCriticalSection_00);
  }
  LeaveCriticalSection(lpCriticalSection);
  iVar5 = 0;
  if (0 < param_4) {
    do {
      _memset(*(void **)(param_3 + iVar5 * 4),0,param_5 * 4);
      iVar5 = iVar5 + 1;
    } while (iVar5 < param_4);
  }
LAB_0060af96:
  FID_conflict__free(local_a8);
  ExceptionList = local_10;
  return;
}

