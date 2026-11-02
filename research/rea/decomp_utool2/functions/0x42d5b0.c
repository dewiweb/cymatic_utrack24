// rea decompile_all
// name: FUN_0042d5b0
// address: 0x42d5b0
// body: available
// range: 0x42d5b0-0x42d88d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0042d5b0(void)

{
  int iVar1;
  void **ppvVar2;
  char cVar3;
  uint uVar4;
  DWORD DVar5;
  DWORD DVar6;
  int in_ECX;
  int iVar7;
  int iVar8;
  int iVar9;
  code *pcVar10;
  int local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006fdda8;
  uVar4 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  cVar3 = *(char *)(in_ECX + 0x3c);
  ppvVar2 = &local_10;
  local_10 = ExceptionList;
  while ((ExceptionList = ppvVar2, cVar3 == '\0' &&
         (DVar5 = WaitForSingleObject(*(HANDLE *)(in_ECX + 0x2c),100), DVar5 != 0))) {
    cVar3 = *(char *)(in_ECX + 0x3c);
    ppvVar2 = ExceptionList;
  }
  iVar8 = (int)(((double)*(int *)(in_ECX + 0x84) * 1000.0) / *(double *)(in_ECX + 0x8c)) * 3;
  iVar7 = 5;
  if (5 < iVar8) {
    iVar7 = iVar8;
  }
  cVar3 = *(char *)(in_ECX + 0x3c);
  pcVar10 = Sleep_exref;
  do {
    if (cVar3 != '\0') {
      ExceptionList = local_10;
      return;
    }
    DVar5 = timeGetTime();
    if ((DAT_00c8a644 <= DVar5) || (DVar5 < DAT_00c8a644 - 1000)) {
      DAT_00c8a644 = DVar5;
    }
    iVar8 = *(int *)(in_ECX + 0x70);
    iVar9 = 0;
    iVar1 = iVar8;
    while (iVar1 = iVar1 + -1, -1 < iVar1) {
      *(undefined1 *)(*(int *)(*(int *)(in_ECX + 0x68) + iVar1 * 4) + 0x10) = 0;
      iVar9 = iVar8;
    }
    iVar8 = *(int *)(in_ECX + 0x7c) + -1;
    if (-1 < iVar8) {
      iVar9 = iVar9 + 1 + iVar8;
      do {
        iVar1 = iVar8 * 4;
        iVar8 = iVar8 + -1;
        *(undefined1 *)(*(int *)(*(int *)(in_ECX + 0x74) + iVar1) + 4) = 0;
      } while (-1 < iVar8);
    }
    if (iVar9 < 1) {
      if (DAT_00c8a8f0 == (HANDLE)0x0) {
        (*pcVar10)(1,uVar4);
      }
      else {
        WaitForSingleObject(DAT_00c8a8f0,1);
      }
    }
    else {
      local_18 = 3;
      while( true ) {
        iVar8 = *(int *)(in_ECX + 0x70);
        while (iVar8 = iVar8 + -1, -1 < iVar8) {
          iVar1 = *(int *)(*(int *)(in_ECX + 0x68) + iVar8 * 4);
          if ((*(char *)(iVar1 + 0x10) == '\0') && (cVar3 = FUN_0042c4c0(), cVar3 != '\0')) {
            *(undefined1 *)(iVar1 + 0x10) = 1;
            iVar9 = iVar9 + -1;
          }
        }
        iVar8 = *(int *)(in_ECX + 0x7c);
        while (iVar8 = iVar8 + -1, -1 < iVar8) {
          iVar1 = *(int *)(*(int *)(in_ECX + 0x74) + iVar8 * 4);
          if ((*(char *)(iVar1 + 4) == '\0') && (cVar3 = FUN_0042bec0(), cVar3 != '\0')) {
            *(undefined1 *)(iVar1 + 4) = 1;
            iVar9 = iVar9 + -1;
          }
        }
        pcVar10 = Sleep_exref;
        if (iVar9 < 1) goto LAB_0042d788;
        DVar6 = timeGetTime();
        if ((DAT_00c8a644 <= DVar6) || (DVar6 < DAT_00c8a644 - 1000)) {
          DAT_00c8a644 = DVar6;
        }
        if (DVar5 + iVar7 < DVar6) break;
        local_18 = local_18 + -1;
        if (local_18 < 1) {
          Sleep(1);
          local_18 = 3;
        }
        if (*(char *)(in_ECX + 0x3c) != '\0') {
          ExceptionList = local_10;
          return;
        }
      }
      FUN_0042d520();
      pcVar10 = Sleep_exref;
    }
LAB_0042d788:
    EnterCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x208));
    local_8 = 0;
    if (*(char *)(in_ECX + 0x61) == '\0') {
      if (*(char *)(in_ECX + 0x200) == '\0') {
        iVar8 = 0;
        if (0 < *(int *)(in_ECX + 0x16c)) {
          do {
            _memset(*(void **)(*(int *)(in_ECX + 0x178) + iVar8 * 4),0,*(int *)(in_ECX + 0x170) * 4)
            ;
            iVar8 = iVar8 + 1;
          } while (iVar8 < *(int *)(in_ECX + 0x16c));
        }
        *(undefined1 *)(in_ECX + 0x200) = 1;
      }
      pcVar10 = Sleep_exref;
      if (DAT_00c8a8f0 == (HANDLE)0x0) {
        Sleep(1);
      }
      else {
        WaitForSingleObject(DAT_00c8a8f0,1);
        pcVar10 = Sleep_exref;
      }
    }
    else {
      *(undefined1 *)(in_ECX + 0x200) = 0;
      (**(code **)(**(int **)(in_ECX + 0x204) + 4))
                (*(undefined4 *)(in_ECX + 0xe0),*(undefined4 *)(in_ECX + 0xd4),
                 *(undefined4 *)(in_ECX + 0x178),*(undefined4 *)(in_ECX + 0x16c),
                 *(undefined4 *)(in_ECX + 0x84));
    }
    local_8 = 0xffffffff;
    LeaveCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x208));
    cVar3 = *(char *)(in_ECX + 0x3c);
  } while( true );
}

