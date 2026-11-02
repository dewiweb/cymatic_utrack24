// rea decompile_all
// name: FUN_00418ea0
// address: 0x418ea0
// body: available
// range: 0x418ea0-0x418f72 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00418ea0(void)

{
  int *piVar1;
  undefined4 *puVar2;
  int *piVar3;
  uint uVar4;
  int *piVar5;
  int in_ECX;
  int *_Memory;
  int iVar6;
  uint uVar7;
  
  uVar7 = *(int *)(in_ECX + 0xc) - 1;
  if (-1 < (int)uVar7) {
    piVar1 = (int *)(in_ECX + 4);
    do {
      piVar5 = *(int **)(*piVar1 + uVar7 * 4);
      while (piVar5 != (int *)0x0) {
        piVar3 = (int *)piVar5[2];
        _Memory = (int *)(*piVar5 + -8);
        if (_Memory != &DAT_00bfe124) {
          LOCK();
          iVar6 = *_Memory;
          *_Memory = *_Memory + -1;
          UNLOCK();
          if (iVar6 == 0) {
            FID_conflict__free(_Memory);
          }
        }
        FUN_004bfe14(piVar5,0xc);
        piVar5 = piVar3;
      }
      uVar4 = *(uint *)(in_ECX + 0xc);
      if (uVar7 < uVar4) {
        *(undefined4 *)(*piVar1 + uVar7 * 4) = 0;
      }
      else if (-1 < (int)uVar7) {
        iVar6 = uVar4 + 1;
        if (*(int *)(in_ECX + 8) < iVar6) {
          if (iVar6 < 0) {
            iVar6 = uVar4 + 2;
          }
          FUN_00409cf0((iVar6 >> 1) + uVar4 + 9 & 0xfffffff8);
        }
        iVar6 = *(int *)(in_ECX + 0xc);
        *(int *)(in_ECX + 0xc) = iVar6 + 1;
        puVar2 = (undefined4 *)(*piVar1 + iVar6 * 4);
        if (puVar2 != (undefined4 *)0x0) {
          *puVar2 = 0;
        }
      }
      uVar7 = uVar7 - 1;
    } while (-1 < (int)uVar7);
  }
  *(undefined4 *)(in_ECX + 0x10) = 0;
  return;
}

