// rea decompile_all
// name: FUN_0060aa70
// address: 0x60aa70
// body: available
// range: 0x60aa70-0x60abef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0060aa70(int *param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  float10 fVar4;
  double dVar5;
  LARGE_INTEGER local_50;
  double local_48;
  LPCRITICAL_SECTION local_40;
  int local_3c;
  int local_38;
  void *local_34 [8];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0071c451;
  local_10 = ExceptionList;
  local_14 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  fVar4 = (float10)(**(code **)(*param_1 + 0x38))(local_14);
  local_48 = (double)fVar4;
  uVar1 = (**(code **)(*param_1 + 0x34))();
  (**(code **)(*param_1 + 0x44))(local_34);
  local_3c = FUN_00637390();
  FID_conflict__free(local_34[0]);
  (**(code **)(*param_1 + 0x40))(local_34);
  iVar2 = FUN_00637390();
  FID_conflict__free(local_34[0]);
  local_40 = (LPCRITICAL_SECTION)(local_38 + 0xc);
  EnterCriticalSection(local_40);
  local_8 = 0;
  *(undefined4 *)(local_38 + 0x30) = uVar1;
  lpCriticalSection = (LPCRITICAL_SECTION)(local_38 + 400);
  *(double *)(local_38 + 0x28) = local_48;
  *(int *)(local_38 + 0x38) = local_3c;
  *(int *)(local_38 + 0x3c) = iVar2;
  EnterCriticalSection(lpCriticalSection);
  *(double *)(local_38 + 0x1b8) = local_48;
  *(undefined4 *)(local_38 + 0x1b0) = 0;
  dVar5 = local_48;
  QueryPerformanceCounter(&local_50);
  FUN_006f5730();
  *(double *)(local_38 + 0x188) = dVar5 * _DAT_00c8a910;
  LeaveCriticalSection(lpCriticalSection);
  FID_conflict__free(*(void **)(local_38 + 0x40));
  iVar3 = local_3c;
  if (local_3c < iVar2) {
    iVar3 = iVar2;
  }
  uVar1 = FUN_004c5556(iVar3 + 2,4);
  *(undefined4 *)(local_38 + 0x40) = uVar1;
  if (*(int **)(local_38 + 8) != (int *)0x0) {
    if (*(char *)(local_38 + 0x34) != '\0') {
      (**(code **)(**(int **)(local_38 + 8) + 0xc))();
    }
    uVar1 = *(undefined4 *)(local_38 + 8);
    FUN_0060afc0(0);
    FUN_0060afc0(uVar1);
  }
  LeaveCriticalSection(local_40);
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

