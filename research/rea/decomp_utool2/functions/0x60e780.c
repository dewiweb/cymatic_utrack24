// rea decompile_all
// name: FUN_0060e780
// address: 0x60e780
// body: available
// range: 0x60e780-0x60e985 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0060e780(uint param_1,int param_2,int *param_3,undefined4 param_4,uint param_5)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  void *_Memory;
  void *_Memory_00;
  int iVar5;
  char cVar6;
  int in_ECX;
  int iVar7;
  int iVar8;
  int iVar9;
  void *pvVar10;
  float fVar11;
  double dVar12;
  int local_34;
  float fStack_18;
  float fStack_14;
  int iStack_10;
  
  iVar4 = *(int *)(in_ECX + 0x20);
  iVar3 = __alldiv(param_1,param_2,iVar4,iVar4 >> 0x1f);
  uVar1 = iVar4 - 1;
  iVar4 = __alldiv(uVar1 + param_5 + param_1,
                   ((int)uVar1 >> 0x1f) + ((int)param_5 >> 0x1f) + (uint)CARRY4(uVar1,param_5) +
                   param_2 + (uint)CARRY4(uVar1 + param_5,param_1),iVar4,iVar4 >> 0x1f);
  iVar4 = iVar4 - iVar3;
  if (0 < iVar4) {
    iVar9 = *(int *)(in_ECX + 0x1c);
    if (*param_3 < *(int *)(in_ECX + 0x1c)) {
      iVar9 = *param_3;
    }
    _Memory = (void *)FUN_004c554b(iVar9 * iVar4 * 2);
    _Memory_00 = (void *)FUN_004c554b(iVar9 * 4);
    local_34 = 0;
    if (0 < iVar9) {
      fVar11 = 127.0;
      dVar12 = 6755399441055744.0;
      pvVar10 = _Memory;
      do {
        iVar8 = 0;
        *(void **)((int)_Memory_00 + local_34 * 4) = pvVar10;
        if (0 < iVar4) {
          do {
            iVar7 = *(int *)(in_ECX + 0x20);
            iVar5 = param_5 - iVar7 * iVar8;
            if (iVar5 < iVar7) {
              iVar7 = iVar5;
            }
            FUN_00425450(iVar7);
            iStack_10 = SUB84((double)(fStack_18 * fVar11) + dVar12,0);
            if (iStack_10 < -0x80) {
              iStack_10 = -0x80;
            }
            else if (0x7f < iStack_10) {
              iStack_10 = 0x7f;
            }
            cVar6 = (char)iStack_10;
            *(char *)((int)pvVar10 + iVar8 * 2) = cVar6;
            iStack_10 = SUB84((double)(fStack_14 * fVar11) + dVar12,0);
            if (iStack_10 < -0x80) {
              iStack_10 = -0x80;
            }
            else if (0x7f < iStack_10) {
              iStack_10 = 0x7f;
            }
            cVar2 = (char)iStack_10;
            *(char *)((int)pvVar10 + iVar8 * 2 + 1) = cVar2;
            if (cVar6 == cVar2) {
              if (cVar2 == '\x7f') {
                *(char *)((int)pvVar10 + iVar8 * 2) = cVar6 + -1;
              }
              else {
                *(char *)((int)pvVar10 + iVar8 * 2 + 1) = cVar2 + '\x01';
              }
            }
            iVar8 = iVar8 + 1;
          } while (iVar8 < iVar4);
        }
        pvVar10 = (void *)((int)pvVar10 + iVar4 * 2);
        local_34 = local_34 + 1;
      } while (local_34 < iVar9);
    }
    FUN_0060e5e0(_Memory_00,iVar3,iVar9,iVar4);
    FID_conflict__free(_Memory_00);
    FID_conflict__free(_Memory);
  }
  return;
}

