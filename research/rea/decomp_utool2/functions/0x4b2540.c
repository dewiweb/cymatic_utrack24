// rea decompile_all
// name: FUN_004b2540
// address: 0x4b2540
// body: available
// range: 0x4b2540-0x4b2644 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004b2540(int param_1,uint param_2)

{
  int *_Memory;
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  int in_ECX;
  int iVar5;
  uint uVar6;
  int iVar7;
  undefined1 *local_8;
  
  uVar6 = 0;
  do {
    iVar7 = 0;
    uVar3 = uVar6;
    if (param_2 <= uVar6) {
      return;
    }
    do {
      if (*(char *)(uVar3 + param_1) == '\0') break;
      uVar3 = uVar3 + 1;
      iVar7 = iVar7 + 1;
    } while (uVar3 < param_2);
    if (iVar7 == 0) {
      return;
    }
    FUN_0045ca20(uVar6 + param_1);
    iVar2 = *(int *)(in_ECX + 0xc);
    iVar5 = iVar2 + 1;
    if ((int)*(uint *)(in_ECX + 8) < iVar5) {
      if (iVar5 < 0) {
        iVar5 = iVar2 + 2;
      }
      uVar3 = iVar2 + 9 + (iVar5 >> 1) & 0xfffffff8;
      if (*(uint *)(in_ECX + 8) != uVar3) {
        if ((int)uVar3 < 1) {
          FID_conflict__free(*(void **)(in_ECX + 4));
          *(undefined4 *)(in_ECX + 4) = 0;
        }
        else if (*(int *)(in_ECX + 4) == 0) {
          uVar4 = FUN_004c554b();
          *(undefined4 *)(in_ECX + 4) = uVar4;
        }
        else {
          uVar4 = FUN_004c553b(*(int *)(in_ECX + 4),uVar3 * 4);
          *(undefined4 *)(in_ECX + 4) = uVar4;
        }
        *(uint *)(in_ECX + 8) = uVar3;
      }
    }
    iVar2 = *(int *)(in_ECX + 0xc);
    *(int *)(in_ECX + 0xc) = iVar2 + 1;
    puVar1 = (undefined4 *)(*(int *)(in_ECX + 4) + iVar2 * 4);
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = local_8;
      local_8 = &DAT_00bfe12c;
    }
    _Memory = (int *)(local_8 + -8);
    if (_Memory != &DAT_00bfe124) {
      LOCK();
      iVar2 = *_Memory;
      *_Memory = *_Memory + -1;
      UNLOCK();
      if (iVar2 == 0) {
        FID_conflict__free(_Memory);
      }
    }
    uVar6 = uVar6 + 1 + iVar7;
  } while( true );
}

