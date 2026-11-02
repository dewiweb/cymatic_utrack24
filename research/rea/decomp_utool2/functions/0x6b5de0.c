// rea decompile_all
// name: FUN_006b5de0
// address: 0x6b5de0
// body: available
// range: 0x6b5de0-0x6b5f1d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int * FUN_006b5de0(int *param_1)

{
  undefined4 *puVar1;
  bool bVar2;
  undefined4 *puVar3;
  int in_ECX;
  int *_Memory;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int local_c;
  int local_8;
  
  local_8 = in_ECX + 0x8c;
  iVar5 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  while( true ) {
    iVar7 = 0;
    iVar4 = *(int *)(local_8 + 0x90) + -1;
    if (-1 < iVar4) {
      puVar3 = (undefined4 *)(*(int *)(local_8 + 0x88) + iVar4 * 4);
      iVar8 = iVar7;
      do {
        if (((*(byte *)((undefined4 *)*puVar3 + 2) & 2) == 0) && (**(char **)*puVar3 != '\0')) {
          bVar2 = true;
        }
        else {
          bVar2 = false;
        }
        puVar3 = puVar3 + -1;
        iVar7 = iVar8 + 1;
        if (!bVar2) {
          iVar7 = iVar8;
        }
        iVar4 = iVar4 + -1;
        iVar8 = iVar7;
      } while (-1 < iVar4);
    }
    if (iVar7 <= iVar5) break;
    puVar3 = (undefined4 *)FUN_0069b4e0(&local_c,iVar5);
    iVar7 = param_1[2];
    iVar4 = iVar7 + 1;
    if (param_1[1] < iVar4) {
      if (iVar4 < 0) {
        iVar4 = iVar7 + 2;
      }
      uVar6 = iVar7 + 9 + (iVar4 >> 1) & 0xfffffff8;
      if (param_1[1] != uVar6) {
        if ((int)uVar6 < 1) {
          FID_conflict__free((void *)*param_1);
          *param_1 = 0;
        }
        else if (*param_1 == 0) {
          iVar7 = FUN_004c554b();
          *param_1 = iVar7;
        }
        else {
          iVar7 = FUN_004c553b(*param_1,uVar6 * 4);
          *param_1 = iVar7;
        }
        param_1[1] = uVar6;
      }
    }
    iVar7 = param_1[2];
    param_1[2] = iVar7 + 1;
    puVar1 = (undefined4 *)(*param_1 + iVar7 * 4);
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = *puVar3;
      *puVar3 = &DAT_00bfe12c;
    }
    _Memory = (int *)(local_c + -8);
    if (_Memory != &DAT_00bfe124) {
      LOCK();
      iVar7 = *_Memory;
      *_Memory = *_Memory + -1;
      UNLOCK();
      if (iVar7 == 0) {
        FID_conflict__free(_Memory);
      }
    }
    iVar5 = iVar5 + 1;
  }
  return param_1;
}

