// rea decompile_all
// name: FUN_00657ae0
// address: 0x657ae0
// body: available
// range: 0x657ae0-0x657bf8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00657ae0(undefined4 param_1,uint param_2,uint param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  undefined1 *puVar10;
  undefined4 uVar11;
  
  iVar7 = param_3;
  puVar2 = (undefined1 *)(param_3 + 0x80);
  puVar10 = (undefined1 *)(param_3 + 0x84);
  puVar1 = (undefined1 *)(param_3 + 0x81);
  param_3 = 0;
  uVar8 = CONCAT31(CONCAT21(CONCAT11(*puVar2,*puVar1),*(undefined1 *)(iVar7 + 0x82)),
                   *(undefined1 *)(iVar7 + 0x83));
  if (uVar8 != 0) {
    do {
      uVar3 = puVar10[8];
      uVar11 = CONCAT31(CONCAT21(CONCAT11(*puVar10,puVar10[1]),puVar10[2]),puVar10[3]);
      uVar9 = CONCAT31(CONCAT21(CONCAT11(puVar10[4],puVar10[5]),puVar10[6]),puVar10[7]);
      uVar4 = puVar10[9];
      uVar5 = puVar10[10];
      uVar6 = puVar10[0xb];
      if ((puVar10[7] & 3) != 0) {
        FUN_006580d0(param_1,uVar11,"ICC profile tag start not a multiple of 4");
      }
      if ((param_2 < uVar9) ||
         (param_2 - uVar9 < CONCAT31(CONCAT21(CONCAT11(uVar3,uVar4),uVar5),uVar6))) {
        uVar11 = FUN_006580d0(param_1,uVar11,"ICC profile tag outside profile");
        return uVar11;
      }
      puVar10 = puVar10 + 0xc;
      param_3 = param_3 + 1;
    } while (param_3 < uVar8);
  }
  return 1;
}

