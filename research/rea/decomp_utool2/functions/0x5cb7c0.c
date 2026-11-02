// rea decompile_all
// name: FUN_005cb7c0
// address: 0x5cb7c0
// body: available
// range: 0x5cb7c0-0x5cb917 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005cb7c0(int *param_1)

{
  undefined4 *lParam;
  uint uVar1;
  int iVar2;
  BOOL BVar3;
  int in_ECX;
  int *piVar4;
  float10 fVar5;
  double dVar6;
  double dVar7;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0071af72;
  local_10 = ExceptionList;
  uVar1 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *(undefined8 *)(in_ECX + 0x1f0) = 0;
  fVar5 = (float10)(**(code **)(*param_1 + 0x38))(uVar1);
  iVar2 = (**(code **)(*param_1 + 0x34))();
  dVar7 = 0.0;
  if ((0.0 < (double)fVar5) && (0 < iVar2)) {
    dVar6 = ((double)iVar2 * 1000.0) / (double)fVar5;
    if (0.0 < dVar6) {
      dVar7 = 1.0 / dVar6;
    }
    *(double *)(in_ECX + 0x1f8) = dVar7;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x1c0));
  local_8 = 0;
  iVar2 = *(int *)(in_ECX + 0xa4);
  while (iVar2 = iVar2 + -1, -1 < iVar2) {
    (**(code **)(**(int **)(*(int *)(in_ECX + 0x9c) + iVar2 * 4) + 8))(param_1);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x1c0));
  if (0 < *(int *)(in_ECX + 0x18)) {
    piVar4 = (int *)(*(int *)(in_ECX + 8) + 0xc);
    LOCK();
    iVar2 = *piVar4;
    if (iVar2 == 0) {
      *piVar4 = 1;
      iVar2 = 0;
    }
    UNLOCK();
    if (iVar2 == 0) {
      lParam = *(undefined4 **)(in_ECX + 8);
      if ((DAT_00c8a658 != 0) && (*(char *)(DAT_00c8a658 + 4) == '\0')) {
        LOCK();
        lParam[1] = lParam[1] + 1;
        UNLOCK();
        BVar3 = PostMessageW(DAT_00c8a650,0x47b,0,(LPARAM)lParam);
        if (BVar3 != 0) {
          ExceptionList = local_10;
          return;
        }
      }
      if (lParam != (undefined4 *)0x0) {
        piVar4 = lParam + 1;
        LOCK();
        *piVar4 = *piVar4 + 1;
        UNLOCK();
        LOCK();
        iVar2 = *piVar4;
        *piVar4 = *piVar4 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)*lParam)(1);
        }
      }
      LOCK();
      *(undefined4 *)(*(int *)(in_ECX + 8) + 0xc) = 0;
      UNLOCK();
    }
  }
  ExceptionList = local_10;
  return;
}

