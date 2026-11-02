// rea decompile_all
// name: FUN_005c0b70
// address: 0x5c0b70
// body: available
// range: 0x5c0b70-0x5c0db9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005c0b70(int *param_1)

{
  int *piVar1;
  LPCRITICAL_SECTION lpCriticalSection;
  uint _Size;
  int iVar2;
  uint3 uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int in_ECX;
  uint uVar7;
  int iVar8;
  int iVar9;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0071a566;
  local_10 = ExceptionList;
  uVar4 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  lpCriticalSection = (LPCRITICAL_SECTION)(in_ECX + 0xcc);
  EnterCriticalSection(lpCriticalSection);
  piVar1 = (int *)(in_ECX + 0x28);
  iVar2 = *(int *)(in_ECX + 0x24);
  iVar9 = param_1[2];
  local_8._1_3_ = 0;
  uVar3 = local_8._1_3_;
  local_8._0_1_ = 1;
  local_8._1_3_ = 0;
  if ((iVar9 != *(int *)(in_ECX + 0x2c)) || (iVar2 != *piVar1)) {
    uVar5 = iVar9 + 3U & 0xfffffffc;
    uVar7 = iVar2 * 4 + 0x13U & 0xfffffff0;
    iVar6 = uVar5 * iVar2;
    _Size = uVar7 + (iVar6 + 8) * 4;
    if (*(uint *)(in_ECX + 0x30) < _Size) {
      *(uint *)(in_ECX + 0x30) = _Size;
      FUN_00403500(_Size,CONCAT31((int3)((uint)iVar6 >> 8),*(char *)(in_ECX + 0xbc) != '\0'));
      *(undefined4 *)(in_ECX + 0x34) = *(undefined4 *)(in_ECX + 0x38);
    }
    else if (*(char *)(in_ECX + 0xbc) != '\0') {
      _memset(*(void **)(in_ECX + 0x38),0,_Size);
    }
    iVar6 = 0;
    iVar8 = *(int *)(in_ECX + 0x38) + uVar7;
    if (0 < iVar2) {
      do {
        *(int *)(*(int *)(in_ECX + 0x34) + iVar6 * 4) = iVar8;
        iVar6 = iVar6 + 1;
        iVar8 = iVar8 + uVar5 * 4;
      } while (iVar6 < iVar2);
    }
    *(undefined4 *)(*(int *)(in_ECX + 0x34) + iVar2 * 4) = 0;
    *(int *)(in_ECX + 0x2c) = iVar9;
    *piVar1 = iVar2;
    uVar3 = local_8._1_3_;
  }
  local_8._1_3_ = uVar3;
  local_8 = (uint)local_8._1_3_ << 8;
  iVar9 = 0;
  iVar2 = *(int *)*param_1;
  if (0 < *piVar1) {
    do {
      EnterCriticalSection(lpCriticalSection);
      if ((iVar9 < 0) || (*(int *)(in_ECX + 0x14) <= iVar9)) {
        LeaveCriticalSection(lpCriticalSection);
LAB_005c0cde:
        if (*(char *)(in_ECX + 0xbc) == '\0') {
          _memset(*(void **)(*(int *)(in_ECX + 0x34) + iVar9 * 4),0,param_1[2] << 2);
        }
      }
      else {
        iVar6 = *(int *)(*(int *)(in_ECX + 0xc) + iVar9 * 4);
        LeaveCriticalSection(lpCriticalSection);
        if ((iVar6 < 0) || (iVar2 <= iVar6)) goto LAB_005c0cde;
        FUN_00425840(iVar9,0,*param_1,iVar6,param_1[1],param_1[2]);
      }
      iVar9 = iVar9 + 1;
    } while (iVar9 < *piVar1);
  }
  *(int *)(in_ECX + 200) = param_1[2];
  (**(code **)(**(int **)(in_ECX + 4) + 0xc))(in_ECX + 0xc0,uVar4);
  if (*param_1 != 0) {
    FUN_00409ea0(param_1[1],param_1[2]);
  }
  iVar9 = 0;
  if (0 < *(int *)(in_ECX + 0x24)) {
    do {
      EnterCriticalSection(lpCriticalSection);
      if ((iVar9 < 0) || (*(int *)(in_ECX + 0x20) <= iVar9)) {
        LeaveCriticalSection(lpCriticalSection);
      }
      else {
        iVar6 = *(int *)(*(int *)(in_ECX + 0x18) + iVar9 * 4);
        LeaveCriticalSection(lpCriticalSection);
        if ((-1 < iVar6) && (iVar6 < iVar2)) {
          FUN_004258c0(iVar6,param_1[1],piVar1,iVar9,iVar6,param_1[2],0x3f800000);
        }
      }
      iVar9 = iVar9 + 1;
    } while (iVar9 < *(int *)(in_ECX + 0x24));
  }
  LeaveCriticalSection(lpCriticalSection);
  ExceptionList = local_10;
  return;
}

