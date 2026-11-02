// rea decompile_all
// name: FUN_0044cd10
// address: 0x44cd10
// body: available
// range: 0x44cd10-0x44cfe9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0044cd78) */

uint FUN_0044cd10(void)

{
  uint *puVar1;
  float fVar2;
  uint uVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  void *_Memory;
  void *_Memory_00;
  int iVar9;
  int iVar10;
  DWORD DVar11;
  uint uVar12;
  char cVar13;
  int in_ECX;
  void *pvVar14;
  int iVar15;
  int local_3c;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006ff978;
  local_10 = ExceptionList;
  uVar5 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  iVar8 = *(int *)(in_ECX + 0x1c);
  iVar7 = *(int *)(in_ECX + 0x14);
  uVar12 = *(uint *)(in_ECX + 0x18);
  uVar3 = *(uint *)(in_ECX + 0x10);
  if ((iVar8 <= iVar7) && ((iVar8 < iVar7 || (uVar12 < uVar3)))) {
    iVar9 = *(int *)(*(int *)(in_ECX + 0x38) + 0x3c);
    uVar6 = (uint)((longlong)iVar9 * 0x100);
    if (CONCAT44((iVar7 - iVar8) - (uint)(uVar3 < uVar12),uVar3 - uVar12) < (longlong)iVar9 * 0x100)
    {
      uVar6 = uVar3 - uVar12;
    }
    if (0 < (int)uVar6) {
      iVar7 = __alldiv(uVar12,iVar8,iVar9,iVar9 >> 0x1f);
      iVar8 = __alldiv(uVar6 + uVar12,((int)uVar6 >> 0x1f) + iVar8 + (uint)CARRY4(uVar6,uVar12),
                       iVar9,iVar9 >> 0x1f);
      iVar8 = iVar8 - iVar7;
      _Memory = (void *)FUN_004c554b(*(int *)(in_ECX + 0x28) * iVar8 * 2,uVar5);
      local_8 = 0;
      _Memory_00 = (void *)FUN_004c554b(*(int *)(in_ECX + 0x28) << 2);
      iVar9 = 0;
      if (0 < *(int *)(in_ECX + 0x28)) {
        pvVar14 = _Memory;
        do {
          *(void **)((int)_Memory_00 + iVar9 * 4) = pvVar14;
          iVar9 = iVar9 + 1;
          pvVar14 = (void *)((int)pvVar14 + iVar8 * 2);
        } while (iVar9 < *(int *)(in_ECX + 0x28));
      }
      pvVar14 = (void *)FUN_004c554b(*(int *)(in_ECX + 0x28) << 3,uVar5);
      local_8 = CONCAT31(local_8._1_3_,2);
      if (0 < iVar8) {
        iVar9 = 0;
        do {
          iVar15 = *(int *)(*(int *)(in_ECX + 0x38) + 0x3c);
          iVar10 = (iVar7 + iVar9) * iVar15;
          (**(code **)(**(int **)(in_ECX + 0x40) + 8))
                    (iVar10,iVar10 >> 0x1f,iVar15,iVar15 >> 0x1f,pvVar14,
                     *(undefined4 *)(in_ECX + 0x28));
          iVar15 = 0;
          if (0 < *(int *)(in_ECX + 0x28)) {
            do {
              fVar2 = *(float *)((int)pvVar14 + iVar15 * 8 + 4);
              iVar10 = *(int *)((int)_Memory_00 + iVar15 * 4);
              local_3c = SUB84((double)(*(float *)((int)pvVar14 + iVar15 * 8) * 127.0) +
                               6755399441055744.0,0);
              if (local_3c < -0x80) {
                local_3c = -0x80;
              }
              else if (0x7f < local_3c) {
                local_3c = 0x7f;
              }
              cVar13 = (char)local_3c;
              *(char *)(iVar10 + iVar9 * 2) = cVar13;
              local_3c = SUB84((double)(fVar2 * 127.0) + 6755399441055744.0,0);
              if (local_3c < -0x80) {
                local_3c = -0x80;
              }
              else if (0x7f < local_3c) {
                local_3c = 0x7f;
              }
              cVar4 = (char)local_3c;
              *(char *)(iVar10 + 1 + iVar9 * 2) = cVar4;
              if (cVar13 == cVar4) {
                if (cVar4 == '\x7f') {
                  *(char *)(iVar10 + iVar9 * 2) = cVar13 + -1;
                }
                else {
                  *(char *)(iVar10 + 1 + iVar9 * 2) = cVar4 + '\x01';
                }
              }
              iVar15 = iVar15 + 1;
            } while (iVar15 < *(int *)(in_ECX + 0x28));
          }
          iVar9 = iVar9 + 1;
        } while (iVar9 < iVar8);
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x44));
      FUN_0060e5e0(_Memory_00,iVar7,*(undefined4 *)(in_ECX + 0x28),iVar8);
      EnterCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x44));
      puVar1 = (uint *)(in_ECX + 0x18);
      uVar12 = *puVar1;
      *puVar1 = *puVar1 + uVar6;
      *(int *)(in_ECX + 0x1c) =
           *(int *)(in_ECX + 0x1c) + ((int)uVar6 >> 0x1f) + (uint)CARRY4(uVar12,uVar6);
      DVar11 = timeGetTime();
      if ((DAT_00c8a644 <= DVar11) || (DVar11 < DAT_00c8a644 - 1000)) {
        DAT_00c8a644 = DVar11;
      }
      *(DWORD *)(in_ECX + 0x5c) = DVar11;
      FID_conflict__free(pvVar14);
      FID_conflict__free(_Memory_00);
      FID_conflict__free(_Memory);
    }
  }
  uVar12 = *(uint *)(in_ECX + 0x1c);
  if ((*(int *)(in_ECX + 0x14) <= (int)uVar12) &&
     ((*(int *)(in_ECX + 0x14) < (int)uVar12 ||
      (uVar12 = *(uint *)(in_ECX + 0x18), *(uint *)(in_ECX + 0x10) <= uVar12)))) {
    ExceptionList = local_10;
    return CONCAT31((int3)(uVar12 >> 8),1);
  }
  ExceptionList = local_10;
  return uVar12 & 0xffffff00;
}

