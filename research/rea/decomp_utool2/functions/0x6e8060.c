// rea decompile_all
// name: FUN_006e8060
// address: 0x6e8060
// body: available
// range: 0x6e8060-0x6e81a3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006e8060(undefined4 param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00728afa;
  local_10 = ExceptionList;
  uVar3 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  FUN_006cfeb0(param_1);
  in_ECX[0x1c] = juce::SettableTooltipClient::vftable;
  in_ECX[0x1d] = &DAT_00bfe12c;
  *in_ECX = juce::ListBox::vftable;
  in_ECX[0x1c] = juce::ListBox::vftable;
  in_ECX[0x1e] = 0;
  in_ECX[0x1f] = 0;
  in_ECX[0x20] = 0;
  in_ECX[0x21] = 0;
  in_ECX[0x22] = 0;
  in_ECX[0x23] = 0x16;
  in_ECX[0x24] = 0;
  in_ECX[0x25] = 0;
  in_ECX[0x26] = 0xffffffff;
  in_ECX[0x27] = 0x1000000;
  in_ECX[0x28] = 0;
  in_ECX[0x29] = 0;
  in_ECX[0x2a] = 0;
  local_8._0_1_ = 5;
  local_8._1_3_ = 0;
  operator_new(0x338);
  local_8._0_1_ = 6;
  puVar4 = (undefined4 *)FUN_0049a610(in_ECX);
  local_8 = CONCAT31(local_8._1_3_,5);
  puVar1 = (undefined4 *)in_ECX[0x1f];
  if ((puVar1 != puVar4) && (in_ECX[0x1f] = puVar4, puVar1 != (undefined4 *)0x0)) {
    (**(code **)*puVar1)(1,uVar3);
  }
  piVar2 = (int *)in_ECX[0x1f];
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 0x28))(1);
    FUN_006e5050(piVar2,0xffffffff);
  }
  *(byte *)(in_ECX + 0x1a) = *(byte *)(in_ECX + 0x1a) | 0x20;
  FUN_006e73e0();
  ExceptionList = local_10;
  return;
}

