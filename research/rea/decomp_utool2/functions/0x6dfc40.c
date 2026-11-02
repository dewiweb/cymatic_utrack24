// rea decompile_all
// name: FUN_006dfc40
// address: 0x6dfc40
// body: available
// range: 0x6dfc40-0x6dfca0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006dfc40(void)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  undefined4 uVar6;
  undefined1 *puVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined1 local_a4 [40];
  undefined1 local_7c [40];
  undefined1 local_54 [40];
  undefined1 local_2c [40];
  
  puVar7 = local_2c;
  uVar10 = 1;
  uVar9 = 0;
  uVar8 = 0;
  uVar6 = 0;
  puVar5 = local_54;
  uVar4 = 0;
  puVar3 = local_7c;
  uVar2 = 0;
  puVar1 = local_a4;
  FUN_006d1110(puVar1,0,puVar3,0,puVar5,0,puVar7,0,0,1);
  FUN_006a0310(puVar1,uVar2);
  FUN_006a0400(puVar3,uVar4);
  FUN_006a03b0(puVar5,uVar6);
  uVar2 = FUN_006a0360(puVar7,uVar8);
  FUN_006a0120(uVar2,uVar9,uVar10);
  return;
}

