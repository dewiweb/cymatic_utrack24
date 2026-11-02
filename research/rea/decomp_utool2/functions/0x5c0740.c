// rea decompile_all
// name: FUN_005c0740
// address: 0x5c0740
// body: available
// range: 0x5c0740-0x5c08de inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005c0740(void)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int in_ECX;
  int iVar8;
  void *_Memory;
  int iVar9;
  int iVar10;
  uint local_2c;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_0071a53d;
  local_10 = ExceptionList;
  uVar4 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  _Memory = (void *)0x0;
  iVar9 = 0;
  local_2c = 0;
  local_8 = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x30));
  iVar8 = *(int *)(in_ECX + 0xc) + -1;
  if (-1 < iVar8) {
    bVar3 = (byte)iVar8 & 0x1f;
    uVar5 = 1 << bVar3 | 1U >> 0x20 - bVar3;
    iVar10 = iVar9;
    do {
      iVar9 = iVar10;
      if ((iVar8 <= *(int *)(in_ECX + 0x28)) && (-1 < iVar8)) {
        iVar6 = *(int *)(in_ECX + 0x10);
        if (iVar6 == 0) {
          iVar6 = in_ECX + 0x14;
        }
        if ((*(uint *)(iVar6 + (iVar8 >> 5) * 4) & uVar5) != 0) {
          uVar1 = *(undefined4 *)(*(int *)(in_ECX + 4) + iVar8 * 4);
          iVar9 = iVar10 + 1;
          if ((int)local_2c < iVar9) {
            iVar6 = iVar9;
            if (iVar9 < 0) {
              iVar6 = iVar10 + 2;
            }
            uVar7 = (iVar6 >> 1) + iVar10 + 9 & 0xfffffff8;
            if (local_2c != uVar7) {
              local_2c = uVar7;
              if ((int)uVar7 < 1) {
                FID_conflict__free(_Memory);
                _Memory = (void *)0x0;
              }
              else if (_Memory == (void *)0x0) {
                _Memory = (void *)FUN_004c554b();
              }
              else {
                _Memory = (void *)FUN_004c553b(_Memory,uVar7 << 2,uVar4);
              }
            }
          }
          *(undefined4 *)((int)_Memory + iVar10 * 4) = uVar1;
        }
      }
      uVar5 = uVar5 >> 1 | (uint)((uVar5 & 1) != 0) << 0x1f;
      iVar8 = iVar8 + -1;
      iVar10 = iVar9;
    } while (-1 < iVar8);
  }
  if (*(int *)(in_ECX + 8) != 0) {
    FID_conflict__free(*(void **)(in_ECX + 4));
    *(undefined4 *)(in_ECX + 4) = 0;
    *(undefined4 *)(in_ECX + 8) = 0;
  }
  *(undefined4 *)(in_ECX + 0xc) = 0;
  LeaveCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x30));
  iVar8 = iVar9;
  while (iVar8 = iVar8 + -1, -1 < iVar8) {
    (**(code **)(**(int **)((int)_Memory + iVar8 * 4) + 8))();
  }
  while (0 < iVar9) {
    puVar2 = *(undefined4 **)((int)_Memory + iVar9 * 4 + -4);
    iVar9 = iVar9 + -1;
    if (puVar2 != (undefined4 *)0x0) {
      (**(code **)*puVar2)(1);
    }
  }
  FID_conflict__free(_Memory);
  ExceptionList = local_10;
  return;
}

