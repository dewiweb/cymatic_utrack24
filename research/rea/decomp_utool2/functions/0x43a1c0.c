// rea decompile_all
// name: FUN_0043a1c0
// address: 0x43a1c0
// body: available
// range: 0x43a1c0-0x43a2ba inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool FUN_0043a1c0(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int in_ECX;
  void *_Memory;
  void *_Memory_00;
  void *pvVar4;
  uint local_8;
  
  if (*(char *)(in_ECX + 0x28) == '\0') {
    return false;
  }
  _Memory = (void *)0x0;
  iVar1 = 0x20 - *(int *)(in_ECX + 0x14);
  _Memory_00 = (void *)0x0;
  if (0 < iVar1) {
    iVar2 = *(int *)(in_ECX + 0x10);
    FID_conflict__free((void *)0x0);
    _Memory_00 = (void *)FUN_004c554b(iVar2 * param_2 * 4);
    iVar2 = *(int *)(in_ECX + 0x10);
    FID_conflict__free((void *)0x0);
    _Memory = (void *)FUN_004c5556(iVar2 + 1,4);
    local_8 = 0;
    if (*(int *)(in_ECX + 0x10) != 0) {
      iVar2 = (int)_Memory - (int)param_1;
      pvVar4 = _Memory_00;
      do {
        if (*param_1 == 0) break;
        *(void **)(iVar2 + (int)param_1) = pvVar4;
        iVar3 = 0;
        if (0 < param_2) {
          do {
            *(int *)((int)pvVar4 + iVar3 * 4) =
                 *(int *)(*param_1 + iVar3 * 4) >> ((byte)iVar1 & 0x1f);
            iVar3 = iVar3 + 1;
          } while (iVar3 < param_2);
        }
        local_8 = local_8 + 1;
        pvVar4 = (void *)((int)pvVar4 + param_2 * 4);
        param_1 = param_1 + 1;
      } while (local_8 < *(uint *)(in_ECX + 0x10));
    }
  }
  iVar1 = FUN_005f1240(param_2);
  FID_conflict__free(_Memory_00);
  FID_conflict__free(_Memory);
  return iVar1 != 0;
}

