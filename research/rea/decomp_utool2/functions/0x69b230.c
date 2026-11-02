// rea decompile_all
// name: FUN_0069b230
// address: 0x69b230
// body: available
// range: 0x69b230-0x69b2eb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0069b230(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  int in_ECX;
  uint uVar4;
  undefined4 *puVar5;
  uint uVar6;
  
  iVar2 = FUN_0069b350();
  uVar4 = iVar2 + param_1;
  uVar3 = FUN_0069b520();
  if (uVar4 < uVar3) {
    do {
      iVar2 = 0;
      if (0 < *(int *)(in_ECX + 0x90)) {
        puVar5 = *(undefined4 **)(in_ECX + 0x88);
        uVar3 = 0;
        do {
          puVar1 = (undefined4 *)*puVar5;
          uVar6 = uVar3;
          if ((((*(byte *)(puVar1 + 2) & 2) == 0) && (*(char *)*puVar1 != '\0')) &&
             (uVar6 = uVar3 + 1, uVar3 == uVar4)) {
            if ((*(byte *)(puVar1 + 2) & 1) != 0) {
              iVar2 = FUN_0069b570(uVar4);
              if (iVar2 == 0) {
                FUN_006e83a0(0,3);
                return 1;
              }
              FUN_006e83a0(*(undefined4 *)(iVar2 + 4),3);
              return 1;
            }
            break;
          }
          iVar2 = iVar2 + 1;
          puVar5 = puVar5 + 1;
          uVar3 = uVar6;
        } while (iVar2 < *(int *)(in_ECX + 0x90));
      }
      uVar4 = uVar4 + param_1;
      uVar3 = FUN_0069b520();
    } while (uVar4 < uVar3);
  }
  return 0;
}

