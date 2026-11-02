// rea decompile_all
// name: FUN_00445540
// address: 0x445540
// body: available
// range: 0x445540-0x445683 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00445540(undefined4 param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  char cVar3;
  int in_ECX;
  int iVar4;
  uint uVar5;
  
  uVar5 = 0;
  if (0 < *(int *)(in_ECX + 0x1c)) {
    do {
      iVar4 = *(int *)(*(int *)(in_ECX + 0x14) + uVar5 * 4);
      if (((iVar4 != -1) && (iVar4 != -2)) &&
         (cVar3 = FUN_00445690(param_1,0xffffffff,iVar4,
                               *(undefined4 *)(*(int *)(in_ECX + 8) + uVar5 * 4)), cVar3 == '\0')) {
        uVar2 = *(uint *)(in_ECX + 0x1c);
        if (uVar5 < uVar2) {
          *(undefined4 *)(*(int *)(in_ECX + 0x14) + uVar5 * 4) = 0xffffffff;
        }
        else if (-1 < (int)uVar5) {
          iVar4 = uVar2 + 1;
          if (*(int *)(in_ECX + 0x18) < iVar4) {
            if (iVar4 < 0) {
              iVar4 = uVar2 + 2;
            }
            FUN_00409cf0((iVar4 >> 1) + uVar2 + 9 & 0xfffffff8);
          }
          iVar4 = *(int *)(in_ECX + 0x1c);
          *(int *)(in_ECX + 0x1c) = iVar4 + 1;
          puVar1 = (undefined4 *)(*(int *)(in_ECX + 0x14) + iVar4 * 4);
          if (puVar1 != (undefined4 *)0x0) {
            *puVar1 = 0xffffffff;
          }
        }
      }
      uVar5 = uVar5 + 1;
    } while ((int)uVar5 < *(int *)(in_ECX + 0x1c));
  }
  uVar5 = 0;
  if (0 < *(int *)(in_ECX + 0x28)) {
    do {
      iVar4 = *(int *)(*(int *)(in_ECX + 0x20) + uVar5 * 4);
      if (((iVar4 != -1) && (iVar4 != -2)) &&
         (cVar3 = FUN_00445690(param_1,0xffffffff,iVar4,0x1000), cVar3 == '\0')) {
        uVar2 = *(uint *)(in_ECX + 0x28);
        if (uVar5 < uVar2) {
          *(undefined4 *)(*(int *)(in_ECX + 0x20) + uVar5 * 4) = 0xffffffff;
        }
        else if (-1 < (int)uVar5) {
          iVar4 = uVar2 + 1;
          if (*(int *)(in_ECX + 0x24) < iVar4) {
            if (iVar4 < 0) {
              iVar4 = uVar2 + 2;
            }
            FUN_00409cf0((iVar4 >> 1) + uVar2 + 9 & 0xfffffff8);
          }
          iVar4 = *(int *)(in_ECX + 0x28);
          *(int *)(in_ECX + 0x28) = iVar4 + 1;
          puVar1 = (undefined4 *)(*(int *)(in_ECX + 0x20) + iVar4 * 4);
          if (puVar1 != (undefined4 *)0x0) {
            *puVar1 = 0xffffffff;
          }
        }
      }
      uVar5 = uVar5 + 1;
    } while ((int)uVar5 < *(int *)(in_ECX + 0x28));
  }
  return;
}

