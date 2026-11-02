// rea decompile_all
// name: FUN_005bedf0
// address: 0x5bedf0
// body: available
// range: 0x5bedf0-0x5beef8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005bedf0(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  char cVar5;
  uint uVar6;
  int *piVar7;
  int in_ECX;
  undefined4 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0071a37f;
  local_10 = ExceptionList;
  uVar6 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  EnterCriticalSection((LPCRITICAL_SECTION)(in_ECX + 8));
  local_8 = 0;
  iVar3 = *(int *)(in_ECX + 0x28);
  while (iVar3 = iVar3 + -1, -1 < iVar3) {
    piVar4 = *(int **)(*(int *)(in_ECX + 0x20) + iVar3 * 4);
    if ((piVar4[4] == param_2) &&
       (cVar5 = (**(code **)(*piVar4 + 0x30))(param_1,uVar6), cVar5 != '\0')) {
      piVar7 = (int *)FUN_00424fd0(&local_14);
      piVar7 = (int *)*piVar7;
      if (local_14 != (undefined4 *)0x0) {
        LOCK();
        piVar1 = local_14 + 1;
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)*local_14)(1);
        }
      }
      if ((((piVar7 != (int *)0x0) && (cVar5 = (**(code **)(*piVar7 + 4))(param_2), cVar5 != '\0'))
          && (cVar5 = (**(code **)(*piVar7 + 8))(param_1), cVar5 != '\0')) &&
         ((*(undefined1 *)(piVar4 + 8) = 0, *(char *)((int)piVar4 + 0x21) == '\0' &&
          (*(char *)((int)piVar4 + 0x22) == '\0')))) {
        (**(code **)(*piVar4 + 0xc))(param_3,param_4);
      }
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(in_ECX + 8));
  ExceptionList = local_10;
  return;
}

