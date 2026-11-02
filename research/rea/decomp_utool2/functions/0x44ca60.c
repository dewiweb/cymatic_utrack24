// rea decompile_all
// name: FUN_0044ca60
// address: 0x44ca60
// body: available
// range: 0x44ca60-0x44cb96 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0044ca60(undefined4 param_1,undefined4 param_2,int param_3,undefined4 *param_4)

{
  LPCRITICAL_SECTION lpCriticalSection;
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  DWORD DVar5;
  int in_ECX;
  undefined4 local_1c;
  undefined4 local_18;
  LPCRITICAL_SECTION local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006ff938;
  local_10 = ExceptionList;
  uVar2 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  lpCriticalSection = (LPCRITICAL_SECTION)(in_ECX + 0x44);
  local_14 = lpCriticalSection;
  EnterCriticalSection(lpCriticalSection);
  local_8 = 0;
  if (*(int *)(in_ECX + 0x40) == 0) {
    if (*(int *)(in_ECX + 0x3c) != 0) {
      iVar3 = FUN_006358c0(uVar2);
      if (iVar3 != 0) {
        puVar4 = (undefined4 *)FUN_00603020(iVar3);
        puVar1 = *(undefined4 **)(in_ECX + 0x40);
        if ((puVar1 != puVar4) &&
           (*(undefined4 **)(in_ECX + 0x40) = puVar4, puVar1 != (undefined4 *)0x0)) {
          (**(code **)*puVar1)(1);
        }
      }
    }
    if (*(int *)(in_ECX + 0x40) != 0) {
      DVar5 = timeGetTime();
      uVar2 = DAT_00c8a644;
      if ((DAT_00c8a644 <= DVar5) || (uVar2 = DAT_00c8a644 - 1000, DVar5 < uVar2)) {
        DAT_00c8a644 = DVar5;
      }
      *(DWORD *)(in_ECX + 0x5c) = DVar5;
      FUN_00632170(in_ECX,uVar2);
    }
  }
  if (*(int *)(in_ECX + 0x40) != 0) {
    iVar3 = *(int *)(*(int *)(in_ECX + 0x40) + 0x20);
    if ((int)param_4[2] < iVar3) {
      local_1c = 0;
      local_18 = 0;
      FUN_0044d910(param_4,&local_1c,iVar3 - param_4[2]);
    }
    (**(code **)(**(int **)(in_ECX + 0x40) + 8))
              (param_1,param_2,param_3,param_3 >> 0x1f,*param_4,(*(int **)(in_ECX + 0x40))[8]);
    DVar5 = timeGetTime();
    if ((DAT_00c8a644 <= DVar5) || (DVar5 < DAT_00c8a644 - 1000)) {
      DAT_00c8a644 = DVar5;
    }
    *(DWORD *)(in_ECX + 0x5c) = DVar5;
  }
  LeaveCriticalSection(lpCriticalSection);
  ExceptionList = local_10;
  return;
}

