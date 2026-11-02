// rea decompile_all
// name: FUN_0066eda0
// address: 0x66eda0
// body: available
// range: 0x66eda0-0x66ee35 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0066eda0(int *param_1)

{
  undefined8 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  char cVar7;
  undefined4 local_20;
  undefined4 uStack_1c;
  
  iVar2 = param_1[0x57];
  local_20 = *(undefined4 *)(iVar2 + 0xc);
  uStack_1c = *(undefined4 *)(iVar2 + 0x10);
  uVar5 = *(undefined4 *)(iVar2 + 0x14);
  uVar6 = *(undefined4 *)(iVar2 + 0x18);
  uVar3 = *(undefined4 *)param_1[6];
  uVar4 = ((undefined4 *)param_1[6])[1];
  uVar1 = *(undefined8 *)(iVar2 + 0x1c);
  cVar7 = FUN_0066f220(7);
  if (cVar7 == '\0') {
    *(undefined4 *)(*param_1 + 0x14) = 0x18;
    (**(code **)*param_1)(param_1);
  }
  else {
    local_20 = 0;
    uStack_1c = 0;
  }
  *(undefined4 *)param_1[6] = uVar3;
  *(undefined4 *)(param_1[6] + 4) = uVar4;
  *(undefined4 *)(iVar2 + 0xc) = local_20;
  *(undefined4 *)(iVar2 + 0x10) = uStack_1c;
  *(undefined4 *)(iVar2 + 0x14) = uVar5;
  *(undefined4 *)(iVar2 + 0x18) = uVar6;
  *(undefined8 *)(iVar2 + 0x1c) = uVar1;
  return;
}

