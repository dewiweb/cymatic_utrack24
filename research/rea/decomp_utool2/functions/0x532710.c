// rea decompile_all
// name: FUN_00532710
// address: 0x532710
// body: available
// range: 0x532710-0x5327ca inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00532710(void)

{
  int *piVar1;
  int iVar2;
  int in_ECX;
  undefined1 uVar3;
  undefined1 uVar4;
  int iVar5;
  uint local_18;
  uint local_14;
  undefined4 *local_10 [3];
  
  uVar3 = 0;
  uVar4 = 0;
  iVar5 = 0;
  local_14 = local_14 & 0xffffff00;
  local_18 = local_18 & 0xffffff00;
  if (0 < *(int *)(in_ECX + 0x4bc)) {
    do {
      FUN_0053f050(local_10);
      if (local_10[0] != (undefined4 *)0x0) {
        if (local_10[0][6] != *(int *)(in_ECX + 0x4ac)) {
          uVar4 = 1;
        }
        local_14 = CONCAT31(local_14._1_3_,uVar4);
        if (local_10[0][8] != *(int *)(in_ECX + 0x4b0)) {
          uVar3 = 1;
        }
        local_18 = CONCAT31(local_18._1_3_,uVar3);
        LOCK();
        piVar1 = local_10[0] + 1;
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)*local_10[0])(1);
        }
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < *(int *)(in_ECX + 0x4bc));
  }
  (**(code **)(**(int **)(in_ECX + 0x234) + 4))(local_14,local_18);
  return;
}

