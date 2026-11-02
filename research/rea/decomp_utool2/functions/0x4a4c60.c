// rea decompile_all
// name: FUN_004a4c60
// address: 0x4a4c60
// body: available
// range: 0x4a4c60-0x4a4de7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004a4c60(void)

{
  int *piVar1;
  undefined4 *lParam;
  int *piVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  BOOL BVar7;
  int in_ECX;
  int *piVar8;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = -1;
  puStack_c = &LAB_00701fe2;
  local_10 = ExceptionList;
  uVar4 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  iVar6 = *(int *)(in_ECX + 8) * 2;
  iVar5 = 0x6c3;
  if (iVar6 < 0x6c3) {
    iVar5 = iVar6;
  }
  FUN_0063eb10(iVar5);
  iVar6 = FUN_004a4e50(uVar4);
  if (iVar6 != *(int *)(in_ECX + 0x24)) {
    uVar4 = *(uint *)(in_ECX + 0x20);
    *(int *)(in_ECX + 0x24) = iVar6;
    iVar6 = DAT_00c8a67c;
    while (uVar4 = uVar4 - 1, DAT_00c8a67c = iVar6, -1 < (int)uVar4) {
      if ((uVar4 < *(uint *)(in_ECX + 0x20)) &&
         (piVar8 = *(int **)(*(int *)(in_ECX + 0x18) + uVar4 * 4), piVar8 != (int *)0x0)) {
        for (piVar1 = *(int **)(in_ECX + 0x24); piVar8 != piVar1; piVar1 = (int *)piVar1[3]) {
          piVar2 = DAT_00c8a678;
          if (piVar1 == (int *)0x0) goto joined_r0x004a4cf6;
        }
LAB_004a4dcf:
        cVar3 = FUN_006e6420();
        if (cVar3 == '\0') {
LAB_004a4d0f:
          cVar3 = '\0';
        }
        else {
          cVar3 = '\x01';
        }
        iVar6 = DAT_00c8a67c;
        if (*(char *)((int)piVar8 + 0x72) != cVar3) {
          *(char *)((int)piVar8 + 0x72) = cVar3;
          (**(code **)(*piVar8 + 0xb0))();
          iVar6 = DAT_00c8a67c;
        }
      }
    }
    if (iVar6 == 0) {
      operator_new(0xd0);
      local_8 = iVar6;
      DAT_00c8a67c = FUN_006cb960();
    }
    iVar5 = DAT_00c8a67c;
    piVar8 = (int *)(*(int *)(DAT_00c8a67c + 0x1c) + 0xc);
    LOCK();
    iVar6 = *piVar8;
    if (iVar6 == 0) {
      *piVar8 = 1;
      iVar6 = 0;
    }
    UNLOCK();
    if (iVar6 == 0) {
      lParam = *(undefined4 **)(iVar5 + 0x1c);
      if ((DAT_00c8a658 != 0) && (*(char *)(DAT_00c8a658 + 4) == '\0')) {
        LOCK();
        lParam[1] = lParam[1] + 1;
        UNLOCK();
        BVar7 = PostMessageW(DAT_00c8a650,0x47b,0,(LPARAM)lParam);
        if (BVar7 != 0) {
          ExceptionList = local_10;
          return;
        }
      }
      if (lParam != (undefined4 *)0x0) {
        piVar8 = lParam + 1;
        LOCK();
        *piVar8 = *piVar8 + 1;
        UNLOCK();
        LOCK();
        iVar6 = *piVar8;
        *piVar8 = *piVar8 + -1;
        UNLOCK();
        if (iVar6 == 1) {
          (**(code **)*lParam)(1);
        }
      }
      LOCK();
      *(undefined4 *)(*(int *)(iVar5 + 0x1c) + 0xc) = 0;
      UNLOCK();
    }
  }
  ExceptionList = local_10;
  return;
joined_r0x004a4cf6:
  if (piVar2 == piVar8) goto LAB_004a4dcf;
  if (piVar2 == (int *)0x0) goto LAB_004a4d0f;
  piVar2 = (int *)piVar2[3];
  goto joined_r0x004a4cf6;
}

