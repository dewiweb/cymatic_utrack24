// rea decompile_all
// name: FUN_006b5d40
// address: 0x6b5d40
// body: available
// range: 0x6b5d40-0x6b5dda inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006b5d40(int *param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined **ppuVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  void *local_14 [3];
  int local_8;
  
  uVar2 = FUN_006b5de0(local_14);
  cVar1 = FUN_0045d570(uVar2);
  FUN_0040f7f0();
  FID_conflict__free(local_14[0]);
  if (cVar1 == '\0') {
    FUN_006e86d0(3);
    uVar5 = param_1[2];
    uVar6 = 0;
    uVar4 = uVar5;
    if ((int)*(uint *)(local_8 + 0x160) < (int)uVar5) {
      uVar4 = *(uint *)(local_8 + 0x160);
    }
    if (0 < (int)uVar4) {
      do {
        if (uVar6 < uVar5) {
          ppuVar3 = (undefined **)(*param_1 + uVar6 * 4);
        }
        else {
          ppuVar3 = &PTR_DAT_00c7ed68;
        }
        uVar6 = uVar6 + 1;
        FUN_006e8760(ppuVar3,uVar6);
        uVar5 = param_1[2];
        uVar4 = uVar5;
        if ((int)*(uint *)(local_8 + 0x160) < (int)uVar5) {
          uVar4 = *(uint *)(local_8 + 0x160);
        }
      } while ((int)uVar6 < (int)uVar4);
    }
  }
  return;
}

