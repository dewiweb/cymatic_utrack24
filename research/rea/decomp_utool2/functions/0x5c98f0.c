// rea decompile_all
// name: FUN_005c98f0
// address: 0x5c98f0
// body: available
// range: 0x5c98f0-0x5c9aa8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x005c99d4) */

void FUN_005c98f0(int *param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int in_ECX;
  int *piVar5;
  longlong lVar6;
  longlong lVar7;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0071ad54;
  local_10 = ExceptionList;
  uVar2 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  EnterCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x34));
  local_8 = 0;
  if ((*(int *)(in_ECX + 0x30) == 0) || (*(char *)(in_ECX + 0x55) != '\0')) {
    if (*param_1 != 0) {
      FUN_00409ea0(param_1[1],param_1[2]);
    }
    *(undefined1 *)(in_ECX + 0x55) = 1;
  }
  else {
    (**(code **)(**(int **)(in_ECX + 0x30) + 0xc))(param_1,uVar2);
    if (*(char *)(in_ECX + 0x54) == '\0') {
      iVar4 = *(int *)*param_1;
      while (iVar4 = iVar4 + -1, -1 < iVar4) {
        iVar3 = 0x100;
        if (param_1[2] < 0x100) {
          iVar3 = param_1[2];
        }
        FUN_00409da0(iVar4,param_1[1],iVar3,0x3f800000,0);
      }
      if (0x100 < param_1[2]) {
        FUN_00409ea0(param_1[1] + 0x100,param_1[2] + -0x100);
      }
    }
    lVar6 = (**(code **)(**(int **)(in_ECX + 0x2c) + 0x18))();
    lVar7 = (**(code **)(**(int **)(in_ECX + 0x2c) + 0x14))();
    if ((lVar6 + 1 < lVar7) &&
       (cVar1 = (**(code **)(**(int **)(in_ECX + 0x2c) + 0x1c))(), cVar1 == '\0')) {
      *(undefined1 *)(in_ECX + 0x54) = 0;
      *(undefined1 *)(in_ECX + 0x71) = 1;
      if (0 < *(int *)(in_ECX + 0x1c)) {
        piVar5 = (int *)(*(int *)(in_ECX + 0xc) + 0xc);
        LOCK();
        iVar4 = *piVar5;
        if (iVar4 == 0) {
          *piVar5 = 1;
          iVar4 = 0;
        }
        UNLOCK();
        if ((iVar4 == 0) && (cVar1 = FUN_0063e270(), cVar1 == '\0')) {
          LOCK();
          *(undefined4 *)(*(int *)(in_ECX + 0xc) + 0xc) = 0;
          UNLOCK();
        }
      }
    }
    *(bool *)(in_ECX + 0x55) = *(char *)(in_ECX + 0x54) == '\0';
    iVar4 = *(int *)*param_1;
    while (iVar4 = iVar4 + -1, -1 < iVar4) {
      FUN_00409da0(iVar4,param_1[1],param_1[2],*(undefined4 *)(in_ECX + 0x50),
                   *(undefined4 *)(in_ECX + 0x4c));
    }
  }
  *(undefined4 *)(in_ECX + 0x50) = *(undefined4 *)(in_ECX + 0x4c);
  LeaveCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x34));
  ExceptionList = local_10;
  return;
}

